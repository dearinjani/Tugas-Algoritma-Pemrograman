#include <iostream>
// Program Fungsi Call by Value
// I.S Program mengolah angka
// F.S Program Menampilkan Data Value
using namespace std;

int main (){
    // Rumuss
    int a = 100;
    int b = 200;
    
    // Menampilkan Ukuran sebelum swap
    cout << "Before Swap, Value of a : " << a << endl;
    cout << "Before Swap, Value of b : " << b << endl;
    
    // Fungsi Swap
    swap(a, b);
    // Menampilkan Ukuran sesudah swap
    cout << "After Swap, Value of a : " << a << endl;
    cout << "After Swap, Value of b : " << b << endl;

    // Akhir Program
    return 0;
}

// Fungsi Swap
void swap(int &x, int &y){

    int temp;
    
    temp = x;
    x = y;
    y = temp;

    // Akhir Fungsi
    return;
}