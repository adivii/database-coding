#include <iostream>
using namespace std;

int main(){
	int arr1[2][2]{
		{1,2},
		{3,4}
	};

	int arr2[2][2]{
		{1,1},
		{0,1}
	};

	for (int i=0;i<2;i++){
		for (int j=0;j<2;j++){
			int total = 0;
			for (int k=0;k<2;k++){
				total += arr1[i][k]*arr2[k][j];
			}
			cout << total << " ";
		}
		cout << "\n";
		cout << "\n";
	}
}
