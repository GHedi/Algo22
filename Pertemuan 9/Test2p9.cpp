#include <iostream>
using namespace std;

int main (){
    int umur[2000], total=0, rerata,x;

    cout<<"Ingin masukkan berapa data? : ";cin>>x;
    for (int a=0; a<x; a++){
        cout<<"Masukkan umur: ";
        cin>>umur[a];
        total = total + umur[a];
    }
    rerata = total / x;
    cout<<"Rata - rata umur : "<<rerata;
}
