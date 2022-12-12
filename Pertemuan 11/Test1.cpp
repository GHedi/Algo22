#include <iostream>
using namespace std;

void garis (){
    cout<<"-----------------"<<endl;
}

void namaku(string nama , int umur){
    cout<<"Nama saya : "<<nama<<endl;
    cout<<"Umur saya : "<<umur<<endl;
}

int main(){
    string kata;
    kata = "Uvers Keren";
    int umur = 20;
    //garis();namaku(nama, umur);garis();//
    //garis();namaku(umur , kata);garis(); (gabisa, error, beda data) kalo (kata,umur) bisa//
}
