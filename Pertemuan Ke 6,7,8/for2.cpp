#include <iostream>
using namespace std;
// Program Fungsi For
//I.S Program menunggu memasukan data
//F.S Program menampilkan Data sesuai operasi logika

int main () {
	// Variable Data
	int a, b;

	cout << "Masukan Nilai untuk di ulang: ";
	cin >> a;
	cout << "Berapakali batas pengulangan: ";
	cin >> b;

	for(a; a>b; a--){
		cout << "Nilai a adalah: " << a << endl;
	}
	//Akhir Program
	return 0;
}