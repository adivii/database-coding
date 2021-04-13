#include <iostream>
using namespace std;

int main()
{
    int temp; //keperluan debug
    int x;
    string hasil;

    cout << "Masukkan nilai yang ingin dikonversi : ";
    cin >> x;

    while(x > 0){
        if(x%2 == 0){
            hasil = "0" + hasil;
        }else if(x%2 == 1){
            hasil = "1" + hasil;
        }

        x = x/2;
        temp = 0;
    }

    cout << "Hasil Konversi : " << hasil << endl;
    
    return 0;
}
