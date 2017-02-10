#include <iostream>
// Program Input & Output Data
// I.S Program Memasukan Data
// F.S Program Menampilkan hasil data
 
using namespace std;

int main() {
	char name[900]; // Batasan Jumlah Character dalam 1 Kalimat [900]
	
    //Sysntax Untuk Menampilakn data
	cout << "Please enter your name : "; 
	
	cin >> name; // buat validasi input 
	
	cout << "Yout name is: " << name << endl; // tampilkan hasil input 
	 
}