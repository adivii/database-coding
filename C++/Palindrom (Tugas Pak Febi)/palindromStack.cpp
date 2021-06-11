#include <bits/stdc++.h>
using namespace std;

#define MAX_LENGTH 100

class Stack{
	public:
		int top;
		char* data;

	Stack(){
		data = new char[MAX_LENGTH+1];
		this->top = -1;
	}

	Stack(char* str){
		data = new char[MAX_LENGTH+1];
		this->top = strlen(str) - 1;
		this->data = str;
	}

	bool isEmpty(){
		return this->top == -1;
	}

	bool isFull(){
		return this->top == MAX_LENGTH;
	}

	void push(char newData){
		if(isFull()){		
		}else{
			this->data[++this->top] = newData;
		}
	}

	char pop(){
		if(isEmpty()){
			return '\0';
		}else{
			char popped;
			popped = this->data[this->top--];
			return popped;
		}
	}
};

bool Palindrome(char* str){
	Stack word(str);
	bool status = true;

	char *cek;
	cek = new char[strlen(str)];

	for(int j = 0;j < strlen(str);j++){
		cek[j] = word.pop();
	}

	for(int i = 0;i < strlen(str);i++){
		str[i] = tolower(str[i]);
		cek[i] = tolower(cek[i]);

		if(str[i] != cek[i]){
			status = false;
			break;
		}
	}

	return status;
}

int main(){
	char tes[] = "Adiwijaya";
	if(Palindrome(tes)){
		cout << "Yeah";
	}else{
		cout << "No";
	}
}