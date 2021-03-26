#include <iostream>

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
		hasil = cari_biner(x/2)+"0";
	}
	else if (x%2 == 1){
		hasil = cari_biner(x/2)+"1";
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
