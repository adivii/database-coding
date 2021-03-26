#include <cstdio>
#include <iostream>
#include <string.h> // sama aja kek cstring
#include <conio.h>
//#include <conio2.h> //Khusus Dev C++

using namespace std;

int main(){
	start:
		system("cls");
		char a[100];
		char b[100];
		char *c;
		char aa[10];
		int x;
		
		cout<<"-------------------------------------------------------"<<endl;
		cout<<"Mencari Substring (Potongan Kata) - Final OSAMAKOM 2019"<<endl;
		cout<<"-------------------------------------------------------"<<endl;
		cout<<"Kata Utama (Tanpa Spasi) : ";cin>>a;
		cout<<"Kata yang Ingin Dicari   : ";cin>>b;

		c = strstr(strupr(a),strupr(b));
		x = (c-a)+1;
	
		cout<<"Result                   : ";
	
		if(x>0){
			cout<<"Potongan Kata Ada!"<<endl;
		}
		else {
			cout<<"Potongan Kata Tidak Ada"<<endl;
		}
	
	cout<<"Tekan ENTER! ";getch();
	
	goto start;
	
	return 1;
}
