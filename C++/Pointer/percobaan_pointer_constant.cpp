#include <iostream>
using namespace std;

int main(){
	//Membuat variabel dan memberi nilai
	int a = 12;

	//Membuat konstanta dan merujuk alamat variabel ke dalam konstanta
	const int* p = &a;

	//Memanggil konstanta
	cout << *p;
}