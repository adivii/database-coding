// Tinggal besok pagi kasih komen biar lebih jelas
// Mantap asw

#include <bits/stdc++.h>
using namespace std;

// Class Queue
class Queue{
private:
	deque<string> data;

public:
	bool isEmpty(){
		return data.size() == 0;
	}

	string getData(){
		if(!isEmpty()){
			return data.front();
		}else{
			return "";
		}
	}

	void Enqueue(string newData){
		data.push_back(newData);
	}

	void Dequeue(){
		if(!isEmpty()){
			return data.pop_front();
		}
	}

	void clear(){
		data.clear();
	}

	bool find(string _inData){
		return binary_search(data.begin(), data.end(), _inData);
	}
};

// Global variable
vector<string> username;
vector<string> password;
vector<string> book_id;
vector<vector<string>> book_data;
Queue request_list; // Menggunakan Class Queue

// Berfungsi membaca dan memasukkan database (user, request, dan buku)
void load_database();
void load_databook();
void load_request();
void update_book_data();
void update_request();

// Menu dan template
void print_header();
void start_menu();
void main_menu();
void admin_menu();

// Berfungsi untuk login
void login_app();
void login_admin();
bool validate_account(string _inUser, string _inPass);

// Mendaftar akun
void register_account();
bool validate_username_availability(string _inUser);
void submit_account(string _inUser, string _inPass);

// Membuat request
void create_request(string req_type, string username, string req_book);
void pinjam_buku(string _inUser, string _inId);
void kembalikan_buku(string _inUser);

// Memproses Request
string get_request_type(string req_code);
void proses_request(string _inUser, string req_type, string req_book);
void give_book(string _inUser, string id);
void take_book(string _inUser, string id);

// Lain-lain
string removeWhitespace(string _inStr); // Menghilangkan spasi

int main(){
	// Database loading
	load_database();
	load_databook();
	load_request();
	
	// Launch start menu
	start_menu();
}

void load_database(){
	ifstream file_user;
	ifstream file_pass;
	string temp;

	// Buka file
	file_user.open("main_database/username.txt");
	file_pass.open("main_database/password.txt");

	// Kosongkan database
	username.clear();
	password.clear();

	if(file_user.fail() || file_pass.fail()){ // Apabila terdapat kesalahan dalam pembukaan file
		cout << "Error loading database!" << endl;
		system("pause");
		exit(0); // To terminate program
	}else{
		// Load isi dari file username.txt
		while(!file_user.eof()){
			getline(file_user,temp);
			if(removeWhitespace(temp) != ""){
				username.push_back(temp);
			}
		}

		// Load isi dari file password.txt
		while(!file_pass.eof()){
			getline(file_pass,temp);
			if(removeWhitespace(temp) != ""){
				password.push_back(temp);
			}
		}
	}

	if(username.size() != password.size()){
		cout << "Error! Jumlah username (" << username.size() << ") dan password (" << password.size() << ") tidak sama!" << endl;
		system("pause");
		exit(0);
	}

	file_user.close();
	file_pass.close();
}

void load_databook(){
	ifstream file_book_id;
	ifstream file_book_data;

	vector<string> temp_data;
	string temp;

	// Buka file
	file_book_id.open("main_database/book_id.txt");
	file_book_data.open("main_database/book_data.txt");

	// Kosongkan database
	book_id.clear();
	book_data.clear();

	if(file_book_id.fail() || file_book_data.fail()){
		cout << "Error loading database!" << endl;
		system("pause");
		exit(0); // To terminate program
	}else{
		while(!file_book_id.eof()){
			getline(file_book_id,temp);
			if(removeWhitespace(temp) != ""){
				book_id.push_back(temp);
			}
		}

		while(!file_book_data.eof()){
			// Karena data buku terdiri atas 3 data, yaitu judul, penulis, dan status
			while(temp_data.size() < 3){
				getline(file_book_data,temp);
				if(removeWhitespace(temp) != ""){
					temp_data.push_back(temp);
				}

				if(file_book_data.eof()){
					break;
				}
			}

			if(temp_data.size() == 3){
				book_data.push_back(temp_data);
				temp_data.clear();
			}
		}
	}

	if(book_id.size() != book_data.size()){
		cout << "Error! Jumlah id (" << book_id.size() << ") dan data (" << book_data.size() << ") buku tidak sama!" << endl;
		system("pause");
		exit(0);
	}

	file_book_id.close();
	file_book_data.close();
}

