#include <iostream>
using namespace std;

int main(){
	string arr[3][2]{
		{"Adiwijaya","2017051006"},
		{"Ervan","2017051001"},
		{"Daffa","2017051061"}
	};
	
	for (int i=0;i<3;i++){
		for(int j=0;j<2;j++){
			switch(j){
				case 0:
					cout << "Nama : ";
					break;
				case 1:
					cout << "NPM  : ";
					break;
			}	
			cout << arr[i][j] << "\n";
		}
		cout << "\n";
	}
}
