#include <iostream>
// Program Perhitungan Tanpa Class
// I.S Program Mengolah Data
// F.S Program Menampilkan Data
using namespace std;

// Fungsi Class
class printData {
public:

    // Fungsi int menampilkan angka bilangan bulat

    void print(int i) {
        cout << "Printing int : " << i << endl;}

    // Fungsi double menampilkan angka bilangan pecahan

    void print(double f){
    cout << "Printing float :" << f << endl;}

    // Fungsi string menampilkan karakter teks atau kalimat
    void print(string c){
        cout << "Printing Character : " << c << endl;}

};



// Rumus
// Variable Data
int main(void){
    printData pd;

    pd.print(5);
    pd.print(500.263);
    pd.print("Hello C++");

    // Akhir Program
    return 0;

}