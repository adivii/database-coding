#include <iostream>
using namespace std;

void tipe(string a){
	cout << "Tipenya String\n";
}

void tipe(int a){
	cout << "Tipenya Integer\n";
}

void tipe(double a){
	cout << "Tipenya Double\n";
}

int main(){
	int a;
	string b;
	double c;

	tipe(a);
	tipe(b);
	tipe(c);
}
