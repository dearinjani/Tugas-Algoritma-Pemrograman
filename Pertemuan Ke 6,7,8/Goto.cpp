#include <iostream>
using namespace std;
// Program Fungsi Goto
//I.S Program menunggu memasukan data
//F.S Program menampilkan Data sesuai operasi logika

int main () {
	// Variable Data
	int a, b;

	cout << "Masukan Nilai awal (a) Untuk di ulang: ";
	cin >> a;
	cout << "Masukan Nilai (b) Untuk batas pengulangan: ";
	cin >> b;

	start :
	cout << "\n" << ++a;
	if(a < b)

	// Akhir Program
	goto start;
}