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
	int belanja;
	cout<<barang(200000)<<endl;
	cout<<"Masukkan total belanja anda : ";cin>>belanja;
	cout<<"Bonus anda adalah "<<barang(belanja);
	return 0;
}
