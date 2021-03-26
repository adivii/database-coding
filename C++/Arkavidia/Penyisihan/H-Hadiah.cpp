#include <iostream>
using namespace std;

int gcd, lcm, temp_gcd, temp_number;

int search_gcd(int X, int Y);
int search_lcm(int X, int Y);

int main(){
	long int Q,kpk;
	long int jumlah[2];

	cin >> Q;

	long int N[Q],X[Q],Y[Q];

	for(int c = 0;c < Q;c++){
		cin >> N[c];
		cin >> X[c];
		cin >> Y[c];
	}

	for(int i = 0;i < Q;i++){
		kpk = search_lcm(X[i],Y[i]);

		jumlah[0] = ((N[i] - (N[i]%X[i]))/X[i]) - ((N[i] - (N[i]%kpk))/kpk);
		jumlah[1] = ((N[i] - (N[i]%Y[i]))/Y[i]) - ((N[i] - (N[i]%kpk))/kpk);

		cout << jumlah[0];
		cout << " ";
		cout << jumlah[1];
		cout << endl;
	}

	return 0;
}

int search_gcd(int X, int Y){
    temp_gcd = Y;
    temp_number = X;

    while(temp_number%temp_gcd!=0){
        gcd = temp_gcd;
        temp_gcd = temp_number%temp_gcd;
        temp_number = gcd;
    }

    gcd = temp_gcd;

    return gcd;
}

int search_lcm(int X, int Y){
    lcm = (X*Y)/search_gcd(X,Y);

    return lcm;
}
