#include <iostream>
#include <unistd.h>
#include <windows.h>

using namespace std;

int main(){
    int a,i,j;
    
    system("color 5");
    char teks[21] = "Analizing...........";
    
    i = 0;
    while (i<20){
    	cout << teks[i];
    	sleep(1);
    	i++;
    }
    
    j = 1;
    while (j<30){
    	a = j%4;
    	
    	system("cls");
    	
    	switch(a){
    		case 0 :
    			cout << "Analizing........... \\";
    			system("color 1");
    			break;
    		case 1 :
    			cout << "Analizing........... |";
    			system("color 2");
    			break;
    		case 2 :
    			cout << "Analizing........... /";
    			system("color 3");
    			break;
    		case 3 :
    			cout << "Analizing........... -";
    			system("color 4");
    			break;
		}
		sleep(1);
		j++;
	}
    system("cls");
    cout << "Welcome Adivii" << endl;
}
