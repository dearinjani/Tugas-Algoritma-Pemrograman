#include <iostream>
using namespace std;
// Program Fungsi dowhile
//I.S Program menunggu memasukan data
//F.S Program menampilkan Data sesuai operasi logika

int main () {
	// Variable Data
	int a, b;
    
	// Menampilkan data
	cout << "Masukan NIlai untuk di ulang dan ditambah 1: ";
	cin >> a;
	cout << "Masukan batas pengulangan: ";
	cin >> b;
    // FUngsi do(){}
	do {
		cout << "Nilai a: " << a << endl;
		a++;
	} 
	while(a < b);
	
	//Perintah mengakhiri program
	return 0;
}