#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	int n,bil;
	double rata,jumlah;
	
	cout << "Masukkan Jumlah Data : ";
	cin >> n;
	
	for (int i=0;i<n;i++){
		cout << "Masukkan Bilangan Ke-" << i+1 << " : ";
		cin >> bil;
		jumlah += bil;
	}
	
	cout << "Total Nilai : " << jumlah << endl;
	
	cout << setiosflags(ios::fixed);
	rata = jumlah/n;
	cout << "Rata - Rata : " << setprecision(2) << rata << endl;
}
