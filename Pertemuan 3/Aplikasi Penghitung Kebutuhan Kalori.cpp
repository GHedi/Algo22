#include <iostream>
using namespace std;

int main(){
	
	double Berat,Tinggi,Umur,Total,p,q,r;
	
	cout<<"Aplikasi Penghitung Kebutuhan Kalori"<<endl;
	cout<<"------------------------------------"<<endl;
	
	cout<<"Berapa Berat Badan anda ? (Kg) ";cin>>Berat;
	cout<<"Berapa Tinggi Badan anda ? (Cm) " ;cin>>Tinggi;
	cout<<"Berapakah Umur anda ? (Tahun) " ;cin>>Umur;
	p= (88.4 + 13.4 * Berat);
	q= (4.8 * Tinggi);
	r= (5.68 * Umur);
	Total = p + q - r;
	cout<<"Jadi, kebutuhan kalori anda adalah sebesar "<<Total<<" kkal";
}
