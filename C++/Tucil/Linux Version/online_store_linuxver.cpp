#include <iostream>
using namespace std;

void header(){
	cout << "============================================================= \n";
	cout << "==================== Simple Online Store ==================== \n";
	cout << "============================================================= \n";
}

int data_saldo[3] {
	25000000,
	25000000,
	25000000
};

string data_pengguna[3][2]{
	{"adiwijaya","Adiwijaya Satria Nusantara"},
	{"2017051002","Blank Name"},
	{"2017051003","Blank Name"}
};

string data_barang[4]{
	"Your Name by Shinkai Makoto",
	"Hyouka by Yonezawa Honobu",
	"Mushaf Al-Hilali",
	"Dompet Sabiq Leather"
};

int data_harga[4]{
	99000,
	69000,
	75000,
	150000
};

int cek_user(string username);
void beli_barang(int id_barang);
void cek_saldo();
void isi_saldo();
void buka_toko();

int main(){
	bool exit_status = false;
	int pilihan;
	do{
		header();
		cout << "1) Isi Saldo \n";
		cout << "2) Cek Saldo \n";
		cout << "3) Buka Toko \n";
		cout << "0) Exit \n";
		cout << "============================================================= \n";
		cout << "\n=> ";cin >> pilihan;

		switch(pilihan){
			case 1:
				isi_saldo();
				break;
			case 2:
				cek_saldo();
				break;
			case 3:
				buka_toko();
				break;
			case 0:
				exit_status = true;
				break;
		}
	}while(!exit_status);
}

void cek_saldo(){
	system("clear");

	string nama_pengguna;int id_pengguna;

	cout << "Nama Pengguna : ";cin >> nama_pengguna;
	id_pengguna = cek_user(nama_pengguna);

	system("clear");
	header();
	cout << "Nama Pengguna : " << data_pengguna[id_pengguna][0] << "\n";
	cout << "Nama          : " << data_pengguna[id_pengguna][1] << "\n";
	cout << "Saldo         : " << data_saldo[id_pengguna] << "\n";
	cout << "============================================================= \n";
	system("read confirmation");
	system("clear");
}

void isi_saldo(){
	system("clear");

	int jumlah_isi;
	string nama_pengguna;int id_pengguna;

	cout << "Nama Pengguna : ";cin >> nama_pengguna;
	id_pengguna = cek_user(nama_pengguna);
	data_saldo[id_pengguna] += jumlah_isi;

	system("clear");
	header();
	cout << "Nama Pengguna : " << data_pengguna[id_pengguna][0] << "\n";
	cout << "Nama          : " << data_pengguna[id_pengguna][1] << "\n";
	cout << "Saldo         : " << data_saldo[id_pengguna] << "\n";
	cout << "============================================================= \n";
	system("read confirmation");
	system("clear");
}

int cek_user(string username){
	for(int i=0;i<3;i++){
		if(data_pengguna[i][0]==username){
			return i;
		}
	}
}

void buka_toko(){
	string choose;

	for(int i=0;i<4;i++){
		system("clear");
		header();
		cout << "Ketik next untuk melanjut ke barang selanjutnya, \n";
		cout << "back untuk kembali ke barang sebelumnya, \n";
		cout << "buy untuk membeli barang. \n";
		cout << "============================================================= \n";
		cout << "Nama Barang : " << data_barang[i] << "\n";
		cout << "Harga       : " << data_harga[i] << "\n";
		cout << "============================================================= \n";
		cout << "\n=> ";cin >> choose;

		if(choose=="next"){
			if(i==3){
				i = -1;
			}
			else{
				continue;
			}
		}
		else if(choose=="back"){
			if(i==0){
				i = 2;
			}
			else{
				i -= 2;
			}
		}
		else if(choose=="buy") {
			system("clear");
			beli_barang(i);
			break;
		}
		else{
			cout << "Salah Input";system("read confirmation");
			i--;
		}
	}
}

void beli_barang(int id_barang){
	string nama_pengguna;
	cout << "Nama Pengguna : "; cin >> nama_pengguna;

	int id_pengguna = cek_user(nama_pengguna);

	system("clear");
	header();
	if(data_harga[id_barang]<=data_saldo[id_pengguna]){
		data_saldo[id_pengguna] -= data_harga[id_barang];
		cout << "Nama Pengguna : " << data_pengguna[id_pengguna][0] << "\n";
		cout << "Nama          : " << data_pengguna[id_pengguna][1] << "\n";
		cout << "Sisa Saldo    : " << data_saldo[id_pengguna] << "\n";
		cout << "============================================================= \n";
		system("read confirmation");
		system("clear");
	}
	else{
		cout << "Saldo Tidak Cukup! \n";
		cout << "============================================================= \n";
		system("read confirmation");
		system("clear");
	}
}
