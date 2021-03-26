#include <iostream>
#include <math.h>
using namespace std;

long int fibonacci(int n);

int main(){
	int n;

	cin >> n;

	int x[n];
	for(int i = 0;i < n;i++){
		cin >> x[i];
	}

	for(int j = 0;j < n;j ++){
		cout << fibonacci(x[j])%1000000007 << endl;
	}
	return 0;
}

long int fibonacci(int n){
	if(n == 1){
		return 1;
	}else{
		return (((1/pow(5,0.5))*pow(((1 + pow(5,0.5))/2),n))-((1/pow(5,0.5))*pow(((1 - pow(5,0.5))/2),n))));
	}
}