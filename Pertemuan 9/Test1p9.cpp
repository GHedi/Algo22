#include <iostream>
using namespace std;

int main (){
    int umur[10], total, rerata;

    for (int a=0; a<9; a++){
        cout<<"Masukkan umur: ";
        cin>>umur[a];
        total = total + umur[a];
    }
    rerata = total / 10;
    cout<<"Rata - rata umur : "<<rerata;
}