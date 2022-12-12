#include <iostream>
using namespace std;

float volumebalok(double panjang, double lebar, double tinggi){
    double volume;
    volume = panjang * lebar * tinggi;
    return volume;
}

int main(){
    string nama; double panjang,lebar,tinggi;
    cout<<"APLIKASI PENCARI VOLUME BALOK"<<endl;
    cout<<"-----------------------------"<<endl;
    cout<<"Masukkan nama anda : ";cin>>nama;
    cout<<"Masukkan panjang balok : ";cin>>panjang;
    cout<<"Mauskkan lebar balok : ";cin>>lebar;
    cout<<"Masukkan tinggi balok : ";cin>>tinggi;
    cout<<"Volume balok yang "<<nama<<" cari adalah: "<<volumebalok(panjang,lebar,tinggi)<<" cm.";
    return 0;
}