void load_request(){
	ifstream file_req;
	string temp;

	// Buka file
	file_req.open("main_database/request_list.txt");

	// Bersihkan database
	request_list.clear();

	if(file_req.fail()){
		cout << "Error loading database!" << endl;
		system("pause");
		exit(0);
	}else{
		while(!file_req.eof()){
			getline(file_req,temp);
			if(removeWhitespace(temp) != ""){
				request_list.Enqueue(temp);
			}
		}
	}

	file_req.close();
}

void update_book_data(){
	ofstream file_book_data;

	vector<vector<string>>::iterator it = book_data.begin();

	file_book_data.open("main_database/book_data.txt",ios::out);

	if(file_book_data.fail()){
		cout << "Error loading database!" << endl;
		system("pause");
		exit(0); // To terminate program
	}else{
		file_book_data << "" << endl;
		while(it != book_data.end()){
			for(int i = 0;i < 3;i++){
				file_book_data << (*it)[i] << endl;
			}
			file_book_data << endl;
			it++;
		}
	}

	file_book_data.close();

	load_databook();
}

void update_request(){
	ofstream file_req;

	// Buka file
	file_req.open("main_database/request_list.txt",ios::out);

	if(file_req.fail()){
		cout << "Error loading database!" << endl;
		system("pause");
		exit(0);
	}else{
		file_req << "" << endl;
		while(!request_list.isEmpty()){
			file_req << request_list.getData() << endl;
			request_list.Dequeue();
		}
	}

	file_req.close();

	load_request();
}

void print_header(){
	cout << "============================" << endl;
	cout << "===== Perpustakaan 363 =====" << endl;
	cout << "============================" << endl;
	cout << "============================" << endl;
}

void start_menu(){
	string choose;

	system("cls");
	print_header();
	cout << "Ketik \"login\" tanpa tanda petik untuk login ke dalam aplikasi" << endl;
	cout << "Ketik \"admin\" tanpa tanda petik untuk login sebagai admin " << endl;
	cout << "Ketik \"register\" tanpa tanda petik untuk membuat akun" << endl;
	cout << "Ketik \"exit\" tanpa tanda petik untuk keluar dari aplikasi" << endl;
	cout << "============================" << endl;
	cout << "=> ";getline(cin, choose);

	if(removeWhitespace(choose) == "login"){
		login_app();
	}else if(removeWhitespace(choose) == "admin"){
		login_admin();
	}else if(removeWhitespace(choose) == "register"){
		register_account();
	}else if(removeWhitespace(choose) == "exit"){
		exit(0);
	}else{
		cout << "Wrong Command!" << endl;
		system("pause");
		start_menu();
	}
}

void main_menu(string _inUser){
	vector<string>::iterator book_id_it = book_id.begin();
	vector<vector<string>>::iterator book_data_it = book_data.begin();

	string choose;

	while(true){
		system("cls");
		print_header();
		cout << "ID      : " << *book_id_it << endl;
		cout << "Judul   : " << (*book_data_it)[0] << endl;
		cout << "Penulis : " << (*book_data_it)[1] << endl;
		cout << "Status  : " << (*book_data_it)[2] << endl;
		cout << "============================" << endl;
		cout << "Ketik \"next\" tanpa tanda petik untuk melihat buku selanjutnya" << endl;
		cout << "Ketik \"back\" tanpa tanda petik untuk melihat buku sebelumnya" << endl;
		cout << "Ketik \"pinjam\" tanpa tanda petik untuk meminjam buku ini" << endl;
		cout << "Ketik \"kembalikan\" tanpa tanda petik untuk mengembalikan buku yang sedang dipinjam" << endl;
		cout << "Ketik \"logout\" tanpa tanda petik untuk logout" << endl;
		cout << "============================" << endl;
		cout << "=> "; getline(cin,choose);

		if(removeWhitespace(choose) == "next"){
			book_id_it++;
			book_data_it++;
			
			if(book_id_it == book_id.end() || book_data_it == book_data.end()){
				book_id_it = book_id.begin();
				book_data_it = book_data.begin();
			}
		}else if(removeWhitespace(choose) == "back"){
			if(book_id_it == book_id.begin() || book_data_it == book_data.begin()){
				book_id_it = book_id.end()-1;
				book_data_it = book_data.end()-1;
			}else{
				book_id_it--;
				book_data_it--;
			}
		}else if(removeWhitespace(choose) == "pinjam"){
			pinjam_buku(_inUser,*book_id_it);
		}else if(removeWhitespace(choose) == "kembalikan"){
			kembalikan_buku(_inUser);
		}else if(removeWhitespace(choose) == "logout"){
			start_menu();
		}else{
			cout << "Wrong Command!" << endl;
			system("pause");
		}
	}
}

