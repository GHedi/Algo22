#include <iostream>
using namespace std;
int main (){
    string st,pr;
    string nama;cout<<"Masukkan nama anda : ";cin>>nama;
    int tugas;cout<<"Masukkan nilai tugas : ";cin>>tugas;
    int uts;cout<<"Masukkan nilai uts : ";cin>>uts;
    int uas;cout<<"Masukkan nilai uas : ";cin>>uas;
    int nilai;

    cout<<"---------------------"<<endl;

    cout<<"Selamat "<<nama<<endl;
    nilai= (tugas+uts+uas) / 3; 
    switch (nilai){
        case 81 ... 100: st="A";
        pr="Sangat baik";break;
        case 61 ... 80: st="B";
        pr="Cukup baik";break;
        case 41 ... 60: st="C";
        pr="Baik";break;
        case 21 ... 40: st="D";
        pr="Kurang";break;
        case 0 ... 20: st="E";
        pr="Sangat Kurang";break;
    }
    cout<<"Nilai anda : "<<nilai<<endl;
    cout<<"Nilai Huruf : "<<st<<endl<<"Predikat : "<<pr<<endl;
    return 0;
}

