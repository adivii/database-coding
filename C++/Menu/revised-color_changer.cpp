#include <iostream>
#include <conio2.h>

using namespace std;

int main(){
	int choice;
	
	while(true){
		system("cls");
		cout << "Color Changer   \n";
		cout << "Type 99 to exit \n";
		cout << "1) Red          \n";
		cout << "2) Blue         \n";
		cout << "3) Green        \n";
		cout << "4) Yellow       \n";
		cout << "0) Default      \n";
		cout << "\n=> ";
		cin >> choice;
		
		//Exit Program
		if (choice == 99){
			break;
		}
		
		switch(choice){
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
			case 99 :
				break;
			default :
				cout << "ERROR\n";
				system("pause");
		}
	};
}
