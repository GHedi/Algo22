#include <iostream>
using namespace std;

string kata= "uvers";
string aa(){
	return kata;
}

int main(){
	cout<<"ini dari fungsi: "<<aa()<<endl;
	cout<<"ini tanpa fungsi: "<<kata<<endl;
	kata="yodi";
	cout<<"ini dari fungsi w: "<<aa()<<endl;
	cout<<"ini tanpa fungsi w: "<<kata<<endl;
}
