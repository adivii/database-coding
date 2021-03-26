#include <iostream>
using namespace std;

//fungsi penjumlahan
float tambah(float a;float b){ //a dan b disebut parameter, berupa input yang harus diisikan pada fungsi tersebut. (Parameter bersifat opsional)
	float hasil;
	hasil = a+b; // hasil = 5 + 10 = 15
	
	return hasil;
}

int main(){
	float a,b,c;
	
	a = 5;
	b = 10;
	
	//tanpa fungsi
	c = a+b;
	cout << c;
	
	//dengan fungsi
	c = tambah(a,b); //= tambah(5,10) = 15; a dan b disini merupakan input fungsi yang diberikan melalui parameter.
	cout << c;
}

/*
tipe_data nama_fungsi(parameter 1, parameter 2, ......){
	//statement
}
*/