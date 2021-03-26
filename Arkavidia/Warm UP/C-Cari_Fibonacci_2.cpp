#include <iostream>
using namespace std;

int main(){
	int T, N, a, b, c=1;
	cin >> T;
	for(int i = 0; i < T; i++){
		cin >> N;
		a = 1;
		b = 1;
		for(int j = 1; j <= N; j++){
			if(j == 1 || j == 2){
				c = 1;
			}
			else{
				c = (a + b) % 1000000007;
				a = b;
				b = c;
			}
		}
		cout << c << endl;;
	}
}