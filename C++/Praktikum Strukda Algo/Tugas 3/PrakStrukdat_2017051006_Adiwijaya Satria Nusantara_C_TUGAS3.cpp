#include <bits/stdc++.h>
using namespace std;

class Kombinatorika{
	private:
		int n;
		int k;
	public:
		void set_value(int n, int k){
			this->n = n;
			this->k = k;
		}

		int faktorial(int n){
			int hasil = 1;
			if(n == 0){
				hasil = 1;
			}else if(n < 0){
				cout << "Error!" << endl;
				exit(1);
			}else{
				for(int i = n;i > 0;i--){
					hasil = hasil*i;
				}
			}
			return hasil;
		}

		int get_kombinasi(){
			// C(n,r) = n!/(n-r)! r!
			int hasil = faktorial(this->n) / (faktorial(this->n - this->k) * faktorial(this->k));
			return hasil;
		}

		int get_permutasi(){
			// P(n,r) = n!/(n-r)!
			int hasil = faktorial(this->n) / faktorial(this->n - this->k);
			return hasil;
		}
};


int main(){
	Kombinatorika k;
	k.set_value(5,3);
	cout << k.get_kombinasi() << endl;
	cout << k.get_permutasi() << endl;

	return 0;
}