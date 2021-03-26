#include <iostream>
#include <cstdlib>
#include <conio2.h>

using namespace std;

int main(){
    int a,b,c,d;

    textcolor(GREEN);
    gotoxy(10,10);
    cout << "Membalik Bilangan 3 Digit" << endl;
    cin >> a;
    b = (a%10);
    c = (a%100)/10;
    d = a/100;

    if (b-c<2 && b-c>-2 && c-d<2 && c-d>-2){
        cout << "Angka Cantik" << endl;
    }
    else {
        cout << "Angka Tidak Cantik" << endl;
    }
}
