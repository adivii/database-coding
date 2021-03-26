#include <iostream>
using namespace std;

int main(){
    int a,b;

    cin >> a;

    b = a;

    while (a>0){
        cout << "Nilai a (dengan while) = " << a << endl;
        a--;
    }

    do{
        cout << "Nilai b (dengan do while) = " << b << endl;
        b = b/2;
    }while (b>0);

    cout << endl;

    for (int i=1;i <= 10;i++){
        cout << "Kalimat Ke-" << i << endl;
    }
}
