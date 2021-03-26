#include <string.h>
#include <iostream>
using namespace std;

int main(){
	char a[4097];
	char b[4097];

	cin >> a >> b;
	
	cout << strlen(a) << " ";
	cout << strlen(b) << endl;
	cout << a << b << endl;
	
	char temp = a[0];
	a[0] = b[0];
	b[0] = temp;
	
	cout << a << " " << b;
}

