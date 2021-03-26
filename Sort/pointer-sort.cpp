#include <iostream>
using namespace std;

int *arr_hasil;
int n;
int arr[9999];

void sort();

int main()
{
	cout << "Banyaknya Data : ";
	cin >> n;

	int arr_main[n];
	cout << "Input Data (Pisahkan dengan Spasi atau Enter) \n";
	for(int i = 0;i < n;i++){
		cin >> arr_main[i];
		arr[i] = arr_main[i];
	}
	
	sort();

	for(int i=0;i<n;i++){
		cout << *(arr_hasil+i) << " ";
	}
}

void sort(){
	int temp = 0;

	for (int j=0;j < n;j++){
		for (int k=j+1;k < n;k++){
			if (arr[j]>arr[k]){
				temp = arr[j];
				arr[j] = arr[k];
				arr[k] = temp;
			}
		}
	}

	arr_hasil = arr;
}