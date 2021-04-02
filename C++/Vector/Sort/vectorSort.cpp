/*
push_back(x) - Menambahkan nilai ke ujung array (size bertambah 1)
pop_back() - Menghapus nilai terakhir yang dimasukkan ke array (size berkurang 1)

Kedua fungsi diatas berlaku pada vector
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(int argc, const char** argv) {
    int n,x;

    //Initialize array using vector so that we can change it's size
    cout << "Insert array length : ";cin >> n;
    vector<int> array;

    cout << "Insert " << n << " value(s) : " << endl;
    for (int i = 0; i < n; i++){
        cin >> x;
        array.push_back(x); //push_back(x) used to insert value x into last index of array (size increased by 1)
    }

    cout << "Array Before Sorted : ";
    int k = 1;
    do{
        cout << array[k-1] << ", ";
        k++;
    }while(k < array.size());
    cout << array.back() << endl << endl;

    //Sort array
    sort(array.begin(),array.end()); //begin() mengembalikan alamat memori nilai pertama pada array, sedangkan end() mengembalikan alamat memori nilai terakhir pada array
    //sort(begin,end) berfungsi menyortir objek dari begin sampai end (terdapat dalam preprocessor algorithm)

    cout << "Array After Sorted  : ";
    k = 1;
    do{
        cout << array[k-1] << ", ";
        k++;
    }while(k < array.size());
    cout << array.back() << endl << endl;

    return 0; 
}