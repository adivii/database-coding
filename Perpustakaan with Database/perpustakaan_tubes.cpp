#include <fstream> //Operasi File
#include <iostream> //Input dan Output Dasar
#include <conio.h> //Digunakan untuk fungsi getch
#include <windows.h> //Untuk beberapa operasi windows dasar (misal : Sleep)
using namespace std;

//Prototyping Fungsi
void register_user();
void login_user();
void load_user_data();
void load_book_data();
void refresh_user();
void refresh_book();
void load_user_book(string username);
void login_menu();
void main_menu();
void pinjam_buku();
void kembalikan_buku();

//Variabel
bool login_status = false;
int jumlah_user = 0;
int jumlah_buku = 0;
string user[1000][4];
string buku[1000][4];
string buku_dipinjam[4];
int current_user_id;
int current_book_id;

int main(){
	//Load Data
	load_user_data();
	load_book_data();
	
	//Launch Menu
	login_menu();

	return 0;
}

//Fungsi Login 
void login_user(){
	//Minta user masukkan username dan password
	string username,password;

	cout << "Username : ";getline(cin,username);
	cout << "Password : ";getline(cin,password);

	system("cls");

	for(int i = 0;i < jumlah_user;i++){
		if(username == user[i][0] && password == user[i][1]){
			current_user_id = i;
			current_book_id = 0;
			login_status = true;
			cout << "Login Berhasil!" << endl;
			load_user_book(username);
			while(login_status){
				main_menu();
			}

			//cin.ignore(1,'\n'); //Untuk menghindari error pada bagian login menu
			login_menu();
		}else{
			if(i == jumlah_user-1){
				cout << "Username Tidak Ditemukan!" << endl;
				login_menu();
			}else{
				continue;
			}
		}
	}

	Sleep(1000);
}

//Fungsi Register (Daftar)
void register_user(){
	//Membuka file data user
	fstream file, created_user;
	file.open("data_user.txt",ios::app); //Membuka dalam mode app(end) agar dapat ditambahkan isinya

	//Variabel lain yang dibutuhkan
	string username,password,nama;
	int duplicate = 0;
	
	if(file.fail()){
		cout << "File Load Error!" << endl;
	}else{
		//Minta user memasukkan data
		
		cout << "Username  : ";getline(cin,username);
		cout << "Password  : ";getline(cin,password);
		cout << "Nama Anda : ";getline(cin,nama);

		//Cek apakah data kosong
		if(username != "" && password != "" && nama != ""){
			//Masukkan data ke dalam file
			for(int i = 0;i < jumlah_user;i++){
				if(user[i][0] == username){ //Kalau username sudah ada, keluar dari looping
					duplicate++;
				}
			}

			if(duplicate == 0){
				file << endl << username << endl << password << endl << nama << endl << "0" << endl;

				//Buat File
				created_user.open("buku_user/"+username+".txt",ios::out);
				created_user.close();

				cout << "Register Berhasil!" << endl;

				//Refresh array data user
				load_user_data();
			}else{
				cout << "Username sudah ada!" << endl;
			}

		}else{
			cout << "Username/Password/Nama tidak boleh kosong!" << endl;
		}
	}

	//Tutup File
	file.close();

	Sleep(1000);
	login_menu();
}

//Fungsi untuk Load Data
void load_user_data(){
	//Buka File Data User
	fstream file; //Membuat variabel untuk menampung file
	file.open("data_user.txt",ios::in); //Membuka file dalam mode input

	jumlah_user = 0;

	//Input data
	if(file.fail()){
		cout << "File Load Error" << endl;
		abort();
	}else{
		while(!file.eof()){ //Buat perulangan untuk membaca seluruh isi file
			file.ignore(1,'\n');
			for(int i=0;i<4;i++){ //Buat perulangan untuk memasukkan 3 data dalam 1 baris array
				getline(file,user[jumlah_user][i]); //Input data ke dalam array
			}
			jumlah_user++;
		}
		cout << "User Load Done!" << endl;
		jumlah_user--;
	}

	Sleep(1000);

	//Tutup File
	file.close();
}

