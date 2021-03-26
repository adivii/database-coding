//header
#include <iostream>
using namespace std;

//variabel global

//variabel untuk menyimpan data pengguna
string data_user[3][2] = {
	{"adiwijaya","Adiwijaya Satria Nusantara"},
	{"2017051061","M. Daffa Putra Wibowo"},
	{"2017051050","Joy Hans Christabel Sinaga"}
};

//variabel untuk menyimpan data Peminjaman pengguna
int jumlah_pinjam[3]{
	0,
	0,
	0
};

//masih sama dengan diatas
//[jumlah user][jumlah maks buku dipinjam][data yang dimiliki buku]
string buku_dipinjam[3][1][4]; //untuk menampung data buku yang sedang dipinjam oleh user

//variabel untuk menyimpan data buku
string data_buku[24][4] = {
	{"12051001","Drama","Juna Bei","Tersedia"},
	{"12051002","Pelik","Ary Nilandari","Tersedia"},
	{"12051003","Crying Doesn't Change A Thing","Park Joon","Tersedia"},
	{"12051004","Cecilia and The Angel","Jostein Gaarder","Tersedia"},
	{"12051005","Barichala","Khrisna Pabichara","Tersedia"},
	{"12051006","Purpose","Alamanda Shantika Santoso","Tersedia"},
	{"12051007","Curiosity House - The Screaming Statue","Lauren Oliver & H.C. Chester","Tersedia"},
	{"12051008","The Orange Girl","Jostein Gaarder","Tersedia"},
	{"12051009","Hyouka","Yonezawa Honobu","Tersedia"},
	{"12051010","Your Name","Shinkai Makoto","Tersedia"},
	{"12051011","Hujan","Tere Liye","Tersedia"},
	{"12051012","Everyday English Idiom","A. Dayu Pratyahara","Tersedia"},
	{"12051013","Aku, Kamu, & Al - Quran","@nasihatku","Tersedia"},
	{"12051014","Bara","Febrialdi R.","Tersedia"},
	{"12051015","Alcatraz VS. The Evil Librarians - The Knight of Crystallia","Brandon Sanderson","Tersedia"},
	{"12051016","Dunia dari Keping Ingatan","F. Aziz Manna","Tersedia"},
	{"12051017","Closer","Roderick Gordon & Brian Williams","Tersedia"},
	{"12051018","Jatuh ke Angkasa","Nabila Anastasy Fahzaria","Tersedia"},
	{"12051019","The Bartimaeus Trilogy - The Golem's Eye","Jonathan Stroud","Tersedia"},
	{"12051020","The Wonder Girl","Alleya Hanifa","Tersedia"},
	{"12051021","Anak Sejuta Bintang","Akmal Nasery Basral","Tersedia"},
	{"12051022","Pemrograman C dan C++","Adam Mukharil Bachtiar","Tersedia"},
	{"12051023","Pendidikan Agama Islam Berbasis Karakter di Perguruan Tinggi","Tim Dosen Pendidikan Agama Islam Universitas Lampung","Tersedia"},
	{"12051024","Sapta Gahara","Adiwijaya Satria Nusantara","Tersedia"}
};

//prototyping fungsi
int show_buku();
int pinjam_buku(int id_buku);
int kembalikan_buku();
int cek_user(string username);
int cek_buku(string buku);

int main(){
	//membuat bool untuk mengatur looping menu
	bool exit_status = false;
	int selection;

	//membuat menu
	do{
		cout << "============================================================ \n";
		cout << "=================== Perpustakaan Bersama =================== \n";
		cout << "============================================================ \n";
		cout << "1) Daftar Buku dan Peminjaman \n";
		cout << "2) Kembalikan Buku \n";
		cout << "0) Exit \n";
		cout << "\n=> ";

		cin >> selection;

		//memproses pilihan
		switch(selection){
			case 0 :
				exit_status = true;
				break;
			case 1 :
				show_buku();
				break;
			case 2 :
				kembalikan_buku();
				break;
			default :
				cout << "Salah Input! \n";
				system("pause");
				system("cls");
				break;
		}
	}while(exit_status == false);

	return 0;
}

int show_buku(){
	string choose;

	//perulangan untuk menampilkan buku satu persatu
	for(int i=0;i<24;i++){
		system("cls");
		cout << "============================================================ \n";
		cout << "=================== Perpustakaan Bersama =================== \n";
		cout << "============================================================ \n";
		cout << "Ketik next untuk melanjut ke buku selanjutnya, \n";
		cout << "back untuk kembali ke buku sebelumnya, \n";
		cout << "pinjam untuk meminjam buku yang sekarang ditampilkan. \n";
		cout << "============================================================= \n";
		cout << "Kode Buku   : " << data_buku[i][0] << "\n";
		cout << "Judul Buku  : " << data_buku[i][1] << "\n";
		cout << "Penulis     : " << data_buku[i][2] << "\n";
		cout << "Status      : " << data_buku[i][3] << "\n";
		cout << "============================================================= \n";
		cout << "\n=> ";cin >> choose;

		//navigasi tampilan buku

		//buku selanjutnya dalam daftar
		if(choose=="next"){
			if(i==23){
				i = -1;
			}
			else{
				continue;
			}
		}

		//buku sebelumnya dalam daftar
		else if(choose=="back"){
			if(i==0){
				i = 22;
			}
			else{
				i -= 2;
			}
		}

		//pinjam buku yang ditampilkan
		else if(choose=="pinjam") {
			system("cls");
			pinjam_buku(i);
			break;
		}

		//menampung kesalahan input
		else{
			cout << "Salah Input";system("pause");
			i--;
		}
	}

	return 0;
}

