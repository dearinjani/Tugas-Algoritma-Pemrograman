#include <iostream>
// Program Perhitungan Tanpa Class
// I.S Program Mengolah Data
// F.S Program Menampilkan Data
using namespace std;

// Prototype
void print(int i);
void print(double f);
void print(string c);

// Fungsi int menampilkan angka bilangan bulat
void print(int i) {
    cout << "Printing int : " << i << endl;}

// Fungsi double menampilkan angka bilangan pecahan
void print(double f){
cout << "Printing float :" << f << endl;}

// Fungsi string menampilkan karakter teks atau kalimat
void print(string c){
    cout << "Printing Character : " << c << endl;}

// Rumus
// Variable Data
int main(void){

    print(5);
    print(500.263);
    print("Hello C++");

    // Akhir Program
    return 0;

}