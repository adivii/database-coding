#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int main(){
	char S[101];
	bool status = false;

	char cek_huruf[27] = "qwertyuiopasdfghjklzxcvbnm";
	char cek_kapital[27] = "QWERTYUIOPASDFGHJKLZXCVBNM";
	char cek_angka[11] = "1234567890";

	cin.get(S,100);

	for(int h = 0;h < strlen(S);h++){
		for(int f = 0;f < 26;f++){
			if(S[h] == cek_kapital[f]){
				S[h] = tolower(S[h]);
			}
		}
	}

	for(int i = 0;i < strlen(S);i++){
		for(int j = 0;j < strlen(cek_huruf);j++){
			if(S[i] == cek_huruf[j]){
				status = true;
			}
		}

		for(int k = 0;k < strlen(cek_angka);k++){
			if(S[i] == cek_angka[k]){
				status = true;
			}
		}

		if(S[i] == ' '){
			status = true;
		}

		if(!status){
			cout << "Emor tidak beruntung :(" << endl;
			return 0;
		}

		status = false;
	}

	//if(status){
		for(int g = strlen(S);g > 0;g--){
			cout << S[g-1];
		}
		cout << endl;
	//}

}
