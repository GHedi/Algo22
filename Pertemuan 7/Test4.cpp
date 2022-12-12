#include <iostream>
using namespace std;

int main (){
    int nilai;
    string nama;

    cout<<"Masukkan nama anda : ";
    getline (cin,nama);
    cout<<"Nilai kegantengan : ";cin>>nilai;

    if (nilai>85){
        cout<<nama<<" Kamu Ganteng"<<endl;
    } else {
        cout<<nama<<" Need oplas"<<endl;
    } return 0;

    }