#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	//Membuat variabel
	int n;
	int o;

	//Membuat pointer dan memasangkan alamat variabel n ke dalamnya
	int* a = &n;
	int* b = &o;

	//Menginput n
	cin >> n;

	*a = n;
	*b = o;
	//Mengeluarkan a (pointer yang merujuk ke variabel n)
	cout << *a << endl << &n << endl << &a << endl << &o << endl << &b;
	return 0;
}
