#include <iostream>
using namespace std;

int main(){
    char a;

    cout<<"nilai a = ";cin>>a;
    switch (a){
        case 'a': cout<<"a";break;
        case 'b': cout<<"b";break;
        case 'c': cout<<"c";break;
        case 'd': cout<<"d";break;
        case 'e': cout<<"e";break;
        default: cout<<"bukan a, b, c, d atau e";
    }
}