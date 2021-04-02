#include <iostream>
using namespace std;

//Membuat variabel
bool selesai_belanja = false;
char keluar;
int pilihan, total_harga, total_belanja;
string pesanan[1000], nama_pesanan;

//fungsi main
int main(){
  //Membuat perulangan agar selama user ingin berbelanja, maka akan terus berulang
  do{
    //membersihkan layar. Kebersihan sebagian dari iman :)
    system("cls");
    nama_pesanan = ""; //membuat wadah

    //membuat menu utama
    cout << "---------------------- Dessert  Store ---------------------- \n";
    cout << "1) Ice Cream \n";
    cout << "2) Muffin \n";
    cout << "3) Souffle \n";

    //user memilih jenis dessert
    cout << "=> ";
    cin >> pilihan;

    //memproses pilihan dessert
    switch (pilihan)
    {
    case 1:
      total_harga += 15000;
      nama_pesanan += "Ice Cream "; //"" + "Ice Cream " => "Ice Cream "
      break;
    case 2:
      total_harga += 10000;
      nama_pesanan += "Muffin ";
      break;
    case 3:
      total_harga += 12000;
      nama_pesanan += "Souffle ";
      break;
    default:
      cout << "Input Salah! \n";
      system("pause");
      continue;
      break;
    }

    //Memilih rasa
    cout << "Pilihan Rasa : \n";
    cout << "1) Vanilla \n";
    cout << "2) Cokelat \n";
    cout << "3) Pisang \n";

    //user memilih rasa
    cout << "=> ";
    cin >> pilihan;

    //memproses pilihan
    switch (pilihan)
    {
    case 1:
      total_harga += 1000;
      nama_pesanan += "Vanilla ";//"Ice Cream " + "Vanilla " = "Ice Cream Vanilla "
      break;
    case 2:
      total_harga += 1500;
      nama_pesanan += "Cokelat ";
      break;
    case 3:
      total_harga += 2000;
      nama_pesanan += "Pisang ";
      break;
    default:
      cout << "Input Salah! \n";
      system("pause");
      continue;
      break;
    }

    //sedikit tambahan kalimat
    nama_pesanan += "dengan topping ";

    //menu topping
    cout << "Pilihan Topping : \n";
    cout << "1) Madu \n";
    cout << "2) Cokelat \n";
    cout << "3) Strawberry Syrup \n";

    //user memilih topping
    cout << "=> ";
    cin >> pilihan;

    //memproses pilihan
    switch (pilihan)
    {
    case 1:
      total_harga += 3000;
      nama_pesanan += "Madu ";
      break;
    case 2:
      total_harga += 3000;
      nama_pesanan += "Cokelat ";
      break;
    case 3:
      total_harga += 2500;
      nama_pesanan += "Strawberry Syrup "; // nama_pesanan + "Strawberry Syrup "
      break;
    default:
      cout << "Input Salah! \n";
      system("pause");
      continue;
      break;
    }

    //menambahkan jumlah belanjaan dan memproses belanjaan
    pesanan[total_belanja] = nama_pesanan;
    total_belanja++;

    //Konfirmasi selesai belanja
    cout << "Tambah Pembelian? (y/n) \n";
    cin >> keluar;

    if(keluar=='N' || keluar=='n'){
      //user selesai belanja, tampilkan tagihan
      for(int i=0;i<total_belanja;i++){
        cout << i+1 << ") " << pesanan[i] << "\n";
      }
      cout << "Total Belanja : " << total_belanja << "\n";
      cout << "Total Harga   : " << total_harga << "\n";
      selesai_belanja = true;
      
      //mengentikan sementara kode
      system("pause");
    }
  }while(!selesai_belanja);
}