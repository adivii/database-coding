#include <stdio.h>
#include <string.h>

struct data_mhs{
  char npm[101]; // 2017051006\0
  char nama[101];
  char alamat[101];
  char jurusan[101];
} data;

int main(){
  printf("Input NPM     : ");fgets(data.npm, 100, stdin);
  printf("Input Nama    : ");fgets(data.nama, 100, stdin);
  printf("Input Jurusan : ");fgets(data.jurusan, 100, stdin);
  printf("Input Alamat  : ");fgets(data.alamat, 100, stdin);

  printf("\n");
  printf("NPM     : %s", data.npm);
  printf("Nama    : %s", data.nama);
  printf("Jurusan : %s", data.jurusan);
  printf("Alamat  : %s", data.alamat);
}
