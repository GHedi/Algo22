#include <iostream>
using namespace std;

int tambah (int a, int b){
	return a + b;
}

int tambah (int a, int b, int c){
	return a+b;
}

string tambah (string a, string b){
	return a+b;
}
//ganti parameter atau ganti tipe datanya//
// ganti ke strinh bisa//
// yg kedua harusnya a+b+c , tpi leh uga a +b//
//jikalau hanya int tambah (int a, int b) maka akan eror, karena sudah ada atau sama dgn atas, maka ditambah lagi//

int main (){
	cout<<tambah(2,3);
	cout<<tambah(2,3,5);
} 
