#include <iostream>
using namespace std;
// Program If Else Statmen
//I.S Program menunggu memasukan data
//F.S Program menampilkan Data sesuai operasi logika

int main () {
	//kamus
	int a;

	//Menampilkan Tulisan
	cout << "Masukan Angka: ";
	cin >> a; //Memasukan data
	
	//Perintah jika kondisi pertama true (benar)
	if(a == 1) {
		cout << "Angka 1" << endl;
	} //Perintah jika kondisi kedua true (benar)
	else if(a == 2) {
		cout << "Angka 2" << endl;
	} //Perintah jika kondisi ketiga true (benar)
	else if(a == 3) {
		cout << "Angka 3" << endl;
	} //Perintah jika kondisi keempat true (benar)
	else if(a == 4) {
		cout << "Angka 4" << endl;
	} //Perintah jika kondisi kelima true (benar)
	else if(a == 5) {
		cout << "Angka 5" << endl;
	} //Perintah jika kondisi tidak ada yang true (false)
	else {
		cout << "Angka tidak ada" << endl;
	}



	//Akhir Program
	return 0;
}