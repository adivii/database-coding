#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int x;
	double y;
	
	cout<<"Fungsi : ((x^2 + 1)/x - 1)^0.5"<<endl;
	cout<<"x : ";cin>>x;

	y = pow((pow(x,2)+1)/(x-1),0.5);
	cout<<y;
	return 0;
}
