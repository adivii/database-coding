#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	fstream file, file_out;
	string s;

	file.open("input.txt",ios::in);
	file_out.open("output.txt",ios::out);

	if(file.fail()){
		cout << "error!" << endl;
	} else {
		while(!file.eof()){ //end of file
			getline(file,s);
			
			//s.length() berarti mengambil panjang dari s
			for(int i=0;i<s.length();i++){
				cout << s[i] << " ";
			}
		}
	}
	return 0;
}
