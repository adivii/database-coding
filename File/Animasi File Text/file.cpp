#include <iostream>
#include <fstream>
#include <Windows.h>
using namespace std;

void select_color(int a);

int main()
{
	//Membuat Variabel
	ifstream input("input.txt"); //Variabel Input
	string a; //a untuk menampung sementara input sebelum dimasukkan ke array
	string arr[1000]; //Array untuk menyimpan input (size 1000 agar muat banyak) 

	//Load File
	//input.open("input.txt",ios::in);

	//Start Input
	int count=0;
	while(!input.eof()){ //eof = end of file (akhir dari file)
		getline(input,a); //Supaya menginput spasi
		arr[count] = a; //Memindahkan data ke array
		count++; //Meningkatkan count supaya menginput ke indeks berikutnya
	}

	//Start Animasi per Baris
	for(int i = 0;i < 20;i++){
		//Membuat count agar terus berbalik ke 0 ketika selesai menganimasikan
		int count2 = 1;

		//Membuat perulangan selama masih ada nilai dalam array (indeks sebanyak count)
		while(count2<count+1){
			//Membuat jarak agar tepat pada baris tertentu
			for(int j = 0;j < count;j++){
				/*
					Disini : 
					- Misalkan nilai count2 = 1 (1-1 = 0 => 0%3 = 0), maka jangan cetak :
					  - Baris ke-1 (0%3 = 0)
					  - Baris ke-4 (3%3 = 0)
					  - Baris ke-7 (6%3 = 0)
					  - dst
				*/
				int modulus = j%3;
				int modulus2 = (count2-1)%3;
				//Menuliskan tiap objek animasi
				if(modulus==modulus2){
					cout << endl;
				}else{
					cout << arr[j] << endl;
				}
			}
			select_color(count2);
			count2++;
			Sleep(100);
			system("cls");
			
		}
	}

	//Tampilkan seluruh elemen
	for(int i = 0;i < count;i++){
		cout << arr[i] << endl;
	}
	return 0;
}

void select_color(int a){
	int x = a%10;
	switch(x){
		case 0:
			system("color 0");
			break;
		case 1:
			system("color 1");
			break;
		case 2:
			system("color 2");
			break;
		case 3:
			system("color 3");
			break;
		case 4:
			system("color 4");
			break;
		case 5:
			system("color 5");
			break;
		case 6:
			system("color 6");
			break;
		case 7:
			system("color 7");
			break;
		case 8:
			system("color 8");
			break;
		case 9:
			system("color 9");
			break;
	}
}