#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	
	string arr[n];
	
	for (int j=0;j<n;j++){
		cout << "Nama Ke-" << j+1 << " : ";cin >> arr[j];
	}
	
	for (int i=0;i<n;i++){
		cout << "Nama Ke-" << i+1 << " adalah " << arr[i] << "\n";
	}
}
