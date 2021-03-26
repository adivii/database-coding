#include <iostream>
using namespace std;

int main(){
	int z;
	for (int i=1;i<1000;i++){
		if ((i%13==5) && (i%18==3)){
			cout << z%7;
			break;
		}
	}
}
