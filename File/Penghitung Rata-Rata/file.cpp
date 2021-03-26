#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main()
{
	ifstream input;
	int count = 0;
	double a, jumlah, rata;

	input.open("input.txt",ios::in);

	cout << setiosflags(ios::fixed);

	if(input.fail()){
		cout << "File Load Error!" << endl;
	}else{
		while(!input.eof()){
			input >> a;
			jumlah+=a;
			count++;
		}

		cout << setprecision(2) << jumlah/count << endl;
	}
	return 0;
}
