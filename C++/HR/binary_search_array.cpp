#include <iostream>
//#include <array>
using namespace std;

int main(){
	//Inisiasi variabel
	int n;
	int temp;
	
	//Input jumlah data
	cout << "Jumlah Data : ";
	cin >> n;
	
	//Membuat wadah untuk data" tersebut
	int arr[n];
	//array<int, n> arr;
	
	//Input data satu persatu
	for (int i=0;i < n;i++){
		cout << "Data Ke-" << i+1 << " : ";
		cin >> arr[i];
	}
	
	//Melakukan tukar menukar data
	for (int j=0;j < n;j++){
		for (int k=j+1;k < n;k++){
			
			//Jika data ke-j lebih besar dari data ke-k dimana k>j maka tukar data tersebut
			if (arr[j]>arr[k]){
				temp = arr[j];
				arr[j] = arr[k];
				arr[k] = temp;
			}
		}
	}
	
	//Tampilkan kembali data tersebut satu persatu
	cout << "Hasil Sorting : ";
	for (int l=0;l<n;l++){
		cout << arr[l] << " ";
	}
	
	int tengah, kiri, kanan, cari;
	kanan = n;
	kiri = 0;
	
	
	cout << "\nData yang ingin dicari : ";
	cin >> cari;
	
	bool temukan = false;
	while(!temukan && kiri <= kanan){
		tengah = (kanan+kiri)/2;
		if(arr[tengah]==cari){
			temukan = true;
			cout << "Ditemukan pada indeks ke-" << tengah << " dari array hasil sorting";
		}
		else if(cari > arr[tengah]){
			kiri = tengah+1;
		}
		else{
			kanan = tengah-1;
		}
	}
	
	if(!temukan){
		cout << "Data tidak ditemukan!";
	}
}
