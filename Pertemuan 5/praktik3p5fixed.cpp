#include <iostream>
using namespace std;

int main (){
    int pil,a1,b1; float a,b,c; 

    cout<<"Kalkulator Canggih"<<endl;
    cout<<"1. Penjumlahan"<<endl;
    cout<<"2. Pengurangan"<<endl;
    cout<<"3. Perkalian"<<endl;
    cout<<"4. Pembagian"<<endl;
    cout<<"5. Modulus"<<endl;
    cout<<"--------------------------"<<endl;
    cout<<"Masukkan pilihan anda (1-5) : "; cin>>pil;

    switch (pil){
        case 1: cout<<"Masukkan angka pertama: "; cin>>a;
                cout<<"Masukkan angka kedua: "; cin>>b;
                c = a + b;
                cout<<"Hasil penjumlahan: "<<c<<endl;
        break;
        case 2: cout<<"Masukkan angka pertama: "; cin>>a;
                cout<<"Masukkan angka kedua: ";cin>>b;
                c = a - b;
                cout<<"Hasil Pengurangan: "<<c<<endl;
        break;
        case 3: cout<<"Masukkan angka pertama : ";cin>>a;
                cout<<"Masukkan angka kedua : ";cin>>b;
                c = a * b;
                cout<<"Hasil Perkalian: "<<c<<endl;
        break;
        case 4 : cout<<"Masukkan angka pertama : ";cin>>a;
                 cout<<"Masukkan angka kedua : ";cin>>b;
                 c = a / b;
                 cout<<"Hasil Pembagian: "<<c<<endl;
        break;
        case 5 : cout<<"Masukkan angka pertama : ";cin>>a1;
                 cout<<"Masukkan angka kedua : ";cin>>b1;
                 c = a1 % b1;
                 cout<<"Hasil Modulus: "<<c<<endl;
        break;

        default: cout<<"Pilih pilihan menu yang sesuai (1-5)"<<endl;
        break;
    }
}