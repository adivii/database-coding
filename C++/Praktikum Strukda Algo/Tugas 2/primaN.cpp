#include <iostream>
using namespace std;

int main()
{
    int Arr[9999];
    int i,j,N;
    bool Prima;

    cin >> N;

    for(i = 0;i < N;i++){
        cin >> Arr[i];
        Prima = true;

        for(j=2;j<Arr[i];j++){
            if(Arr[i]%j == 0){
                Prima = false;
                break;
            }
        }

        if(Arr[i] == 1){
            Prima = false;
        }

        if(Prima){
            cout << Arr[i] << " ";
        }
    }
}