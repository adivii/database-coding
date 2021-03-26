#include <iostream>
using namespace std;

int gcd, lcm, temp_gcd, temp_number;

int search_gcd(int a, int b);
int search_lcm(int a, int b);

int main(){
    int a, b;
    cout << "Bilangan 1 : ";
    cin >> a;
    
    cout << "Bilangan 2 : ";
    cin >> b;

    cout << "------------------------------------------------------------ \n";
    cout << "FPB : " << search_gcd(a,b) << "\nKPK : " << search_lcm(a,b);
}

int search_gcd(int a, int b){
    temp_gcd = b;
    temp_number = a;

    while(temp_number%temp_gcd!=0){
        gcd = temp_gcd;
        temp_gcd = temp_number%temp_gcd;
        temp_number = gcd;
    }

    gcd = temp_gcd;

    return gcd;
}

int search_lcm(int a, int b){
    lcm = (a*b)/search_gcd(a,b);

    return lcm;
}