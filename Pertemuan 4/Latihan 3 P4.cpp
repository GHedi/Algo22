#include <iostream>
using namespace std;

int main(){

    float uts,uas,nilai_ujian;

    cout<<"Masukkan nilai UTS anda = ";cin>>uts;
    cout<<"Masukkan nilai UAS anda = ";cin>>uas;

    nilai_ujian = (uts+uas)/2;

    cout<<"Nilai kamu adalah "<<nilai_ujian<<endl;

    (nilai_ujian > 60) ? (cout<<"Selamat anda lulus") : (cout<<"Maaf anda tidak lulus, tetap semangat ya!");

    return 0;
    }