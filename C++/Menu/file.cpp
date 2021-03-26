#include <iostream>
#include <conio2.h>
#include "login.cpp"
using namespace std;

int main(){
	login();
	menu :
		system("cls");
		int choose;
		cout << "Menu          " << endl;
		cout << "1 Change Color" << endl;
		cout << "0 Exit        " << endl;
		
		cout << "=> "; cin >> choose;
		system("cls");
		
		switch(choose){
			case 0 :
				goto option_0;
				break;
			case 1 :
				goto option_1;
				break;
		}
		
	option_1 :
		cout << "Select Color" << endl;
		cout << "1 Red       " << endl;
		cout << "2 Blue      " << endl;
		cout << "3 Green     " << endl;
		cout << "4 Yellow    " << endl;
		cout << "0 Default   " << endl;
		
		cout << "=> "; cin >> choose;
		
		switch(choose){
			case 0 :
				textcolor(WHITE);
				break;
			case 1 :
				textcolor(RED);
				break;
			case 2 :
				textcolor(BLUE);
				break;
			case 3 :
				textcolor(GREEN);
				break;
			case 4 :
				textcolor(YELLOW);
				break;
		}
		
		goto menu;
		
			
	option_0 :
		cout << "Good Bye. I Wish You Have A Great Day" << endl;
		system("pause");
	
}
