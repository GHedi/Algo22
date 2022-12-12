#include <iostream>
using namespace std;

string barang (int belanja){
	string bonus;
	if (belanja>=0 && belanja<=100000){
		bonus="Buku";
	} else if(belanja>=100001 && belanja<=200000){
		bonus="Payung";
	} else if(belanja>=200001)
		bonus="Tas";
	return bonus;
}

int main(){
	int belanja,a,b,total;
	cout<<barang(200000)<<endl;
	cout<<"Masukkan harga barang pertama : ";cin>>a;
	cout<<"Masukkan harga barang kedua : ";cin>>b;
	total= a + b;
	cout<<"Total harga : "<<total<<endl;
	cout<<"Bonus anda adalah "<<barang(total);
	return 0;
}
