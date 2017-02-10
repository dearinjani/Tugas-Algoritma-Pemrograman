#include <iostream>
// Program Operator Aritmatika
// I.S Program Mengolah Angka
// F.S Program Menampilkan Hasil
using namespace std;

main(){
    // Rumus
    // Variable Data
    int a = 21;
    int b = 10;
    int c ;
    
    // Syntax Untuk Mencari Hasil Aritmika
    // Penjumlahan
    c = a+b;
    cout << "a+b : " << c << endl;
    
    // Pengurangan
    c = a-b;
    cout << "a-b : " << c << endl;
 
    // Perkalian
    c = a*b;
    cout << "a*b : " << c << endl;

    // Pembagian
    c = a/b;
    cout << "a/b : " << c << endl;

    // Pembagian Sisa
    c = a%b;
    cout << "a%b : " << c << endl;
    
    // Ditambah + 1
    c = a++;
    cout << "a++ : " << c << endl;

    // Dikurang - 1
    c = a--;
    cout << "a-- : " << c << endl;

    // Akhir Program
    return 0;
}