#include <iostream>
using namespace std;

int main (){
	
	string nama,barang;
	double harga,jumlah,Total;
	
	cout<<"Masukkan nama pelanggan : ";cin>>nama;
	cout<<"Masukkan nama barang : ";cin>>barang;
	cout<<"Masukkan harga barang : ";cin>>harga;
	cout<<"Masukkan jumlah beli : ";cin>>jumlah;
	
	cout<<"------------------------------"<<endl;
	
	cout<<"Barang yang anda beli adalah "<<barang<<endl;
	cout<<"Dengan harga : "<<harga<<endl;
	Total= harga * jumlah;
	cout<<"Total bayar : "<<Total<<endl;
	
	if (Total > 50000){
		cout<<"Bonus : Payung"<<endl;
	} else{
		cout<<"Bonus : Terimakasih"<<endl;
	}
	
	cout<<"-----Terimakasih "<<nama<<"-----";
    
	
}