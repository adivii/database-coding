#include <iostream>
#include "delay.cpp"

using namespace std;

void login();

void login(){
	string teks_1 = "Connecting Database ";
	string teks_2 = "Fetching Data       ";
	string teks_3 = "Checking Username   ";
	string teks_4 = "Checking Password   ";
	string teks_5 = "Loading Menu        ";
	
	for (int i=1; i < 21; i++){
		int a = i%4;
		switch(a){
			case 0 :
   				cout << teks_1 << " \\";
   				break;
   			case 1 :
   				cout << teks_1 << " |";
   				break;
   			case 2 :
   				cout << teks_1 << " /";
   				break;
   			case 3 :
   				cout << teks_1 << " -";
				break;
		}
		delay();
		system("cls");
	}
	
	for (int i=1; i < 21; i++){
		int a = i%4;
		cout << teks_1 << "OK" << endl;
		switch(a){
			case 0 :
   				cout << teks_2 << " \\";
   				break;
   			case 1 :
   				cout << teks_2 << " |";
   				break;
   			case 2 :
   				cout << teks_2 << " /";
   				break;
   			case 3 :
   				cout << teks_2 << " -";
				break;
		}
		delay();
		system("cls");
	}
	
	for (int i=1; i < 21; i++){
		int a = i%4;
		cout << teks_1 << "OK" << endl;
		cout << teks_2 << "OK" << endl;
		switch(a){
			case 0 :
   				cout << teks_3 << " \\";
   				break;
   			case 1 :
   				cout << teks_3 << " |";
   				break;
   			case 2 :
   				cout << teks_3 << " /";
   				break;
   			case 3 :
   				cout << teks_3 << " -";
				break;
		}
		delay();
		system("cls");
	}
	
	for (int i=1; i < 21; i++){
		int a = i%4;
		cout << teks_1 << "OK" << endl;
		cout << teks_2 << "OK" << endl;
		cout << teks_3 << "OK" << endl;
		switch(a){
			case 0 :
   				cout << teks_4 << " \\";
   				break;
   			case 1 :
   				cout << teks_4 << " |";
   				break;
   			case 2 :
   				cout << teks_4 << " /";
   				break;
   			case 3 :
   				cout << teks_4 << " -";
				break;
		}
		delay();
		system("cls");
	}
	
	for (int i=1; i < 21; i++){
		int a = i%4;
		cout << teks_1 << "OK" << endl;
		cout << teks_2 << "OK" << endl;
		cout << teks_3 << "OK" << endl;
		cout << teks_4 << "OK" << endl;
		switch(a){
			case 0 :
   				cout << teks_5 << " \\";
   				break;
   			case 1 :
   				cout << teks_5 << " |";
   				break;
   			case 2 :
   				cout << teks_5 << " /";
   				break;
   			case 3 :
   				cout << teks_5 << " -";
				break;
		}
		delay();
		system("cls");
	}
	
	cout << "You Are Connected to Our Database, Please Enjoy Our Service" << endl;
	delay();
	delay();
	delay();
	delay();
	delay();
	delay();
	delay();
	delay();
	system("cls");
}
