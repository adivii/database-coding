/*
    Vector adalah array dasar dengan kemampuan untuk mengubah ukuran memorinya ketika data dimasukkan atau dihapus. Namun, penyimpanannya ditangani sepenuhnya oleh container vector itu sendiri. Data dalam vector disimpan dalam alamat memori yang bersebelahan sehingga dapat diakses dengan iterator, sama seperti array.

    Struktur umum : vector<tipe data> nama_variabel(ukuran);
*/

// #include <vector> // Sudah digantikan dengan stdc++.h
#include <bits/stdc++.h> // Library vector disimpan juga dalam stdc++.h
using namespace std;

int main(){
    vector<int> basic = {1,2,3,4,5}; // Membuat vector dengan nilai awal yang sudah ditentukan
    vector<int> temp(5); // Membuat vector dengan ukuran yang sudah ditentukan

    // Mengakses dan me-assign nilai dengan menggunakan iterator
    for(int i = 0;i < 5;i++){
        temp[i] = basic[i]; // Nilai pada vector dapat diakses dengan menggunakan indeksnya, sama seperti array
    }

    for(int j = 0;j < 5;j++){
        cout << temp[j] << endl;
    }
}