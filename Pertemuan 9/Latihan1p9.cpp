#include <iostream>
using namespace std;

	//const int baris = 3
	//const int kolom =4
	// [3] diganti sama baris,[4]diganti sama kolom

int main(){
    const int baris=3, kolom=4;
    int a [baris][kolom]={{3,4,8,0},{3,9,2,1},{6,3,0,2}};

    for (int c=0;c<baris;c++){
        for(int k=0;k<kolom;k++){
            cout<<a[c][k]<<" ";
        }
        cout<<endl;
    }
    return 0;
}