//Fungsi untuk Load Data Buku Universal
void load_book_data(){
	//Buka File Data Buku
	fstream file; //Membuat variabel untuk menampung file
	file.open("data_buku.txt",ios::in); //Membuka file dalam mode input

	jumlah_buku = 0;

	//Input data
	if(file.fail()){
		cout << "File Load Error" << endl;
		abort();
	}else{
		while(!file.eof()){ //Buat perulangan untuk membaca seluruh isi file
			file.ignore(1,'\n'); //Mengabaikan baris kosong
			for(int i = 0;i < 4;i++){ //Buat perulangan untuk memasukkan 4 data dalam 1 baris array
				getline(file , buku[jumlah_buku][i]); //Input data ke dalam array
			}
			jumlah_buku++;
		}
		cout << "Book Load Done!" << endl;
		jumlah_buku--;
	}

	Sleep(1000);

	//Tutup File
	file.close();
}

void refresh_book(){
	fstream file;
	file.open("data_buku.txt",ios::out);

	for(int i = 0;i < jumlah_buku;i++){
		file << endl;
		for(int j = 0;j < 4;j++){
			file << buku[i][j] << endl;
		}
	}

	file.close();
}

void refresh_user(){
	fstream file;
	file.open("data_user.txt",ios::out);

	for(int i = 0;i < jumlah_user;i++){
		file << endl;
		for(int j = 0;j < 4;j++){
			file << user[i][j] << endl;
		}
	}

	file.close();
}

//Fungsi untuk Load Data Buku yang sedang dipinjam oleh user
void load_user_book(string username){
	fstream file;

	file.open("buku_user/"+username+".txt",ios::in);

	if(file.fail()){
		cout << "File Load Error!" << endl;
		abort();
	}else{
		while(!file.eof()){
			file.ignore(1,'\n');
			for(int i = 0;i < 4;i++){
				getline(file,buku_dipinjam[i]);	
			}
		}

		cout << "User Load Done!" << endl;
	}

	Sleep(1000);
}

void login_menu(){
	system("cls");

	string choose;

	cout << "==============================================================" << endl;
	cout << "Login Menu" << endl;
	cout << "==============================================================" << endl;
	cout << "Ketik 'login' tanpa tanda petik untuk login." << endl;
	cout << "Ketik 'daftar' tanpa tanda petik untuk mendaftarkan akun." << endl;
	cout << "==============================================================" << endl;
	cout << "=> ";
	
	//cin.ignore(1,'\n');
	getline(cin,choose);

	if(choose == "login"){
		login_user();
	}else if(choose == "daftar"){
		register_user();
	}else{
		cout << "Input Salah!" << endl;
		Sleep(1000);
		login_menu();
	}
}

