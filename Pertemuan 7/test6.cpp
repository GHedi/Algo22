#include <iostream>
using namespace std;

int main (){
    int nilai;
    string nama;

    cout<<"Masukkan nama anda : ";
    getline (cin,nama);
    cout<<"Nilai kegantengan : ";cin>>nilai;

    switch (nilai) {
        case 0 ... 1 : cout<<"Alien";break;
        case 2 ... 85 : cout<<"Need Oplas";break;
        case 86 ... 99 : cout<<"Kamu Ganteng";break;
        case 100 : cout<<"Bukan Manusia";break;
        default : cout<<"100+";break;
    }

    return 0;
}
