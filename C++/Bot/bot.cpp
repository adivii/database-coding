#include <iostream>
#include <cstdlib> //Untuk rand()
#include <Windows.h> //Untuk Sleep()
#include <conio.h> //Untuk getch()
using namespace std;

//Variabel yang diperlukan
string choose;

//Prototipe fungsi
void start_menu();
void main_menu();
void show_help();
void show_help_game();
void show_intro();
void play_number_guess();

int main(){
	start_menu();	

	return 0;
}

void start_menu(){
	cout << "Untuk memulai bot, ketik /start" << endl;
	cout << "Untuk keluar dari program, ketik /end" << endl;
	cout << "-------------------------------------" << endl;
	getline(cin,choose);

	if(choose == "/end"){
		cout << "Oke, bye. Kapan-kapan ketemu lagi yaa. ~Rei" << endl;
		exit(1);
	}else if(choose == "/start"){
		system("cls");

		main_menu();
	}else{
		cout << "Maksud sama perintahnya? Ketik yang bener dong :). ~Rei" << endl;
		Sleep(1500);
		system("cls");

		start_menu();
	}
}

void main_menu(){
	cout << "Untuk menampilkan daftar semua perintah, ketik /help" << endl;
	cout << "Untuk menampilkan perintah permainan, ketik /help game" << endl;
	cout << "------------------------------------------------------" << endl;
	getline(cin,choose);

	if(choose == "/help"){
		system("cls");

		show_help();
	}else if(choose == "/help game"){
		system("cls");

		show_help_game();
	}else if(choose == "/intro"){
		system("cls");

		show_intro();
	}else if(choose == "/play guess"){
		system("cls");

		play_number_guess();
	}else if(choose == "/stop"){
		cout << "Sampai jumpa lagi. ~Rei" << endl;
		Sleep(1500);

		system("cls");
		start_menu();
	}else{
		cout << "Kayaknya ada yang salah, coba cek lagi perintahnya. ~Rei" << endl;
		Sleep(2000);
		system("cls");

		main_menu();
	}
}

void show_help(){
	cout << "HELP" << endl;
	cout << "-------------------------------------------------------------" << endl;
	cout << "Ketik /intro untuk meminta bot menuliskan perkenalan singkat." << endl;
	cout << "-------------------------------------------------------------" << endl;
	cout << "Ketik /stop untuk menghentikan bot." << endl;
	cout << "-----------------------------------" << endl;

	main_menu();
}

void show_help_game(){
	cout << "GAME HELP" << endl;
	cout << "-----------------------------------------------" << endl;
	cout << "Ketik /play guess untuk memainkan Number Guess." << endl;
	cout << "-----------------------------------------------" << endl;

	main_menu();
}

void show_intro(){
	cout << "Hai-Hai~" << endl;
	cout << "Aku Rei. Semacam bot sederhana. Sederhana banget malah, tapi gak masalah hehe." << endl;
	cout << "Karena, kedepannya mungkin bakal banyak pengembangan untuk algoritmaku. Tentunya" << endl;
	cout << "berdasarkan kemampuan creator-ku yaitu Kak Reiki (Dari sini sebenernya namaku)." << endl;
	cout << "Segitu dulu yaaa. Sampai jumpa lagi. ~Rei" << endl;

	cout << "\nPress Any Key!";getch();

	system("cls");
	main_menu();
}

void play_number_guess(){
	int angka,tebak;

	angka = (rand() % 100) + 1; //rand() % 100 akan menghasilkan rentang 0 sampai 99. rand() saja akan menghasilkan int secara random dengan batas tak hingga

	cout << "Tebak angka (1 - 100)" << endl;
	do{
		cin >> tebak;
		if(tebak > angka){
			cout << "Berikan angka yang lebih kecil. ~Rei" << endl;
		}else if(tebak < angka){
			cout << "Berikan angka yang lebih besar. ~Rei" << endl;
		}
	}while(tebak != angka);

	cout << "Tebakan yang tepat. ~Rei" << endl;
	Sleep(2000);

	system("cls");
	cin.ignore(1,'\n');
	main_menu();
}