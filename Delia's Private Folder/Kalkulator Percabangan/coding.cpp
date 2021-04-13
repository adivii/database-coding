#include <iostream>
using namespace std;

int main()
{
    float a,b,hasil = 0;
    char aritmatika;

    cout << "Masukkan bilangan pertama : ";cin >> a;
    cout << "Masukkan bilangan kedua : ";cin >> b;

    cout << "Operasi : ";cin >> aritmatika;

    if(aritmatika == '+'){
        hasil = a + b;
    }else if(aritmatika == '-'){
        hasil = a - b;
    }else if(aritmatika == '+'){
        hasil = a * b;
    }else if(aritmatika == '/'){
        hasil = a / b;
    }else{
        cout << "Operasi Salah!" << endl;
    }

    cout << "Hasil Perhitungan : " << hasil << endl;

    return 0;
}
