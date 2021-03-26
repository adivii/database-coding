//Header
#include <iostream>
using namespace std;

//Membuat data username dan password
int jumlah_user = 3;
string dbuser[3] = {"adiwijaya","adiviihanyu","yatagarasu"};
string dbpass[3] = {"20juli2003","20juli2003!!","kuroneko"};

//Membuat prototype fungsi yang diperlukan untuk mengecek validitas login
int cek_user(string user);
bool cek_login(string user,string pass);

int main()
{	
	//Membuat variabel yang akan digunakan
	string input[2];
	int salah = 0;
	bool status;

	//Melakukan input dan pengecekan selama masih dibawah 3 kali salah
	while(salah < 3){
		system("cls");

		//Input username dan password
		cout << "Username\t: "; cin >> input[0];
		cout << "Password\t: "; cin >> input[1];

		//Mengupdate status login dengan username dan password yang diinput
		status = cek_login(input[0],input[1]);

		//Melakukan operasi berdasarkan status login
		if(status){
			cout << "Login Berhasil!" << endl;
			break;
		}
		else{
			salah++;
			cout << "Login Salah!" << endl;
			system("pause");
		}	
	}
	
	//Keluarkan peringatan ketika salah 3 kali
	if(salah==3){
		system("cls");
		cout << "Anda sudah gagal 3 kali. Silahkan hubungi admin" << endl;	
	}

	return 0;
}

//Fungsi untuk mengecek kebenaran username
int cek_user(string user){
	//Cek satu persatu data username
	for(int i=0;i<jumlah_user;i++){
		if(dbuser[i]==user){
			//Bila ditemukan, kembalikan nilai i sebagai index dalam mengecek password
			return i;
			break;
		}
	}

	//Jika tidak ditemukan, kembalikan kode 99
	return 99;
}

//Fungsi untuk mengecek kebenaran password berdasarkan index dari username
bool cek_login(string user,string pass){
	//Dapatkan index dengan funsi cek_user()
	int id = cek_user(user);
	
	//Jika kode adalah 99 atau username tidak sesuai, kembalikan status false
	if(id==99 || pass!=dbpass[id]){
		return false;
	}
	else{
		return true;
	}
}