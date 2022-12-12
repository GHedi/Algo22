#include <iostream>
using namespace std;

void beratbadanideal1(double tinggi){
	double x = (tinggi - 100) * 0.1;
	double ideal = (tinggi - 100) - x;
	cout<<"Berat badan ideal anda adalah : "<<ideal<<endl;
}

void beratbadanideal2(double tinggi){
	double x = (tinggi - 100) * 0.15;
	double ideal = (tinggi - 100) - x;
	cout<<"Berat badan ideal anda adalah : "<<ideal<<endl;
}

int main(){
	double tinggi;
	char kelamin;
	cout<<"APLIKASI PENCARI BERAT BADAN IDEAL"<<endl;
	cout<<"-----------------------------------------"<<endl;
	cout<<"Masukkan jenis kelamin anda (L/P) : ";cin>>kelamin;
	
	if (kelamin == 'L' || kelamin == 'l'){
		cout<<"Masukkan tinggi anda : ";cin>>tinggi;
	beratbadanideal1(tinggi);
	} else {
		cout<<"Masukkan tinggi anda : ";cin>>tinggi;
	beratbadanideal2(tinggi);
	}
	
	return 0;
}
