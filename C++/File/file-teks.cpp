#include <iostream>
#include <fstream> // fstream (in/out) ofstream (out) ifstream (in)
using namespace std;

int main()
{
	fstream input, output; //Dapat juga menggunakan ifstream untuk input dan ofstream untuk output
	string s;

	//Membuka file
	//nama_variabel.open("nama_file.txt",mode);
	//Detail lengkap untuk mode lihat halaman 279 buku (pdf ada, minta ae)
	//in out app
	input.open("input.txt",ios::in);
	output.open("output.txt",ios::app);

	if(input.fail()){ //Jika file tidak ada/error maka tampilkan pesan
		cout << "File gagal dibuka." << endl;
	}else{
		// while(!input.eof()){ //Selama belum mencapai akhir file, jalankan terus (eof = end of file)
		// 	//Pilih salah satu jenis pembacaan dibawah ini
		// 	getline(input,s); //Mengambil nilai dari file input dan memasukan ke variabel s (dengan kata lain : perbaris)
		// 	//input >> s; //Mengambil nilai hanya sampai spasi (dengan kata lain : perkata)
		// 	cout << s << endl;
		// 	output << s << endl; //Memasukan nilai dari variabel s ke file output
		// }
		cin >> s;
		output << s << endl;
		cout << endl << "Done Loading File Content(s)." << endl;
	}

	return 0;
}