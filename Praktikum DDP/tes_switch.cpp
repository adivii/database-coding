#include <iostream>
using namespace std;

int main(){
    int a;

    cin >> a;

    switch(a){
        case 1 :
            cout << "Satu" << endl;
            break;
        case 2 :
            cout << "Dua" << endl;
            break;
        case 3 :
            cout << "Tiga" << endl;
            break;
        case 4 :
            cout << "Empat" << endl;
            break;
        case 5 :
            cout << "Lima" << endl;
            break;
        default :
            cout << "Selain satu, dua, tiga, empat, dan lima" << endl;
    }
}
