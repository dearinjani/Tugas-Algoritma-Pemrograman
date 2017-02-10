#include <iostream>
// Program Type Boolean
// I.S Program mencari nilai benar atau salah
// F.S Menampilkan hasil nilai benar atau salah
 
using namespace std;

int main() {

    // Rumus
	int a = 21; 
	int b = 10; 
	int c;

    // Syntax untuk mencari nila TRUE & FALSE

    // jika a dan b sama maka TRUE
	if(a && b){ 
		cout << "TRUE" << endl; 
	}else{
		cout << "FALSE" << endl;
	}

     // jika a dan b tidak sama maka TRUE
	if(a != b){
		cout << "TRUE" << endl;
	}else{
		cout << "FALSE" << endl;
	}

    // jika a atau b sama maka TRUE
	if(a || b){ 
		cout << "TRUE" << endl;
	}else{
		cout << "FALSE" << endl;
	}
 
    // Akhir Program
	return 0;
	 
}
