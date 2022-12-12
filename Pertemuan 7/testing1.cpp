#include <iostream>
using namespace std;

int main (){
    float a,b,total;
    int pil;

    cout<<"1.Penjumlahan"<<endl;
    cout<<"2.Pengurangan"<<endl;
    cout<<"3.Pengalian"<<endl;
    cout<<"4.Pembagian"<<endl;
    cout<<"Pilih nomor (1-4) : ";cin>>pil;
    cout<<"Masukkan angka pertama : ";cin>>a;
    cout<<"Masukkan angka kedua : ";cin>>b; 

    switch (pil){
        case 1 : total = a + b; cout<<"Hasilnya "<<total;break;
         case 2 : total = a - b; cout<<"Hasilnya "<<total;break;
          case 3 : total = a * b; cout<<"Hasilnya "<<total;break;
           case 4 : total = a / b; cout<<"Hasilnya "<<total;break;
    }
}