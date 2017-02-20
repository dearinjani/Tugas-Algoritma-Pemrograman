#include <iostream>
using namespace std;
// Program Fungsi For
//I.S Program menunggu memasukan data
//F.S Program menampilkan Data sesuai operasi logika

int main () {
	//Kamus
	int a, b;

	//Meminta user untuk memasukan nilai
	cout << "Masukan Nilai untuk di ulang: ";
	cin >> a; //Nilai ditampung di int "a"
	cout << "Berapakali batas pengulangan: ";
	cin >> b;
    // FUngsi for
	for(a; a<b; a++){
		cout << "Nilai a adalah: " << a << endl;
	}
	//Akhir program
	return 0;
}