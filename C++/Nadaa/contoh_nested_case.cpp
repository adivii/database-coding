#include <iostream>
using namespace std;

int main(){
    int pilihan_1, pilihan_2;

    cin >> pilihan_1 >> pilihan_2;

    switch(pilihan_1){
        case 1:
            switch(pilihan_2){
                case 1:
                    cout << "1 dan 1 \n";
                    break;
                case 2:
                    cout << "1 dan 2 \n";
                    break;
                default:
                    cout << "Bukan gaada, gw cuma mager :v \n";
                    break;
            }
            break;
        default:
            cout << "Bukan gaada, gw cuma mager :v \n";
            break;
    }
}