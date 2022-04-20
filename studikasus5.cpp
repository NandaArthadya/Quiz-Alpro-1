#include <iostream>
#include <fstream>
#include "../library/cara.h"
int main() {
  string nama, nim;
  int sks, diskon1, bayar,bayar1, jumlah, total, diskon2;
  cout << "Masukkan Nama Mahasiswa : ";
  cin >> nama;
  cout << "Masukkan NIM Mahasiswa  : ";
  cin >> nim;
  mahasiswa Nanda; 
  Nanda.mhs(3);
    sks = 3+3+3;
    cout << "Jumlah sks yang diambil : " << sks << endl;
    bayar= sks*120000;
    cout << "Jumlah bayar sks : " << bayar << endl;
  
    diskon1 = bayar*0.10;
    bayar1 = bayar-diskon1;
    cout << "Jumlah bayar setelah diskon 10% = " <<bayar1<< endl;
    diskon2 = 0.05*bayar1;
    total = bayar1 -diskon2;
    cout << "Total pembayaran keseluruhan (setelah tambah diskon 5%) = " <<   total << endl;
 return 0;
  }