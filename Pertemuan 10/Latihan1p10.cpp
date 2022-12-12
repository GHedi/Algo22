#include <iostream>
using namespace std;

struct mahasiswa{
    int nim;
    string nama, matakuliah;
    int nilaiangka;
    char nilaihuruf;
};

int main(){
    mahasiswa mhs[3];
    int i;
    for (i<0; i<3;i++){
    cout<<"DATA MAHASISWA"<<endl;
    cout<<"------------------"<<endl;
    cout<<"Nama : ";
    cin>>mhs[i].nama;
    cout<<"Nim : ";
    cin>>mhs[i].nim;
    cout<<"Mata Kuliah : ";
    cin>>mhs[i].matakuliah;
    cout<<"Nilai Angka : ";
    cin>>mhs[i].nilaiangka;
    cout<<endl;
    

    if (mhs[i].nilaiangka >= 0 && mhs[i].nilaiangka <= 60){
        mhs[i].nilaihuruf = 'E';
    } else if(mhs[i].nilaiangka >= 61 && mhs[i].nilaiangka <= 70){
        mhs[i].nilaihuruf = 'D';
    } else if(mhs[i].nilaiangka >= 71 && mhs[i].nilaiangka <= 81){
        mhs[i].nilaihuruf = 'C';
    } else if(mhs[i].nilaiangka >= 81 && mhs[i].nilaiangka <= 91){
        mhs[i].nilaihuruf = 'B';
    } else if(mhs[i].nilaiangka >= 91 && mhs[i].nilaiangka <= 100){
        mhs[i].nilaihuruf = 'A';
    }
    }


    for (i=0; i<3; i++){
    	cout<<"\nNIM : "<<mhs[i].nim;
    	cout<<"\nNama : "<<mhs[i].nama;
    	cout<<"\nMata Kuliah : "<<mhs[i].matakuliah;
    	cout<<"\nNilai Angka : "<<mhs[i].nilaiangka;
        cout<<"\nNilai Huruf : "<<mhs[i].nilaihuruf;
        cout<<endl;
	}
    return 0;
}