#include <iostream>
using namespace std;

int main(){
	int n;
	
	cout << "Jumlah data dalam array :";
	cin >> n;
	
	int arr[n];
	
	cout << "Masukkan data (dipisahkan spasi/enter) : \n";
	for(int i=0;i<n;i++){
		cin >> arr[i];
	}
	
	int x;
	cout << "Data yang ingin dicari : ";
	cin >> x;
	
	int result = 0;
	for(int j = 0;j < n;j++){
		if(arr[j]==x){
			cout << "Ditemukan pada indeks ke-" << j << endl;
			result++;
		}
	}
	if(result==0){
		cout << "Tidak ditemukan!";
	}
}
