#include <iostream>
using namespace std;

int main(){
	cout << "Faktorial \n";
	cout << "N = ";
	int n; cin >> n;
	
	int hasil = 1;
	for (int i=n; i>0; i--){
		hasil = hasil*i;
	}
	
	cout << "Hasilnya = " << hasil << "\n";
}
