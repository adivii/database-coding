#include <iostream>
using namespace std;

int main(){
    float B1,B2,JML;
    char OPR;

    cout << "Masukkan bilangan pertama : ";cin >> B1;
    cout << "Masukkan bilangan kedua   : ";cin >> B2;

    cout << "Jenis Operasi (* + - /) : ";cin >> OPR;

    if(OPR == '*'){
        JML = B1 * B2;
    }else if(OPR == '+'){
        JML = B1 + B2;
    }else if(OPR == '-'){
        JML = B1 - B2;
    }else{
        JML = B1 / B2;
    }

    cout << "Hasil perhitungan : " << JML << endl;
}