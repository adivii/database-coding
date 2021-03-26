#include <iostream>

using namespace std;

int main(){
    int a;

    cout << "Masukkan Nilai : ";
    cin >> a;

    if (a==7){
        cout << "Nilai ini adalah 7" << endl;
    }
    else if (a>7){
        cout << "Nilai ini lebih dari 7" << endl;
    }
    else {
        cout << "Nilai ini kurang dari 7" << endl;
    }

    return 0;
}
