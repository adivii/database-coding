#include <iostream>
using namespace std;

int main_menu();
void cek_saldo();
void tambah_tabungan();
void ambil_tabungan();
void transfer_tabungan();
void cetak_resi(int id);

string data_user[3][2] = {
	{"2017051001","Adiwijaya Satria Nusantara"},
	{"2017051002","Orang2"},
	{"2017051003","Orang3"}
};

long int data_tabungan[3] = {
	1000000,
	1000000,
	1000000
};

int main(){
	int return_status = 1;
	do{
		return_status = main_menu();
	}while(return_status==1);
}

int main_menu(){
	//cout << "Kelompok ## \n";
	//cout << "1. Adiwijaya Satria Nusantara - 2017051006 \n";
	//cout << "2. Player2 \n";
	//cout << "3. Player3 \n";
	//cout << "\n";
	cout << "============================================================ \n";
	cout << "========================= Tabungan ========================= \n";
	cout << "============================================================ \n";
	cout << "1. Cek Saldo \n";
	cout << "2. Tambah Tabungan \n";
	cout << "3. Ambil Tabungan \n";
	cout << "4. Transfer Tabungan \n";
	cout << "0. Exit \n\n";

	int x = 99;

	cout << "=> ";
	cin >> x;

	system("clear");
	switch(x){
		case 1:
			cek_saldo();
			return 1;
			break;
		case 2:
			tambah_tabungan();
			return 1;
			break;
		case 3:
			ambil_tabungan();
			return 1;
			break;
		case 4:
			transfer_tabungan();
			return 1;
			break;
		case 0:
			return 0;
			break;
	}
}

void cek_saldo(){
	int nomer_pengguna;

	cout << "Nomor Pengguna Anda : ";
	cin >> nomer_pengguna;

	int id = (nomer_pengguna%100) - 1;

	system("clear");

	cetak_resi(id);

	system("read confirmation");
	system("clear");
}

void tambah_tabungan(){
	int nomer_pengguna;

	cout << "Nomor Pengguna Anda : ";
	cin >> nomer_pengguna;

	int id = (nomer_pengguna%100) - 1;

	system("clear");

	int duit1;
	cout << "Jumlah uang yang akan ditabung : ";
	cin >> duit1;

	data_tabungan[id] += duit1;
	cetak_resi(id);

	system("read confirmation");
	system("clear");
}

void ambil_tabungan(){
	int nomer_pengguna;

	cout << "Nomor Pengguna Anda : ";
	cin >> nomer_pengguna;

	int id = (nomer_pengguna%100) - 1;

	system("clear");

	int duit1;
	cout << "Jumlah uang yang akan diambil : ";
	cin >> duit1;

	if(duit1<=data_tabungan[id]){
		data_tabungan[id] -= duit1;
		cetak_resi(id);
	}
	else{
		cout << "Saldo tidak cukup. Saldo anda : " << data_tabungan[id] << "\n";
	}
	system("read confirmation");
	system("clear");
}

void transfer_tabungan(){
	int nomer_pengguna1,nomer_pengguna2;

	cout << "Nomor Pengguna Anda   : ";
	cin >> nomer_pengguna1;

	cout << "Nomor Pengguna Tujuan : ";
	cin >> nomer_pengguna2;

	int id1 = (nomer_pengguna1%100) - 1;
	int id2 = (nomer_pengguna2%100) - 1;

	system("clear");

	int duit1;
	cout << "Jumlah uang yang akan ditransfer : ";
	cin >> duit1;

	if(duit1<=data_tabungan[id1]){
		data_tabungan[id1] -= duit1;
		data_tabungan[id2] += duit1;
		cetak_resi(id1);
	}
	else{
		cout << "Saldo tidak cukup. Saldo anda : " << data_tabungan[id1] << "\n";
	}
	system("read confirmation");
	system("clear");
}

void cetak_resi(int id){
	cout << "================================================== \n";
	cout << "==================== TABUNGAN ==================== \n";
	cout << "================================================== \n";
	cout << "\n";
	cout << "Nama Pengguna  : " << data_user[id][1] << "\n";
	cout << "Nomor Pengguna : " << data_user[id][0] << "\n";
	cout << "Saldo          : " << data_tabungan[id] << "\n";
	cout << "\n";
	cout << "================================================== \n";
	cout << "================================================== \n";
	cout << "================================================== \n";
}
