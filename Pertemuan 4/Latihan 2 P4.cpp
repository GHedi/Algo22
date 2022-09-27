#include <iostream>
using namespace std;

int main (){

    cout<<"Penentu Umur Kategori Dewasa"<<endl;
    int umur;

    cout<<"Berapakah umur anda (tahun)? ";cin>>umur;
    (umur > 17) ? (cout<<"Anda sudah Dewasa") : (cout<<"Anda belum Dewasa");
    
}