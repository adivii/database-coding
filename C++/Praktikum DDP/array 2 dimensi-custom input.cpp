#include <iostream>
using namespace std;

int main(){
	int n;
	cout << "Jumlah Data : ";cin >> n;
	
	string arr[n][2];
	
	for (int i=0;i<n;i++){
		cout << "Data Ke-" << i+1 << "\n";
		for (int j=0;j<2;j++){
			switch(j){
				case 0:
					cout << "Nama : ";
					break;
				case 1:
					cout << "NPM  : ";
					break;
			}
			cin >> arr[i][j];
		}
	}
	
	for (int i=0;i<n;i++){
		for(int j=0;j<2;j++){
			switch(j){
				case 0:
					cout << "Nama : ";
					break;
				case 1:
					cout << "NPM  : ";
					break;
			}	
			cout << arr[i][j] << "\n";
		}
		cout << "\n";
	}
}
