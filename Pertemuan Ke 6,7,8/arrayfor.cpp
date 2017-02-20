#include <iostream>
using namespace std;
// Program Fungsi Array For
// I.S Program mengolah angka
// F.S Program Menampilkan Pengulangan Data
int main() {
    // Rumus
    int n[ 10 ];
    // Fungsi Pengulangan (for) 
    for ( int i = 0; i < 10; i++ ) {
        n[ i ] = i + 100;
    }
    // Menampilkan Hasil Fungsi Pengulangan (for) 
    for ( int j = 0; j < 10; j++ ) {
        cout << "Elemen ke" << j << " : " << n[ j ] << endl;
    }

    // Akhir Program 
    return 0;
}
