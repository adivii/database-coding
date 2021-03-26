#include <iostream>
using namespace std;

int main(){
	int x = 12;
	int *px = &x;
	
	cout << "x   : " << x << endl;
	cout << "&x  : " << &x << endl;
	cout << "px  : " << px << endl;
	cout << "*px : " << *px << endl;
}
