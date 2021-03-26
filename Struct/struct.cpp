#include <iostream>
using namespace std;

int main(){
	//Membuat struct
	/* Bentuk Umum :
		struct nama_struct{
			tipe_data1 nama_variabel1;
			tipe_data2 nama_variabel2;
			tipe_data3 nama_variabel3;
			..........................
			dst
		};
	*/

	struct data_mahasiswa{
		int npm;
		string nama;
	};

	//Membuat variabel dengan tipe data struct
	/* Bentuk umum :
		nama_struct nama_variabel;
	*/
	data_mahasiswa data;

	//Melakukan operasi pada variabel
	/* Bentuk umum :
		nama_variabel.nama_variabel_struct;
	*/
	data.npm = 2017051006;
	data.nama = "Adiwijaya";

	cout << data.npm << " - " << data.nama << "\n";
	return 0;
}
	