#include <iostream>
using namespace std;

int main(){
	int tinggi_badan[5];
	float jumlah, rata;


	for(int i = 0;i < 5;i++){
		cout << "Masukkan Tinggi Badan Ke-" << i+1 << " : ";
		cin >> tinggi_badan[i];
		jumlah += tinggi_badan[i];
	}

	rata = jumlah/5;
	cout << "Rata-Rata : " << rata << endl;

	return 0;
}
