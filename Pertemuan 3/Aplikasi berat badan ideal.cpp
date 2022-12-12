#include <iostream>
using namespace std;

int main (){
	
	double tinggi,p,q,Total;
	string kalimat;
	
	cout<<"Aplikasi Pencari Berat Badan Ideal"<<endl;
	cout<<"----------------------------------"<<endl;
	
	
	cout<<"Hai, masukkan nama anda : " ; cin>>kalimat;
	cout<<"Masukkan tinggi anda (cm) : " ; cin>>tinggi;
	
	p = (tinggi - 100) ;
	q = (p * 0.1 ) ;
	Total = p - q ;
	cout<<"Jadi untuk saudara "<<kalimat<<" berat badan ideal anda adalah "<<Total<<" Kg";
}

