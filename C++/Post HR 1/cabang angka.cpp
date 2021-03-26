#include <iostream>

using namespace std;

int main(){
	int a;
	
	cin >> a;
	
	switch(a){
		case 1 :
			cout << "satu";
			break;
		case 2 :
			cout << "dua";
			break;
		case 3 :
			cout << "tiga";
			break;
		default :
			cout << "lebih besar daripada 3";
			break;
	}
}
