#include <iostream>
// Program Oprator Comparison
// I.S Program Mengolah Angka 
// F.S Program Menampilkan Hasil Data

using namespace std;

main(){
    // Rumus
    // Variable Data
    int a = 21;
    int b = 10;
    int c ;
    
    // Syntax Untuk Mengetahui Hasil Data
    // Jika a sama dengan b 
    if( a == b) {
        cout << "a sama dengan b" << endl;
    } else {
        cout << "a tidak sama dengan b" << endl;
    }

    // Jika a kurang dari b
    if( a < b) {
        cout << "a lebih kecil dari b" << endl;
    } else {
        cout << "a tidak lebih kecil dari b" << endl;
    }
     
    // Jika a lebih besari dari b
    if( a > b) {
        cout << "a lebih besar dari b" << endl;
    } else {
        cout << "a tidak lebih besar dari b" << endl;
    }
 
   /* Ganti Nilai a & nilai B */
    // Rumus
    // Variable Data
    a = 5;
    b = 20;
    
    // Syntax Untuk Mengetahui Hasil Data
    // jika a kurang dari sama dengan b
    if(a <= b){
      cout << "b kurang dari a" << endl;
    }
    // Jika a lebih dari sama dengan b
    if(a >= b){
      cout << "a lebih besar dari b" << endl;
    }

    // Akhir Program
    return 0;
}