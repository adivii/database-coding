/*
    Dalam vector, elemen pertama dan terakhir dapat diakses dengan metode khusus :
    begin() – Mengembalikan iterator yang menunjuk kepada elemen pertama dalam vector, berupa pointer
    end() – Mengembalikan iterator yang menunjuk kepada elemen terakhir dalam vector, berupa pointer
    rbegin() – Mengembalikan iterator yang menunjuk kepada elemen terakhir dalam vector (reverse beginning), berupa pointer
    rend() – Mengembalikan iterator yang menunjuk kepada elemen pertama dalam vector (reverse end), berupa pointer
    cbegin() – Mengembalikan iterator konstan yang menunjuk kepada elemen pertama dalam vector, berupa pointer
    cend() – Mengembalikan iterator konstan yang menunjuk kepada elemen terakhir dalam vector, berupa pointer
    crbegin() – Mengembalikan iterator konstan yang menunjuk kepada elemen terakhir dalam vector (reverse beginning), berupa pointer
    crend() – Mengembalikan iterator konstan yang menunjuk kepada elemen pertama dalam vector (reverse end), berupa pointer
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> basic = {1,2,3,4,5};

    // Accessing first element
    cout << *(basic.begin()) << endl;
    cout << *(basic.rend() - 1) << endl;
    cout << *(basic.cbegin()) << endl;
    cout << *(basic.crend() - 1) << endl;
    // Karena rend dan crend akan mengembalikan 1 alamat sebelum alamat pertama (begin), maka digunakan -1 untuk memundurkan iterator ke 1 elemen sebelumnya

    cout << endl;

    // Accessing last element
    cout << *(basic.end() - 1) << endl;
    cout << *(basic.rbegin()) << endl;
    cout << *(basic.cend() - 1) << endl;
    cout << *(basic.crbegin()) << endl;
    // Karena end dan cend akan mengembalikan 1 alamat setelah alamat terakhir (end), maka digunakan -1 untuk memundurkan iterator ke 1 elemen sebelumnya
}