#include <fstream>
#include <iostream>
// Program Input Data
// I.S Program memasukan data
// F.S Program menampilkan hasil data
using namespace std;


int main(){
    // Batasan Karakter Dalam Suatu Teks
    char data[100];

    // Buka Files
    ofstream outfile;
    outfile.open("Test.txt");
    
    cout << "Tulis Data ke File" << endl;
    cout << "Masukan Nama Anda : ";
    cin.getline(data, 100);

    // Tulis data ke file
    outfile << data << endl;

    cout << "Masukan Umur Anda : ";
    cin >> data;
    cin.ignore();

    // Tulis data ke file
    outfile << data << endl;

    // Close file
    outfile.close();

    //Buka file
    ifstream infile;
    infile.open("Test.txt");
    
    // Menampilkan Hasil Data
    cout << "Hasil Data Anda" << endl;
    infile >> data;
     
    cout << data << endl;
    infile >> data ;
    cout << data << endl;

    infile.close();
    
    // Akhir Program
    return 0;
}
