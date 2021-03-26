#include <iostream>
#include <unistd.h>

using namespace std;

int main(){
	for (int i = 1;i < 20;i++){
		int a = i%4;
		
		switch(a){
			case 1 :
				cout << "";
				break;
			case 2 :
				cout << "A";
				break;
			case 3 :
				cout << "Ad";
				break;
			case 0 :
				cout << "Adi";
		}
		sleep(1);
		system("cls");
	}
}
