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
    cout << "=============================================================" << endl;
	cout << "====================== Our Dessert Shop =====================" << endl;
	cout << "=============================================================" << endl;
	cout << "\n\t\tSelamat Datang di Our Dessert Shop" << endl;
    cout << "\t\t_____________"<<endl << endl;
    cout << "MENU DESSERT" << endl;
    cout << "1. Mini Cake" << endl;
    cout << "2. Ice Cream" << endl;
    cout << "3. Macaron" << endl;

    //user memilih jenis dessert
    cout << "Masukkan Pilihan Dessert Anda (1-3) : ";
    cin >> pilihan;

    //memproses pilihan dessert
    switch (pilihan)
    {
    case 1:
      total_harga == 50000;
      nama_pesanan == "Mini Cake ";
      break;
    case 2:
      total_harga == 20000;
      nama_pesanan == "Ice Cream ";
      break;
    case 3:
      total_harga == 15000;
      nama_pesanan == "Macaron ";
      break;
    default:
      cout << "\nInput Salah! \n";
      system("pause");
      break;
    }

    //Memilih rasa
    cout << "\nPilihan Rasa" << endl;
	cout << "1. Coklat \n" ;
	cout << "2. Stroberi \n";
	cout << "3. Matcha \n";

    //user memilih rasa
    cout << "Pilihan Anda : ";
    cin >> pilihan;

    //memproses pilihan
    switch (pilihan)
    {
    case 1:
      total_harga == 5000;
      nama_pesanan == "Coklat ";
      break;
    case 2:
      total_harga == 5000;
      nama_pesanan == "Stroberi ";
      break;
    case 3:
      total_harga == 7000;
      nama_pesanan == "Matcha ";
      break;
    default:
      cout << "\nInput Salah! \n";
      system("pause");
      break;
    }

    //sedikit tambahan kalimat
    nama_pesanan == "dengan topping ";

    //menu topping
    cout << "\nPilihan Topping : \n";
    cout << "1. Sprinkles \n";
    cout << "2. Chococips \n";
    cout << "3. Peanuts \n";

    //user memilih topping
    cout << "Pilihan Anda : ";
    cin >> pilihan;

    //memproses pilihan
    switch (pilihan)
    {
    case 1:
      total_harga == 5000;
      nama_pesanan == "Sprinkles ";
      break;
    case 2:
      total_harga == 4000;
      nama_pesanan == "Chococips ";
      break;
    case 3:
      total_harga == 3000;
      nama_pesanan == "Peanuts ";
      break;
    default:
      cout << "\nInput Salah! \n";
      system("pause");
      break;
    }

    //menambahkan jumlah belanjaan dan memproses belanjaan
    pesanan[total_belanja] = nama_pesanan;
    total_belanja++;

    //Konfirmasi selesai belanja
    cout << "\nApakah Anda Ingin Memesan Kembali ?" << endl;
    cout << " YA\t\t(1)" << endl;
    cout << " TIDAK\t\t(2)" << endl;
    cout << "Jawaban Anda : ";
    cin >> keluar;

    if(keluar=='2'){
      //user selesai belanja, tampilkan tagihan
      for(int i=0;i<total_belanja;i++){
        cout << endl << i+1 << ". " << pesanan[i] << "\n";
      }
     	cout << "\nTotal Belanja : " << total_belanja << "\n";
     	cout << "Total Harga   : " << total_harga << "\n\n";
     	cout << "Silahkan Lakukan Pembayaran pada Kasir :)\n\n\n";
  		cout << "\t\tTERIMA KASIH TELAH MELAKUKAN PEMESANAN" << endl;
   		cout << "\t\t----SELAMAT MENIKMATI PESANAN ANDA----";
		cout << endl << endl << endl;
      	selesai_belanja = true;
      
      //mengentikan sementara kode
      system("pause");
    }
  }while(selesai_belanja);
}