#include <iostream>
#include <array>
using namespace std;

int main(){
	array<int, 5> arr;
	
	for (int i = 0;i < 5;i++){
		cin >> arr[i];
	}
	
	for (int j=4;j>-1;j--){
		cout << arr[j] << " ";
	}
}
