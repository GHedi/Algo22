#include <iostream>
using namespace std;

int tambah (int bil, int bil2){
    return bil + bil2;
}

int main (){
    int a,b,c;
    cout<<"Masukkan a:";cin>>a;
    cout<<"Masukkan b:";cin>>b;
    cout<<"Hasilnya: "<<tambah(a,b)<<endl;
    
    c=tambah(a,b) + 5;
    cout<<c;
}
