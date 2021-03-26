#include <iostream>
using namespace std;

string data_soal[5][2]{
	{"5 + 5  = ","10"},
	{"2 x 5  = ","10"},
	{"5 / 5  = ","1"},
	{"10 x 5 = ","50"},
	{"15 - 5 = ","10"}
};

int skor = 0;

void header();
void play();

int main(){
	play();
}

void play(){
	string nama, npm, jawaban;

	system("cls");
	header();
	cout << "Nama Anda : "; cin >> nama;
	cout << "NPM Anda  : "; cin >> npm;

	system("cls");
	header();

	for(int i=0;i<5;i++){
		cout << i+1 << ") " << data_soal[i][0]; cin >> jawaban;
		if(jawaban == data_soal[i][1]){
			skor += 20;
		}
	}

	system("cls");
	header();

	cout << "Selamat, " << nama <<  " - " << npm << ". Skor Akhir Anda " << skor << "\n";
	cout << "Main Lagi? [y/n] \n=> ";

	char decide;
	cin >> decide;

	if(decide == 'y' || decide == 'Y'){
		skor = 0;
		play();
	}
}

void header(){
	cout << "============================================================= \n";
	cout << "======================== Simple Math ======================== \n";
	cout << "============================================================= \n";
}
