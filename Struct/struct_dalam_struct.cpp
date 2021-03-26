#include <iostream>
using namespace std;

string nama_bulan[12] = {"Januari","Februari","Maret","April","Mei","Juni","Juli","Agustus","September","Oktober","November","Desember"};

int main(){
	//Struct 1
	struct tanggal{
		int tanggal;
		string bulan;
		int tahun;
	};

	//Struct 2
	struct data_orang{
		string nama;
		tanggal tanggal_lahir;
	};

	data_orang orang1;

	orang1.nama = "Adiwijaya";
	orang1.tanggal_lahir.tanggal = 20;
	orang1.tanggal_lahir.bulan = nama_bulan[7];
	orang1.tanggal_lahir.tahun = 2003;

	cout << orang1.nama << " Lahir Pada " << orang1.tanggal_lahir.tanggal << " " << orang1.tanggal_lahir.bulan << " " << orang1.tanggal_lahir.tahun;

	return 0;
}
