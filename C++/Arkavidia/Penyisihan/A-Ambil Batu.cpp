#include <iostream>
using namespace std;

int main(){
	int N,Q,x,z;
	string win;
	cin >> N;cin >> Q;

	int A[N];
	int result[2] = {0,0};
	for(int i = 0;i < N;i++){
		cin >> A[i];
	}

	for(int j = 0;j < Q;j++){
		cin >> x;

		for(int k = 0;k < N;k++){
			if((x/A[k])%2 == 1 && x%A[k] == 0){
				win = "Elon";
			}else if((x/A[k])%2 == 1 && x%A[k] != 0){
				win = "Melvin";
			}else if((x/A[k])%2 == 0 && x%A[k] == 0){
				win = "Melvin";
 			}else if((x/A[k])%2 == 0 && x%A[k] != 0){
 				win = "Elon";
 			}
		}

		cout << win << endl;
	}
}
