#include <iostream>
using namespace std;

int main(){
    int u;cout<<"input umur : ";cin>>u;
    string st,pr;
    //st status pr predikat
    switch (u){
        case 1 ... 3: st="balita";
         pr="lagi lucu2nya";break;
        case 4 ... 5: st="balita";
         pr="masih lucu";
         break;
    }
cout<<st<<endl<<pr<<endl;
}