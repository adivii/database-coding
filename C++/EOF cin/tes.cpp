/*
	Program ini tidak akan berfungsi normal untuk input langsung
	dari console. Hanya berfungsi normal untuk input bertipe teks
	langsung seperti pada Hackerrank atau onlinegdb.com
*/
#include <iostream>
using namespace std;

int main()
{
	int a;
	int s=0;
	while(!cin.eof()){
		cin >> a;
		s+=a;
	}

	cout << s;
	return 0;
}
