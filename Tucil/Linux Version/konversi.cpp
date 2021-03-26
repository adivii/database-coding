#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int get_pangkat();

int main(){
	cout << "Pilih basis pengukuran : \n";
	int base = get_pangkat();

	system("clear");

	cout << "Pilih tujuan konversi : \n";
	int res = get_pangkat();

	system("clear");

	cout << "Angka yang ingin di konversi (int) : ";
	int x;
	cin >> x;

	cout << fixed;
	cout << setprecision(abs(base-res));
	cout << "Hasil : " << x*pow(10,base-res) << endl;
	system("read confirmation");
}

int get_pangkat(){
	cout << "1) km \n";
	cout << "2) hm \n";
	cout << "3) dam \n";
	cout << "4) m \n";
	cout << "5) dm \n";
	cout << "6) cm \n";
	cout << "7) mm \n";

	int n;
	cout << "Choice? ";
	cin >> n;

	switch(n){
		case 1:
			return 3;
			break;
		case 2:
			return 2;
			break;
		case 3:
			return 1;
			break;
		case 4:
			return 0;
			break;
		case 5:
			return -1;
			break;
		case 6:
			return -2;
			break;
		case 7:
			return -3;
			break;
	}
}
