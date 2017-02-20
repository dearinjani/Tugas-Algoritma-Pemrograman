#include <iostream>
#include "swaplib.h"
#include "swaplib.cpp"
// Program Swap Sebelum & Sesudah
// I.S Program Mengolah Data
// F.S Program Menampilkan Data
using namespace std;


// Swap.cpp
int main (){
    // Rumus
    // Variable Data
    int a = 100;
    int b = 200;

    // Fungsi Sebelum di beri fungsi swap
    cout << "Before Swap, Value of a : " << a << endl;
    cout << "Before Swap, Value of b : " << b << endl;

    // Fungsi swap
    swap(a, b);

    // Fungsi Sebelum di beri fungsi swap
    cout << "After Swap, Value of a : " << a << endl;
    cout << "After Swap, Value of b : " << b << endl;

    // Akhir Program
    return 0;
}
