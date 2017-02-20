#include <iostream>
using namespace std;
// Program Switch Statment
//I.S Program menunggu memasukan data
//F.S Program menampilkan Data sesuai operasi logika

int main () {
	//Kamus
	char nama;

	//Menampilkan Pertanyaan untuk di isi
	cout << "Masukan Alfabet awal nama anda: ";
	cin >> nama; //Input data ke "nama"

	//Tugas Pemilihan
	switch (nama) {
	case 'A' : cout << "nama saya Amir" << endl;
		break;
	
	case 'R' : cout << "nama saya Ridwan" << endl;
		break;
	
	case 'N' : cout << "nama saya Rina" << endl;
		break;
	
	case 'J' : cout << "nama saya Juwita" << endl;
		break;
	//Bila tidak ada yang cocok
	default : cout << "Tidak ada nama" << endl;
}
	//Akhir Program
	return 0;
}