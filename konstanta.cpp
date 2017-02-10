#include <iostream>
// Program Mencari Luas Lingkaran
// I.S Program Mengolah Angka
// F.S Prgoram Menampilkan Hasil
#define PHI 3.14 // konstanta

using namespace std;

int main(){
    // Varible Data
    float jari_jari, luas;
    
    // Konstanta
    jari_jari = 25; 
    
    // Rumus
    luas = 0.5 * PHI * jari_jari * jari_jari;
    cout << "Data Lingkaran : ";
    
    // Syntax Untuk Mengetahui Luas lingkaran
    cout << "\n Jari Jari : " << jari_jari;
    cout << "\n Luas : " << luas;
    cout << "\n";
    
    // Akhir Program
    return 0;

}

