#include <iostream>
using namespace std;

int main (){
    int nilai;
    string nama;

    cout<<"Masukkan nama anda : ";
    getline (cin,nama);
    cout<<"Nilai kegantengan : ";cin>>nilai;

    if (nilai > 100){
        cout<<nama<<" Bukan Manusia"<<endl;
    } else if (nilai >= 85 && nilai <=100 ) {
        cout<<nama<<" Kamu Ganteng"<<endl;
    } else if (nilai < 1){
        cout<<nama<<" Alien"<<endl;
    }   else{
        cout<<nama<<" Need oplas"<<endl;
    }
    return 0;
}