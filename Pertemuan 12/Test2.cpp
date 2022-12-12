#include <iostream>
using namespace std;

struct universitas{
	string prodi,rektor;
	int niu;
};

int main(){
	universitas  u[100];
	
	cout<<"Masukkan Data"<<endl;
	for(int a=0; a < 2; a++){
		cout<<"NIU: ";cin>>u[a].niu;
		cout<<"Prodi: ";cin>>u[a].prodi;
		cout<<"Rektor: ";cin>>u[a].rektor;
		cout<<endl;
}
	cout<<"Hasil : "<<endl;
	for (int a=0; a < 2; a++){
		cout<<"\nNIU : "<<u[a].niu<<endl;
		cout<<"\nProdi : "<<u[a].prodi<<endl;
		cout<<"\n\n\nRektor : "<<u[a].rektor<<endl;
		cout<<endl;		
	}
	// "\n" adalah new line atau pengganti endl //
}
