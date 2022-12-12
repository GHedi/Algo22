#include <iostream>
using namespace std;
void global(){
string kata= "Universitas Universal";
cout<<kata<<endl;
}
int main (){
//cout<<kata<<endl;
global();
return 0;
}
