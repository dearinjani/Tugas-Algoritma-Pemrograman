#include <iostream>
using namespace std;
// Program Fungsi String Class
// I.S Program mengolah angka
// F.S Program Menampilkan Hasil Data 
int main() {
    // Rumus
    string str1 = "5";
        string str2 = "6";
        string str3;
        int len;
        
        // Menampilkan data dari variable str3
        str3 = str1;
        cout << "str3 : " << str3 << endl;
        // Menampilkan data dari variable str1 + str2
        str3 = str1 + str2;
        cout << "str1 + str2 : " << str3 << endl;
        // Menampilkan ukuran data dari variable str3.size();
        len = str3.size();
        cout << "str3.size() : " << len << endl;

// Akhir Program
return 0;

}