#include <iostream>
using namespace std;
string kata= "Universitas Universal";
//variable diluar fungsi (global) jadi bisa dipake semua/ dipake oleh fungsi lain//

void global(){
cout<<kata<<endl;
}
int main (){
cout<<kata<<endl;
global();
return 0;
}
