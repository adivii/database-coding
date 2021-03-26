#include <iostream>
#include <iomanip>
using namespace std;

struct data_mahasiswa{
  string nama;
  double nilai_ddp;
  double nilai_logika;
  double nilai_mtk;
};

int main(){
  cout << setiosflags(ios::fixed);

  int n;
  double jumlah_ddp=0,jumlah_logika=0,jumlah_mtk=0;
  cin >> n;

  data_mahasiswa data[n];

  for(int i=0;i<n;i++){
    cout << "Nama\t\t: "; cin >> data[i].nama;
    cout << "Nilai DDP\t: "; cin >> data[i].nilai_ddp;
    cout << "Nilai Logika\t: "; cin >> data[i].nilai_logika;
    cout << "Nilai MTK\t: "; cin >> data[i].nilai_mtk;
    cout << "\n";

    jumlah_ddp += data[i].nilai_ddp;
    jumlah_logika += data[i].nilai_logika;
    jumlah_mtk += data[i].nilai_mtk;
  }

  cout << "No\tNama\t\tNilai DDP\tNilai Logika\tNilai MTK\tRata-Rata\n";
  for(int k=0;k<n;k++){
    cout << k+1 << "\t" << data[k].nama << "\t\t" << setprecision(2) << data[k].nilai_ddp << "\t\t" << data[k].nilai_logika << "\t\t" << setprecision(2) << data[k].nilai_mtk << "\t\t" << setprecision(2) << (data[k].nilai_ddp+data[k].nilai_logika+data[k].nilai_mtk)/3 << endl;
  }
  cout << "Rata-Rata" << "\t\t" << setprecision(2) << jumlah_ddp/n << "\t\t" << setprecision(2) << jumlah_logika/n << "\t\t" << setprecision(2) << jumlah_mtk/n << endl;
}
