/* LATIHAN OOP YANG SANGAT SANGAT DASAR SEKALI :) */

#include <iostream>
using namespace std;

/*
Membuat Class
class nama_class{
	tipe specifier:
		sintaks;

	tipe specifier2:
		sintaks;
}
*/
class data_mhs{
	private : //Tipe specifier yang menandakan bahwa semua yang berada dibawah ini hanya dapat diakses dalam class ini saja
		string nim = "2017051006";
		string nama = "Adiwijaya Satria Nusantara";
	public : //Semua yang ada di bawah ini dapat diakses dimanapun
		void cetak_nim(){
			cout << nim << endl;
		}

		void cetak_nama(){
			cout << nama << endl;
		}
};

int main(int argc, char const *argv[])
{
	//Membuat Object
	data_mhs data;

	//Memanggil fungsi dalam class
	data.cetak_nim();
	data.cetak_nama();

	return 0;
}
