//header
#include <iostream>
using namespace std;

//variabel global
string data_kue[5]{ //Bisa diubah, tapi cocokin dengan alur di fungsi main()
  "Cokelat",
  "Keju",
  "Pandan",
  "Strawberry",
  "Blueberry"
};

int harga_kue[5]{ //atur sesuka hati, alurnya ga berubah kok
  1,
  2,
  3,
  4,
  5
};

string data_topping[3]{ //Bisa diubah, tapi cocokin dengan alur di fungsi main()
  "Krim",
  "Cokelat",
  "Keju"
};

int harga_topping[3]{ //atur sesuka hati, alurnya ga berubah kok
  1,
  2,
  3
};

//array untuk menampung pilihan topping pengguna
string pilihan_topping[3];

//variabel umum
int total_harga=0, pilihan, pilihan_kue, jumlah_topping=0;
bool exit_status = false;
char decide;

//fungsi main
int main(){
  cout << "=============== Toko Kue =============== \n";
  cout << "1) Kue Cokelat \n";
  cout << "2) Kue Keju \n";
  cout << "3) Kue Pandan \n";
  cout << "4) Kue Strawberry \n";
  cout << "5) Kue Blueberry \n";
  cout << "======================================== \n";
  cout << "=> ";

  //memilih tipe kue
  cin >> pilihan;
  pilihan_kue = pilihan-1;

  //memasukkan harga kedalam total harga
  total_harga += harga_kue[pilihan_kue];

  //memilih topping, bisa lebih dari 1, maks  3
  while(!exit_status && jumlah_topping<3){
    //menampilkan pilihan topping
    system("clear");
    cout << "=============== Toko Kue =============== \n";
    cout << "1) Topping Krim \n";
    cout << "2) Topping Cokelat \n";
    cout << "3) Topping Keju \n";
    cout << "======================================== \n";
    cout << "=> ";

    //memilih topping
    cin >> pilihan;

    //mendata topping
    pilihan_topping[jumlah_topping] = data_topping[pilihan];
    jumlah_topping++;
    total_harga += harga_topping[pilihan];

    //meminta user menentukan menambah topping atau tidak
    if(jumlah_topping<3){
      cout << "Tambah topping? (y/n) \n";
      cin >> decide;
      switch(decide) {
        case 'Y':
          break;
        case 'y':
          break;
        case 'N':
          exit_status = true;
          break;
        case 'n':
          exit_status = true;
          break;
        default:
          cout << "Input Salah! \n";
          system("read confirmation");
          break;
      }
    }

    system("clear");
    cout << "=============== Toko Kue =============== \n";
    cout << data_kue[pilihan_kue] << "\n";
    for(int i=0;i<jumlah_topping;i++){
      cout << i+1 << ") " << pilihan_topping[i] << "\n";
    }
    cout << "Total Harga : " << total_harga << "\n";
  }
}
