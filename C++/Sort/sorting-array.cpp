//Sorting Array
#include <iostream>
using namespace std;

int main()
{	
	//Input jumlah data
	int n;
	cout << "Jumlah data : ";
	cin >> n;

	//Membuat array
	int arr[n];
	
	//Mengisikan nilai array
	cout << "Input data : " << endl;
	for(int i=0;i<n;i++){
		cin >> arr[i];
	}

	//Mengurutkan isi array
	int temp; //Buat variabel temporary

	//Lakukan pengecekan satu persatu
	for (int j=0;j < n;j++){
		for (int k=j+1;k < n;k++){
			if (arr[j]>arr[k]){ //Jika data pada index ke j+(k+1) lebih besar dari data pada index ke j, maka lakukan penukaran data
				//Tukar data bila diketahui lebih kecil
				temp = arr[j];
				arr[j] = arr[k];
				arr[k] = temp;
			}
		}
	}

	//Tampilkan kembali data yang sudah diurutkan
	cout << "Hasil sorting kecil ke besar : " << endl;
	for(int l=0;l<n;l++){
		cout << arr[l] << " ";
	}
	cout << endl;

	cout << "Hasil sorting besar ke kecil : " << endl;
	for(int m=n-1;m>=0;m--){
		cout << arr[m] << " ";
	}

	return 0;
}