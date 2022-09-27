#include <iostream>
using namespace std;

int main(){
    int a;
    
    //swith hanya bisa nerima integer atau char
    //jika selesai pada case 1 harus melakukan break, jikalau tidak pilihan kedua akan dilanjutkan ( utk menyelesaikan case )

    cout<<"nilai a = ";cin>>a;
    switch (a){
        case 1: cout<<"satu";break;
        case 2: cout<<"dua";break;
        default: cout<<"bukan 1 atau 2";
    }
}