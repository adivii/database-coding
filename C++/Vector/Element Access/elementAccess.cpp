//Element Access Vector
/*
reference operator [g] – Returns a reference to the element at position ‘g’ in the vector
at(g) – Returns a reference to the element at position ‘g’ in the vector
front() – Returns a reference to the first element in the vector
back() – Returns a reference to the last element in the vector
data() – Returns a direct pointer to the memory array used internally by the vector to store its owned elements.
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

    //Tampilkan vector
    int k = 0;
    cout << "Vector Awal : ";
    do{
        cout << bilangan[k] << ", ";
        k++;
    }while(k < bilangan.size());
    cout << endl << endl;

    k = 3;
    cout << "Element pada indeks ke-" << k << " adalah " << bilangan[k] << endl; //Reference Operator
    cout << "Element pada indeks ke-" << k << " jika diakses dengan at() adalah " << bilangan.at(k) << endl; //at(n) mengembalikan nilai vektor pada indeks ke n
    cout << "Element pertama pada vector adalah " << bilangan.front() << endl; //front() mengembalikan nilai pertama pada vector (indeks 0)
    cout << "Element terakhir pada vector adalah " << bilangan.back() << endl; //back() mengembalikan nilai terakhir pada vector (indeks terakhir)

    return 0;
}