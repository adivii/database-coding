#include <iostream>
#include <unistd.h>

using namespace std;

void change_color(int a);

int main(){
	string nama = "Muhammad Mufid Sadzilli";
	string loading = "LOADING...";
	
	for (int j = 0;j<11;j++){
		change_color(j);
		cout << loading[j];
		sleep(1);
	}
	
	system("cls");
	
	cout<<"___________________________"<< endl;
	cout<<"==========WELCOME=========="<< endl;
	cout<<"___________________________"<< endl;
	cout<<"+++++=================+++++"<< endl;
	
	sleep(2);
	system("cls");
	
	for (int i = 0; i <23;i++){
		change_color(i);
		cout << nama[i];
		sleep(1);
	}
}

void change_color(int a){
	int q = a%10;
	switch(a){
			case 1 :
				system("color 1");
				break;
			case 2 :
				system("color 2");
				break;
			case 3 :
				system("color 3");
				break;
			case 4 :
				system("color 4");
				break;
			case 5 :
				system("color 5");
				break;
			case 6 :
				system("color 6");
				break;
			case 7 :
				system("color 7");
				break;
			case 8 :
				system("color 8");
				break;
			case 9 :
				system("color 9");
				break;
			case 0 :
				system("color 0");
				break;
		}
}
