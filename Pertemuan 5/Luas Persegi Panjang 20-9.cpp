#include <iostream>
using namespace std;

int main (){
	
	float panjang,lebar,luas;
	
	cout<<"Aplikasi Mencari Luas Persegi Panjang"<<endl;
	cout<<"-------------------------------------"<<endl;
	
	cout<<"Masukkan Panjang = ";cin>>panjang;
	cout<<"Masukkan Lebar = ";cin>>lebar;
	luas = (panjang * lebar);
	cout<<"Jadi luas persegi panjang tersebut adalah "<<luas<<" cm";
	
	return 0;
}