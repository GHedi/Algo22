#include <iostream>
using namespace std;

float kali (float a, float b){
	return a * b;
}

float luas3 (float alas, float tinggi){
	return kali(alas, tinggi) / 2;
}

//fungsi di fungsi yang lain//
//fungsi yang dipanggil(kali) harus berada diataas fungsi yang memanggil//

int main(){
	cout<<luas3(5.0 , 10.5);
}
