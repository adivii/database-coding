#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	cout<<setiosflags(ios::fixed);
	
	float a = 19;
	float b = a/7;
	
	cout<<setprecision(2)<<b;
}
