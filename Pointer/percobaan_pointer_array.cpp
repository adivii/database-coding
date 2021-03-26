#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
  //menentukan panjang array
  int n;
  cin >> n;

  //membuat array
  int temp_array[n];

  //mengisikan nilai ke dalam array
  for(int i=0;i<n;i++){
    cin >> temp_array[i];
  }

  //menduplikat nilai array kedalam pointer
  int *bil = temp_array;

  //mengakses nilai array dengan menggunakan pointer
  //*bil+i berarti mengakses nilai array pada index ke-i
  //sedangkan &bil+i mengakses alamat pointernya
  for(int i=0;i<n;i++){
    cout << "Nilai\t: " << *(bil+i) << endl << "Alamat\t: " << &bil+i << endl << endl;
  }

  return 0;
}
