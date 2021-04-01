// Penggunaan vector pada C++
/*
Notes : 
size() – Returns the number of elements in the vector.
max_size() – Returns the maximum number of elements that the vector can hold.
capacity() – Returns the size of the storage space currently allocated to the vector expressed as number of elements.
resize(n) – Resizes the container so that it contains ‘n’ elements.
empty() – Returns whether the container is empty.
shrink_to_fit() – Reduces the capacity of the container to fit its size and destroys all elements beyond the capacity.
reserve() – Requests that the vector capacity be at least enough to contain n elements
*/

#include <iostream>
#include <vector>
using namespace std;

int main(int argc, const char** argv) {
    //Inisialisasi vector : vector<tipe_data> nama(jumlah_elemen);
    //Jumlah elemen bersifat opsional, hal ini dikarenakan sifat vector yang dinamis dalam segi jumlah elemen yang bisa ditampung
    vector<int> bilangan(5); //Membuat vector

    for(int i = 0;i < bilangan.size();i++){ //size() mengembalikan nilai berupa ukuran dari vector
        bilangan[i] = i+1; //Mengisi nilai vector 
    }

    //Tampilkan vector awal
    int k = 0;
    cout << "Vector Awal           : ";
    do{
        cout << bilangan[k] << ", ";
        k++;
    }while(k < bilangan.size());
    cout << endl;

    //Tampilkan size dan capacity
    cout << "Size                  : " << bilangan.size() << endl;
    cout << "Capacity              : " << bilangan.capacity() << endl;

    //Memperbesar ukuran array()
    bilangan.resize(10); //resize(n) digunakan untuk mengubah ukuran vector menjadi sebanyak n

    //Tampilkan vector akhir
    k = 0;
    cout << "Vector Setelah Resize : ";
    do{
        cout << bilangan[k] << ", ";
        k++;
    }while(k < bilangan.size());
    cout << endl;

    //Tampilkan size dan capacity
    cout << "Size                  : " << bilangan.size() << endl;
    cout << "Capacity              : " << bilangan.capacity() << endl;

    return 0;
}