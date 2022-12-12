#include <iostream>
using namespace std;

void volumebalok (double p, double l, double t){
	double volume = (p * l * t);
	cout<<"Volume balok adalah : "<<volume<<" cm."<<endl;
}

int main(){
	double p,l,t;
	cout<<"PENCARI VOLUME BALOK"<<endl;
	cout<<"---------------------------"<<endl;
	cout<<"Masukkan panjang balok (cm) : ";cin>>p;
	cout<<"Masukkan lebar balok (cm) : ";cin>>l;
	cout<<"Masukkan tinggi balok (cm) : ";cin>>t;
	volumebalok(p,l,t);
	
	return 0;
}
