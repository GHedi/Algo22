#include <iostream>
using namespace std;

int main(){
	int a = 10;
	
	while (a <= 30){
		if (a % 2 == 0|| a == 21|| a == 27){
			a++;
			continue;
		}
		cout<<a<<" ";
		a++;
	}
	
	return 0;
}