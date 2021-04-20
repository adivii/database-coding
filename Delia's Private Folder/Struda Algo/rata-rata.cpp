#include <iostream>
using namespace std;

int main(){
    int Y,i;
    float X,Total = 0;

    cout << "Masukkan jumlah data : ";cin >> Y;

    int N[Y];

    for(i = 1;i <= Y;i++){
        cout << "Masukkan data ke-" << i << " : ";cin >> N[i];
        Total = Total + N[i];
    }

    X = Total/Y;

    cout << "Rata-Rata : " << X << endl;
}