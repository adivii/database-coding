//Header
#include <iostream>

//Namespace
using namespace std;

//Fungsi main
int main(){
	//Membuat variabel
	int a;

	//Input bilangan
	cout<<"Masukkan Bilangan : ";cin>>a;

	//Menentukan apakah bilangan itu genap atau ganjil
	//Lalu mengeluarkan output berupa tulisan "Ganjil" atau "Genap"
	cout<<"Bilangan tersebut ";
	if (a%2 == 0){
		cout<<"Genap"<<endl;
	}
	else if (a%2 == 1){
		cout<<"Ganjil"<<endl;
	}
	return 1;
}
