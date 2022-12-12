#include <iostream>
using namespace std;

int main (){
    float celcius,fh;
    
    cout<<"Aplikasi Penghitung Suhu"<<endl;
    cout<<"-------------------------"<<endl;

    cout<<"Masukkan suhu Fahrenheit : ";cin>>fh;
    celcius = (fh - 32) * 5/9; 

    cout<<"Suhu anda : "<<celcius;

    return 0;
}