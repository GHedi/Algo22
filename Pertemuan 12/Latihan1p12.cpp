#include <iostream>
using namespace std;

float beratbadanideal (string nama, double tinggi){
    double ideal;
    double a = (tinggi - 100) * 0.1;
    ideal = (tinggi - 100) - a;
    return ideal; 
}

int main(){
    string nama; double tinggi;
    cout<<"APLIKASI PENGHITUNG BERAT BADAN IDEAL PRIA"<<endl;
    cout<<"-------------------------------------"<<endl;
    cout<<"Masukkan nama anda : ";cin>>nama;
    cout<<"Masukkan tinggi badan anda : ";cin>>tinggi;
    cout<<"Berat badan ideal "<<nama<<" adalah "<<beratbadanideal(nama, tinggi);
}