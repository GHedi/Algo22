#include <iostream>
using namespace std;

struct universitas{
	string prodi,rektor;
	int niu;
};

int main(){
	universitas  u[100];
	for (int a=0; a < 2; a++)
		cout<<"niu: ";cin>>u.niu;
		u.prodi = "TPL";
		cout<<u.prodi;
}
