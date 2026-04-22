/** EL2008 Praktikum Pemecahan Masalah dengan Pemrograman 2024/2025
 *   Modul               : 2
 *   Hari dan Tanggal    : rabu, 22 april 2026
 *   Nama (NIM)          : najwa ghaysani athaya a (13224023)
 *   Nama File           : soal1.c
 *   Deskripsi           :  menerima deretan data eksperimen dan harus segera merangkum 
statistik pentingnya untuk operator. Namun, modul analisis yang digunakan di laboratorium itu 
dirancang agar seluruh hasil dikembalikan melalui alamat memori yang diberikan ke fungsi, bukan 
melalui nilai balik biasa. Anda diminta membantu menyiapkan fungsi analisis tersebut agar mesin 
dapat melaporkan jumlah, rata-rata, nilai maksimum, dan posisi pertama kemunculan nilai 
maksimum dengan benar.
 * 
 */

#include <stdio.h>

void jumlah(int *ptr, int n, int *sum){
  int temp = 0;
  for(int i=0; i<n; i++){
    temp += *(ptr+i);
  }
  *sum = temp;
}

void average(int *ptr, int n, int *sum, double *avg){
  double temp;
  temp = (double)*sum/n;
  *avg = temp;
}

void maks(int *ptr, int n, int *sum, int *max, int *idx){
  *max = ptr[0];
  *idx = 0;
  for(int i=0; i<n; i++){
    if(ptr[i] > *max ){
      *max = ptr[i];
      *idx = i ;
    }
  }
} 

int main(){
  int n, i;
  int input[n];
  scanf("%d", &n);
  for(i=0; i<n; i++){
    scanf("%d", &input[i]);
  }
  int *ptr = &input[0]; // ini first elemen ya
  int sum, max, idx; 
  double avg;
  jumlah(ptr, n, &sum);
  average(ptr, n, &sum, &avg);
  maks(ptr,n, &max, &idx);
  printf("SUM %d\n", sum);
  printf("AVG %.2f\n", avg);
  printf("MAX %d\n", max);
  printf("IDX %d\n", idx);
  return 0;
}

// referensi ide buat cari nmax https://www.duniailkom.com/latihan-kode-program-bahasa-c-mencari-nilai-terbesar-array/
