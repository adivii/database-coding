#include <iostream>
using namespace std;

int bagi(double a){
	cout << a*bagi(a/3) << endl;
	if (a>0){
		return a*bagi(a/3);
	}
	else{
		return a;
	}
}

double bagi(int a){
	cout << a << endl;
	if (a>0){
		return a*bagi(a/3);
	}
	else{
		return a;
	}
}

int main(){
	cout << bagi(100) << endl;
}