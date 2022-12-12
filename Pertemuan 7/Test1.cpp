#include <iostream>
using namespace std;

int main (){
    string nama;
    int umur;

    cout<<"Masukkan nama anda : ";
    getline(cin,nama);
    cout<<"Masukkan umur anda : ";cin>>umur;

    cout<<"Nama anda adalah "<<nama<<" dengan umur "<<umur<<" tahun"<<endl;

    return 0;
}