#include <iostream>
using namespace std;

int main (){
    int kamar,lamainap,total,pr,y;
    string nama,st,x;
    char sarapan;

    cout<<"Hotel Bahagia"<<endl;
    cout<<"----------------------------"<<endl;
    cout<<"1. VVIP (1.000.000)"<<endl;
    cout<<"2. VIP (750.000)"<<endl;
    cout<<"3. Standard (500.000)"<<endl;
    cout<<"4. Melati (250.000)"<<endl;
    cout<<"----------------------------"<<endl;
    cout<<"Masukkan nama anda: ";cin>>nama;
    cout<<"Masukkan jenis kamar (1-4): ";cin>>kamar;
    cout<<"Lama inap: ";cin>>lamainap;
    cout<<"Dengan sarapan (y/n) 50rb/hr: ";cin>>sarapan; 
    
	switch (kamar){
        case 1: st="VVIP";pr=1000000;break;
        case 2: st="VIP";pr=750000;break;
        case 3: st="Standard";pr=500000;break;
        case 4: st="Melati";pr=250000;break;
    }
    
    if (sarapan == 'y'){
        x="dengan sarapan"; y = lamainap * 50000; ;
    } else {
        x="tanpa sarapan"; y = 0;
    }

    cout<<"--------------"<<endl;
    cout<<"Terima kasih "<<nama<<endl;
    cout<<"Kamar anda "<<st<<endl;
    cout<<"Lama menginap "<<lamainap<<" hari "<<x<<endl;
	total= (pr * lamainap + y) ;
    cout<<"Total bayar : "<<total;

    return 0;
}
