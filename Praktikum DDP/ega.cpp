#include <iostream>

using namespace std;

void delay();

int main(){
	int count = 1;
	while(true){
		if (count%3 == 1){
			cout << "Harta \n";
			system("color A");
			delay();
			delay();
		}
		else if (count%3 == 2){
			cout << "Tahta \n";
			system("color B");
			delay();
			delay();
		}
		else if (count%3 == 0){
			cout << "Melista";
			system("color C");
			delay();
			delay();
			system("cls");
		}
		
		if (count == 12){
			cout << "Astaghfirullah, Bukan Muhrim. SKIP!";
			delay();
			delay();
			break;
		}
		
		count++;
	}
}

void delay(){
	for (int i = 1; i < 100000001;i++){
		for (int j = 1; i < 100000001;i++){
		}
	}
}