//algoritma peminjaman buku
int pinjam_buku(int id_buku){
	system("cls");
	
	string temp_pengguna;
	int id_pengguna;
	
	cout << "============================================================ \n";
	cout << "=================== Perpustakaan Bersama =================== \n";
	cout << "============================================================ \n";
	cout << "Username Anda               : ";
	cin >> temp_pengguna;

	id_pengguna = cek_user(temp_pengguna);

	if(id_pengguna == 99){
		cout << "Username tidak ditemukan \n";
	}

	else{
		if(data_buku[id_buku][3]=="Tersedia" && jumlah_pinjam[id_pengguna]==0){ //memastikan buku yang dipilih tersedia dan user belum meminjam buku
			data_buku[id_buku][3] = "Dipinjam Oleh " + data_user[id_pengguna][1]; //update status buku

			//mengisikan data buku yang dipinjam ke dalam daftar buku yang dipinjam
			for(int i=0;i<4;i++){
				buku_dipinjam[id_pengguna][jumlah_pinjam[id_pengguna]][i] = data_buku[id_buku][i];
			}

			//menambah jumlah total buku yang dipinjam oleh user
			jumlah_pinjam[id_pengguna] += 1;

			//tampilkan laporan
			cout << "============================================================ \n";
			cout << "=================== Peminjaman Berhasil! =================== \n";
			cout << "============================================================ \n";
			cout << "ID Buku    : " << data_buku[id_buku][0] << "\n";
			cout << "Judul Buku : " << data_buku[id_buku][1] << "\n";
			cout << "Pengarang  : " << data_buku[id_buku][2] << "\n";
			cout << "Status     : " << data_buku[id_buku][3] << "\n";
			cout << "============================================================ \n";
		}
		else if(jumlah_pinjam[id_pengguna]!=0){
			cout << "============================================================ \n";
			cout << "Anda hanya bisa meminjam 1 buku \n";
			cout << "============================================================ \n";
		}
		else{ //ditampilkan ketika status buku sedang dipinjam
			cout << "============================================================ \n";
			cout << "Buku sedang " << data_buku[id_buku][3] << "\n";
			cout << "============================================================ \n";
		}		
	}
	
	system("pause");
	system("cls");

	return 0;
}

//algoritma Pengembalian buku
int kembalikan_buku(){
	system("cls");
	int id_pengguna;
	string temp_pengguna, choose;
	cout << "============================================================ \n";
	cout << "=================== Perpustakaan Bersama =================== \n";
	cout << "============================================================ \n";

	//meminta username pengguna
	cout << "Username Anda                   : ";cin >> temp_pengguna;
	id_pengguna = cek_user(temp_pengguna);

	if(id_pengguna!=99){
		//Jika Belum Meminjam Apapapun
		if(jumlah_pinjam[id_pengguna]==0){
			cout << "Anda belum meminjam apapapun \n";
		}

		//menampilkan buku yang sedang dipinjam satu persatu
		for(int i=0;i<jumlah_pinjam[id_pengguna];i++){
			system("cls");
			cout << "============================================================ \n";
			cout << "=================== Perpustakaan Bersama =================== \n";
			cout << "============================================================ \n";
			cout << "ID Buku    : " << buku_dipinjam[id_pengguna][i][0] << "\n";
			cout << "Judul Buku : " << buku_dipinjam[id_pengguna][i][1] << "\n";
			cout << "Pengarang  : " << buku_dipinjam[id_pengguna][i][2] << "\n";
			cout << "Status     : " << buku_dipinjam[id_pengguna][i][3] << "\n";
			cout << "============================================================ \n";
			cout << "Ketik kembalikan untuk mengembalikan buku\n";
			cout << "Ketik cancel untuk kembali ke menu utama\n";
			cout << "============================================================ \n";
			cout << "\n=> ";cin >> choose;

			//navigasi (sama seperti diatas)
			if(choose=="kembalikan") {
				system("cls");

				//algoritma Pengembalian
				int id_buku = cek_buku(buku_dipinjam[id_pengguna][i][0]);

				data_buku[id_buku][3] = "Tersedia";
				jumlah_pinjam[id_pengguna] -= 1;

				//tampilkan laporan
				cout << "============================================================ \n";
				cout << "================== Pengembalian Berhasil! ================== \n";
				cout << "============================================================ \n";
				cout << "ID Buku    : " << data_buku[id_buku][0] << "\n";
				cout << "Judul Buku : " << data_buku[id_buku][1] << "\n";
				cout << "Pengarang  : " << data_buku[id_buku][2] << "\n";
				cout << "Status     : " << data_buku[id_buku][3] << "\n";
				cout << "============================================================ \n";
				break;
			}
			else if(choose=="cancel"){
				continue;
			}
			else{
				cout << "Salah Input";system("pause");
				i--;
			}
		}

		
	}
	else{
		cout << "Username Tidak Ditemukan \n";
	}

	system("pause");
	system("cls");
	
	return 0;
}

//algoritma untuk mendapatkan id pengguna untuk mencari indeks array
int cek_user(string username){
	for(int i = 0;i<3;i++){
		if(data_user[i][0]==username){
			return i;
		}
	}
	return 99;
}

//algoritma mendapatkan id buku untuk mencari indeks array
int cek_buku(string buku){
	for(int i=0;i<24;i++){
		if(data_buku[i][0]==buku){
			return i;
		}
	}
}
