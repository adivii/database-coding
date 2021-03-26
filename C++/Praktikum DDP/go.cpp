#include <iostream>
using namespace std;

int main(){
	int n;
	double x,total;
	
	cin >> n;
	
	for (int i=0;i<n;i++){
		cin >> x;
		total += x;
	}
	
	cout << total;
}
