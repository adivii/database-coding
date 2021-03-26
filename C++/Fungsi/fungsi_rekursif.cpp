//Fungsi yang memanggil diri sendiri (berulang)
/*
	cari_biner(4) = cari_biner(2) + "0" = "10" + 0 = "100"
	cari_biner(2) = cari_biner(1) + "0" = "1" + "0" = "10"
	cari_biner(1) = "1"

	cari_biner(9) = cari_biner(4) + "1" = "100" + "1" = "1001"
	cari_biner(4) = cari_biner(2) + "0" = "10" + "0" = "100"
	cari_biner(2) = cari_biner(1) + "0" = "1" + "0" = "10"
	cari_biner(1) = "1"

	char nama[100];
	aaaa..............a-ke100 aaaaaaaa
	string nama;
	adadadasdaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa-1000 aaaaaaaaaaaaa
	string => char* != char
*/

#include <iostream>
#include <cstring>

using namespace std;

string cari_biner(int a){
	int x = a;
	string hasil;

	if (x == 1){
		hasil = "1";
	}
	else if(x == 0){
		hasil = "0";
	}
	else if (x%2 == 0){
		hasil = cari_biner((x - (x%2))/2)+"0";
	}
	else if (x%2 == 1){
		hasil = cari_biner((x - (x%2))+"1";
	}
	return hasil;
}

int main(){
	int a;
	string b;
	cout<<"Angka yang ingin dikonversi : ";cin>>a;
	b = cari_biner(a);
	cout<<"Hasil konversi : "<<b<<endl;	
}

/*
100101
8 = 100
"1" + "0" = "10" + "0" = "100"
"1" + "0" = "10" + "1" = "101"
1 + 0 = 1 + 1 = 2 + 0 = 2 + 0 = 2 + 1 = 3
*/