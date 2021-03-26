#include <iostream>
#include <cstring>
using namespace std;

int main(){
	int x,n;

	cin >> n;

	int angka[n][3];

	for(int i = 0;i < n;i++){
		cin >> x;
		angka[i][0] = x%10; //Satuan
		angka[i][1] = ((x - angka[i][0])%100)/10; //Puluhan
		angka[i][2] = (x - (angka[i][0] + angka[i][1]))/100;
	}

	//Sorting
	int temp;

	//Urutkan satuan
	for(int j = 0;j < n;j++){
		for(int k = j+1;k < n;k++){
			if(angka[j][0] > angka[k][0]){
				temp = angka[j][0];
				angka[j][0] = angka[k][0];
				angka[k][0] = temp;

				temp = angka[j][1];
				angka[j][1] = angka[k][1];
				angka[k][1] = temp;

				temp = angka[j][2];
				angka[j][2] = angka[k][2];
				angka[k][2] = temp;
			}
		}
	}

	//Puluhan
	for(int j = 0;j < n;j++){
		for(int k = j+1;k < n;k++){
			if(angka[j][0] == angka[k][0]){
				if(angka[j][1] > angka[k][1]){
					temp = angka[j][0];
					angka[j][0] = angka[k][0];
					angka[k][0] = temp;

					temp = angka[j][1];
					angka[j][1] = angka[k][1];
					angka[k][1] = temp;

					temp = angka[j][2];
					angka[j][2] = angka[k][2];
					angka[k][2] = temp;
				}
			}
		}
	}

	for(int j = 0;j < n;j++){
		for(int k = j+1;k < n;k++){
			if(angka[j][0] == angka[k][0]){
				if(angka[j][1] == angka[k][1]){
					if(angka[j][2] > angka[k][2]){
						temp = angka[j][0];
						angka[j][0] = angka[k][0];
						angka[k][0] = temp;

						temp = angka[j][1];
						angka[j][1] = angka[k][1];
						angka[k][1] = temp;

						temp = angka[j][2];
						angka[j][2] = angka[k][2];
						angka[k][2] = temp;
					}
				}
			}
		}
	}
	//Output
	for(int m = 0;m < n;m++){
		for(int q = 2;q > -1;q--){
			if(angka[m][q] > 0){
				cout << angka[m][q];
			}
		}
		cout << endl;
	}
}
