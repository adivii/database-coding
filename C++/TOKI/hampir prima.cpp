#include <iostream>

using namespace std;

int main(){
	int n;
	long int count;
	count = 0;
	
	cin >> n;
	
	long int arr[n];
	
	for (int i=0;i<n;i++){
		cin >> arr[i];
	}
	
	for (int j=0;j<n;j++){
		for (long int k=1;k<=arr[j];k++){
			if (arr[j]%k == 0){
				count = count+1;
				
				if (count == 5){
					cout << "BUKAN" << endl;
					break;
				}
			}	
		}
		
		if (count<5 && count != 0){
			cout << "YA" << endl;
		}
		
		count = 0;
	}
}
