#include <iostream>
// Program Pro Kalkulator
// I.S Program Memasukan Angka
// F.s Program Menampilkan Hasil

using namespace std;

// Prototype
int hasilTambah(int a, int b);
int hasilKurang(int a, int b);
int hasilKali(int a, int b);
int hasilBagi(int a, int b);

main(){
  int a, b;

  // Untuk Input Angka
  cout << "Masukan Nilai :";
  cin >> a;

  // Untuk Input Angka
  cout << "Masukan Nilai :";
  cin >> b;
  
  // Syntax Untuk Mencari Hasil
  cout << endl;
  cout << "Hasil Pertambahan a dan B adalah : " << hasilTambah(a,b) ;
  cout << endl;
  cout << "Hasil Pengurangan a dan B adalah : " << hasilKurang(a,b) ;
  cout << endl;
  cout << "Hasil Perkalian a dan B adalah : " << hasilKali(a,b) ;
  cout << endl;
  cout << "Hasil Pembagian a dan B adalah : " << hasilBagi(a,b) ;

  // Akhir Program
  return 0;
}

// Rumus
int hasilTambah(int a, int b){
    return a + b;
}
int hasilKurang(int a, int b){
    return a - b;
}
int hasilKali(int a, int b){
    return a * b;
}
int hasilBagi(int a, int b){
    return a / b;
}