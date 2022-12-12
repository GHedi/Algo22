#include <iostream>
using namespace std;

struct mahasiswa{
	int nim;
	string nama,prodi;
	float ipk;
};

int main(){
	mahasiswa u [5];
	int jum;
	
	cout<<"APLIKASI DATA MAHASISWA"<<endl;
	cout<<"--------------------------"<<endl;
	cout<<"Data Mahasiswa yang Ingin Dimasukkan (Max 5): ";
    cin>>jum;

	for(int a=0;a<jum;a++){
	cout<<"Data Mahasiswa Ke-"<<a+1<<endl;
	cout<<"Masukkan NIM anda : ";cin>>u[a].nim;
	cout<<"Masukkan Nama anda : ";cin>>u[a].nama;
	cout<<"Masukkan Prodi anda : ";cin>>u[a].prodi;
	cout<<"Masukkan IPK anda : ";cin>>u[a].ipk;
	cout<<endl;
}	
	
	cout<<"DATA YANG TELAH DIMASUKKAN SBB : "<<endl;
	for(int a=0;a<jum;a++){
	cout<<"Data Mahasiswa Ke-"<<a+1<<endl;
	cout<<"\nMasukkan NIM anda : "<<u[a].nim;
	cout<<"\nMasukkan Nama anda : "<<u[a].nama;
	cout<<"\nMasukkan Prodi anda : "<<u[a].prodi;
	cout<<"\nMasukkan IPK anda : "<<u[a].ipk;
	cout<<endl;
	}
}
