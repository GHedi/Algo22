#include <iostream>
using namespace std;

string predikat (int nilai){
	string s;
	if (nilai<=50){
		s="Gagal";
	} else{
		s="Lulus";
	}
	return s;
}

int main(){
	cout<<predikat(60);
}
