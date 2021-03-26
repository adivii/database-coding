#include <iostream>

using namespace std;

//Prototyping Fungsi
void loading(string kalimat,int count);
void delay();

int main(){
	int j = 0;
	string text_1 = "Synchronizing Database";
	string text_2 = "Checking Username     ";
	string text_3 = "Checking Password     ";
	string text_4 = "-------------------------";
	string text_5 = "WELCOME MASTER";
	
	while (j<30){
		loading(text_1, j);
		delay();
		j++;
		system ("cls");
	}
	cout << text_1 << " OK";
	
	system ("cls");
	j = 0;
	while (j<30){
		cout << text_1 << " OK" << endl;
		loading(text_2, j);
		delay();
		j++;
		system ("cls");
	}
	cout << text_1 << " OK" << endl;
	cout << text_2 << " OK" << endl;
	
	system ("cls");
	j = 0;
	while (j<30){
		cout << text_1 << " OK" << endl;
		cout << text_2 << " OK" << endl;
		loading(text_3, j);
		delay();
		j++;
		system ("cls");
	}
	cout << text_1 << " OK" << endl;
	cout << text_2 << " OK" << endl;
	cout << text_3 << " OK" << endl;
	cout << text_4 << endl;
	cout << text_5 << endl;
}

//Fungsi
void loading(string kalimat,int count){
    	switch(count%4){
   		case 0 :
   			cout << kalimat << " \\";
   			break;
   		case 1 :
   			cout << kalimat << " |";
   			break;
   		case 2 :
   			cout << kalimat << " /";
   			break;
   		case 3 :
   			cout << kalimat << " -";
			break;
		}
}

void delay(){
	for (int i = 1; i < 100000001;i++){
		for (int j = 1; i < 100000001;i++){
		}
	}
}
