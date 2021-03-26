#include <iostream>
using namespace std;

int main(){
	int a;
	for(int i=0;i<=1000000;i++) {
		for(int j=0;j<=1000000;j++){
			a=i+j;
			cout<<a;
		}
	}
}
