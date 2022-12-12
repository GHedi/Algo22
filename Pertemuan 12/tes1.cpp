#include <iostream>
using namespace std;

int tambah(int bilangan1, int bilangan2){
    return bilangan1 + bilangan2;
}

int main(){
    int a,b,c;

    cout<<"Masukkan nilai a : "; cin>>a;
    cout<<"Masukkan nilai b : "; cin>>b;
    cout<<"Hasil Penjumlahan : "<<tambah(a,b)<<endl;

    c = 10 + tambah(a,b);

    cout<<"Hasil penjumlahan ditambah 10 : "<<c<<endl;

    return 0;
}