void main_menu(){
	string choose;

	system("cls");

	cout << "============================================================================================================" << endl;
	cout << "Halo " << user[current_user_id][2] << " :)" << endl;
	cout << "============================================================================================================" << endl;
	cout << "Berikut petunjuk penggunaan program kami : " << endl;
	cout << "Ketik 'pinjam' tanpa tanda petik untuk meminjam buku." << endl;
	cout << "Ketik 'pengembalian' tanpa tanda petik untuk masuk ke menu pengembalian buku." << endl;
	cout << "Ketik 'next' tanpa tanda petik untuk melihat buku berikutnya dalam daftar." << endl;
	cout << "Ketik 'back' tanpa tanda petik untuk melihat buku sebelumnya dalam daftar." << endl;
	cout << "Ketik id buku untuk mencari buku dalam daftar. Misal : '12051001' tanpa tanda petik akan merujuk pada Purpose." << endl;
	cout << "Ketik 'logout' tanpa tanda petik untuk logout dari sistem." << endl;
	cout << "============================================================================================================" << endl;
	cout << "Kode Buku   : " << buku[current_book_id][0] << "\n";
	cout << "Judul Buku  : " << buku[current_book_id][1] << "\n";
	cout << "Penulis     : " << buku[current_book_id][2] << "\n";
	cout << "Status      : " << buku[current_book_id][3] << "\n";
	cout << "============================================================================================================" << endl;
	cout << "=> "; cin >> choose;

	if(choose == "logout"){
		login_status = false;
		cin.ignore(1,'\n');
	}else if(choose == "next"){
		if(current_book_id == jumlah_buku-1){
			current_book_id = 0;
		}else{
			current_book_id++;
		}
	}else if(choose == "back"){
		if(current_book_id == 0){
			current_book_id = jumlah_buku-1;
		}else{
			current_book_id--;
		}
	}else if(choose == "pinjam"){
		pinjam_buku();
	}else if(choose == "pengembalian"){
		kembalikan_buku();
	}else{
		for(int i = 0;i < jumlah_buku;i++){
			if(choose == buku[i][0]){
				current_book_id = i;
				break;
			}else if(i == jumlah_buku-1 && choose != buku[i][0]){
				cout << "Input Salah atau Judul Tidak Ditemukan" << endl;

				Sleep(1000);
			}
		}
	}
}

void pinjam_buku(){
	system("cls");

	fstream file;
	file.open("buku_user/"+user[current_user_id][0]+".txt",ios::app);

	if(buku[current_book_id][3] == "Tersedia"){
		if(user[current_user_id][3] == "0"){
			buku[current_book_id][3] = "Dipinjam oleh " + user[current_user_id][2];
		
			//Transfer data
			for(int i = 0;i < 4;i++){
				file << buku[current_book_id][i] << endl;
			}

			file.close();

			user[current_user_id][3] = "1";

			load_user_book(user[current_user_id][0]);
			refresh_book();
			refresh_user();

			cout << "Peminjaman Sukses!" << endl;
		}else{
			cout << "Pinjam hanya 1 buku" << endl;
		}
	}else{
		cout << "Buku sedang " + buku[current_book_id][3];
	}

	Sleep(1000);
	main_menu();
}

void kembalikan_buku(){
		system("cls");

		//Supaya mengabaikan satu baris yang dianggap sebagai input
		cin.ignore(1,'\n');

		fstream file;
		
		string choose;

		cout << "============================================================================================================" << endl;
		cout << "Harap Konfirmasikan Pengembalian Buku Berikut : " << endl;
		cout << "============================================================================================================" << endl;
		cout << "Kode Buku   : " << buku_dipinjam[0] << "\n";
		cout << "Judul Buku  : " << buku_dipinjam[1] << "\n";
		cout << "Penulis     : " << buku_dipinjam[2] << "\n";
		cout << "Status      : " << buku_dipinjam[3] << "\n";
		cout << "============================================================================================================" << endl;
		cout << "Ketik 'kembalikan' tanpa tanda petik untuk mengembalikan buku." << endl;
		cout << "Ketik 'cancel' untuk kembali ke menu sebelumnya." << endl;
		cout << "============================================================================================================" << endl;
		cout << "=> ";getline(cin,choose);

		if(choose == "cancel"){
			main_menu();
		}else if(choose == "kembalikan"){
			file.open("buku_user/"+user[current_user_id][0]+".txt",ios::out);

			if(file.fail()){
				cout << "File Load Error!" << endl;

				Sleep(1000);

				abort();
			}else{
				file << endl;

				for(int i = 0;i < jumlah_buku;i++){
					if(buku[i][0] == buku_dipinjam[0]){
						buku[i][3] = "Tersedia";
					}
				}

				user[current_user_id][3] = "0";

				refresh_book();
				refresh_user();

				cout << "Pengembalian Sukses!" << endl;
			}
		}else{
			cout << "Input Salah!" << endl;
		}

		Sleep(1000);
		main_menu();
}