void admin_menu(){
	ifstream opened_file;
	char ch;
	string choose;
	string current_request_user, req_code, requested_book_id;

	current_request_user = request_list.getData();
	cout << current_request_user << endl;

	if(request_list.isEmpty()){
		system("cls");
		print_header();
		cout << "No Request" << endl;
		system("pause");
		start_menu();
	}else{
		opened_file.open("user_request/"+current_request_user+".txt");
	}

	while(!request_list.isEmpty()){
		if(opened_file.fail()){
			cout << "Error loading database!" << endl;
			system("pause");
			exit(0); // To terminate program
		}

		// Membaca tipe request
		while(ch = opened_file.get()){
			if(ch == '#'){
				break;
			}else{
				req_code.push_back(ch);
			}
		}

		// Membaca id buku yang direquest
		opened_file.seekg(4,ios::beg);
		getline(opened_file,requested_book_id);

		system("cls");
		print_header();
		cout << "Username       : " << current_request_user << endl;
		cout << "Request Type   : " << get_request_type(req_code) << endl;
		cout << "Requested Book : " << requested_book_id << endl;
		cout << "============================" << endl;
		cout << "Ketik \"proses\" tanpa tanda petik untuk memproses request" << endl;
		cout << "Ketik \"logout\" tanpa tanda petik untuk logout" << endl;
		cout << "============================" << endl;
		cout << "=> ";getline(cin,choose);

		if(removeWhitespace(choose) == "proses"){
			proses_request(current_request_user, get_request_type(req_code), requested_book_id);
		}else if(removeWhitespace(choose) == "logout"){
			opened_file.close();
			start_menu();
		}else{
			cout << "Wrong Command!" << endl;
			system("pause");
			admin_menu();
		}
	}
}

void login_app(){
	string user,pass;

	system("cls");
	print_header();
	cout << "Username : "; getline(cin,user);
	cout << "Password : "; getline(cin,pass);

	if(validate_account(user, pass)){
		main_menu(user);
	}else{
		cout << "Username atau Password Salah!" << endl;
		system("pause");
		start_menu();
	}
}

void login_admin(){
	string user,pass;

	system("cls");
	print_header();
	cout << "Username : "; getline(cin,user);
	cout << "Password : "; getline(cin,pass);

	if(user == "adiwijaya" && pass == "ilkomp2020"){
		admin_menu();
	}else{
		cout << "Username atau Password Salah!" << endl;
		system("pause");
		start_menu();
	}
}

bool validate_account(string _inUser, string _inPass){
	int user_id, pass_id;

	vector<string>::iterator user_it;
	vector<string>::iterator pass_it;

	user_it = find(username.begin(),username.end(),_inUser); // Mencari username pada database
	pass_it = find(password.begin(),password.end(),_inPass); // Mencari password pada database

	user_id = user_it - username.begin(); // Mendapatkan index data username
	pass_id = pass_it - password.begin(); // Mendapatkan index data password

	// Apabila index username sama dengan index password, serta username dan password ada
	// Username dikatakan ada apabila iteratornya bukan terletak pada end, begitupun dengan password
	if(user_id == pass_id && user_it != username.end() && pass_it != password.end()){
		return true;
	}else{
		return false;
	}
}

void register_account(){
	system("cls");

	string user, pass;

	print_header();
	cout << "Username : "; getline(cin,user);
	cout << "Password : "; getline(cin,pass);

	if(validate_username_availability(user)){
		submit_account(user,pass);
		load_database();
		cout << "Account Created!" << endl;
	}else{
		cout << "Username sudah terpakai!" << endl;
	}

	system("pause");
	start_menu();
}

bool validate_username_availability(string _inUser){
	vector<string>::iterator it;

	it = find(username.begin(), username.end(), _inUser);

	return it == username.end(); // Kembalikan true ketika username tersedia (belum terpakai)	
}

void submit_account(string _inUser, string _inPass){
	ofstream file_user, file_pass, created_file;

	file_user.open("main_database/username.txt",ios::app);
	file_pass.open("main_database/password.txt",ios::app);

	if(file_user.fail() || file_pass.fail()){
		cout << "Error Loading File!" << endl;
		system("pause");
		exit(0); // To terminate program
	}else{
		file_user << _inUser << endl;
		file_pass << _inPass << endl;

		// Buat file
		created_file.open("user_log/"+_inUser+".txt");
		created_file.close();

		created_file.open("user_request/"+_inUser+".txt");
		created_file.close();

		created_file.open("user_book/"+_inUser+".txt");
		created_file.close();
	}

	file_user.close();
	file_pass.close();
}

