#include <iostream>
using namespace std;

int main (){
    int pilih;
    float suhu,ctf,ftc;
    char ulang;

    refill:
    cout<<"APLIKASI CONVERTER SUHU"<<endl;
    cout<<"-----------------------"<<endl;
    cout<<"1. Celcius to Fahrenheit"<<endl;
    cout<<"2. Fahrenheit to Celcius"<<endl;
    cout<<"Masukkan Pilihan Anda (1/2) ";cin>>pilih;
    cout<<"Nilai suhu? = ";cin>>suhu;

    ctf = (suhu * 9/5) + 32;
    ftc = (suhu - 32) * 5/9;

    switch (pilih){
        case 1 : cout<<"Suhunya adalah "<<ctf<<endl;break;
        case 2 : cout<<"Suhunya adalah "<<ftc<<endl;break;
    }
    
    cout<<"Ulangi (y/t) ?";cin>>ulang;
    if (ulang == 'y' || ulang == 'Y'){
    goto refill;
}
return 0;

}
