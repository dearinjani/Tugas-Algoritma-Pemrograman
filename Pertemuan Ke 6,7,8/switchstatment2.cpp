#include <iostream>
using namespace std;
// Program switch statmenet
//I.S Program menunggu memasukan data
//F.S Program menampilkan Data sesuai operasi logika

int main () {
	//Kamus
	int nilai;

	//Program memasukan nilai
	cout << "Masukan Nilai IPK: ";
	cin >> nilai; //menginput ke "nilai"

	//Tugas Pemilihan
	switch (nilai) {
	case 1: cout << "Jelek" << endl;
		break;
	
	case 2: cout << "cukup" << endl;
		break;
	
	case 3: cout << "Lumayan" << endl;
		break;
	
	case 4: cout << "Bagus" << endl;
		break;
	//Bila tidak ada yang cocok
	default : cout << "Tidak ada nilai" << endl;
}
	//Akhir Program
	return 0;
}