void create_request(string req_type, string _inUser, string req_book){
	ofstream file_user, file_req, file_log;
	string req_code;

	if(!request_list.find(_inUser)){
		file_user.open("user_request/"+_inUser+".txt");
		file_req.open("main_database/request_list.txt",ios::app);
		file_log.open("user_log/"+_inUser+".txt",ios::app);

		if(file_user.fail() || file_req.fail() || file_log.fail()){
			cout << "Error Loading Database!" << endl;
			system("pause");
			exit(0);
		}else{
			file_req << _inUser << endl;

			if(req_type == "Peminjaman"){
				req_code = "001";
			}else if(req_type == "Pengembalian"){
				req_code = "002";
			}

			file_user << req_code << "#" << req_book << endl;
			file_log << req_code << "#" << req_type << "#" << req_book << endl;

			cout << "Request anda sudah dibuat, mohon tunggu konfirmasi dari admin" << endl;
			
		}
		file_user.close();
	}else{
		cout << "Mohon tunggu request sebelumnya dikonfirmasi oleh admin" << endl;
	}

	
	file_req.close();
	file_log.close();

	load_request();
}

void pinjam_buku(string _inUser, string _inId){
	int book_index = find(book_id.begin(), book_id.end(), _inId) - book_id.begin();
	string temp;

	if(book_data[book_index][2] == "Tersedia"){
		fstream file_user;
		string temp;

		file_user.open("user_book/"+_inUser+".txt",ios::in);

		if(file_user.fail()){
			cout << "Error Loading Database!" << endl;
			system("pause");
			exit(0);
		}else{
			getline(file_user,temp);
			if(removeWhitespace(temp) == ""){
				create_request("Peminjaman", _inUser, _inId);
			}else{
				cout << "Anda hanya dapat meminjam 1 buku" << endl;
			}
		}

		file_user.close();
	}else{
		cout << "Buku sedang dipinjam oleh orang lain. Request Tertolak!" << endl;
	}

	system("pause");
	main_menu(_inUser);
}

void kembalikan_buku(string _inUser){
	ifstream file_user;
	string id;

	file_user.open("user_book/"+_inUser+".txt");

	if(file_user.fail()){
		cout << "Error Loading Database!" << endl;
		system("pause");
		exit(0);
	}else{
		getline(file_user,id);
		if(removeWhitespace(id) == ""){
			cout << "Anda belum meminjam buku apapun!" << endl;
			system("pause");
			main_menu(_inUser);
		}else{
			create_request("Pengembalian",_inUser,id);
		}
	}

	file_user.close();

	system("pause");
	main_menu(_inUser);
}

string get_request_type(string req_code){
	string result = "";

	if(req_code == "001"){
		result = "Peminjaman";
	}else if(req_code == "002"){
		result = "Pengembalian";
	}

	return result;
}

void proses_request(string _inUser, string req_type, string req_book){
	ofstream file_user;

	file_user.open("user_request/"+_inUser+".txt");

	if(file_user.fail()){
		cout << "Error Loading Database!" << endl;
		system("pause");
		exit(0);
	}else{
		if(req_type == "Peminjaman"){
			give_book(_inUser, req_book);
		}else if(req_type == "Pengembalian"){
			take_book(_inUser, req_book);
		}

		file_user << "";

		system("pause");
		admin_menu();
	}

	file_user.close();
}

void give_book(string _inUser, string id){
	int book_index = find(book_id.begin(), book_id.end(), id) - book_id.begin();
	ofstream file_user;
	string temp;

	if(book_data[book_index][2] == "Tersedia"){
		file_user.open("user_book/"+_inUser+".txt");

		if(file_user.fail()){
			cout << "Error Loading Database!" << endl;
			system("pause");
			exit(0);
		}else{			
			file_user << id << endl;
			book_data[book_index][2] = "Dipinjam oleh " + _inUser;
			cout << "Request Berhasil Diproses!" << endl;
		}

		file_user.close();
	}else{
		cout << "Buku sedang dipinjam oleh user lain" << endl;
	}

	request_list.Dequeue();
	update_book_data();
	update_request();
}

void take_book(string _inUser, string id){
	ofstream file_book;
	int book_index = find(book_id.begin(), book_id.end(), id) - book_id.begin();

	file_book.open("user_book/"+_inUser+".txt");

	if(file_book.fail()){
		cout << "Error Loading Database!" << endl;
		system("pause");
		exit(0);
	}else{
		file_book << "";
		book_data[book_index][2] = "Tersedia";

		cout << "Request Berhasil Diproses" << endl;
	}

	file_book.close();
	request_list.Dequeue();
	update_book_data();
	update_request();
}

string removeWhitespace(string _inStr){
	string result;
	string::iterator it;

	it = _inStr.begin();

	while(it != _inStr.end()){
		if(*it != ' '){
			result.push_back(*it);
		}
		it++;
	}

	return result;
}