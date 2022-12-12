#include <iostream>
using namespace std;

string barang (int belanja){
	string bonus;
	if (belanja>=0 && belanja<=100000){
		bonus="Buku";
	} else if(belanja>=100001 && belanja<=200000){
		bonus="Topi";
	} else if(belanja>=200001 && belanja<=300000){
		bonus="Kalung";
	} else if(belanja>=300001 && belanja<=400000){
		bonus="Tas";
	} else if(belanja>=400001){
		bonus="Sepatu";
	} else{
        bonus="Tidak ada";
    }
	return bonus;
}

int main(){
	int belanja;string nama;
    cout<<"Masukkan nama anda : ";cin>>nama;
	cout<<"Masukkan harga barang belanja anda : ";cin>>belanja;
	cout<<"Bonus anda adalah "<<barang(belanja)<<endl;
    cout<<"Terima kasih "<<nama<<" sudah belanja diToko kami. Harga belanja anda adalah Rp"<<belanja<<
    " dan anda mendapatkan bonus "<<barang(belanja);
	return 0;
}
