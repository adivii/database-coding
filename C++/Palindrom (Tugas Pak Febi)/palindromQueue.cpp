#include <bits/stdc++.h>
using namespace std;

#define MAX_LENGTH 100

class Queue{
	public:
		int head;
		int tail;
		char* data;

	Queue(){
		data = new char[MAX_LENGTH+1];
		this->head = 0;
		this->tail = -1;
	}

	Queue(char* str){
		data = new char[MAX_LENGTH+1];
		this->head = 0;
		this->tail = strlen(str) - 1;
		this->data = str;
	}

	bool isEmpty(){
		return this->tail == -1;
	}

	bool isFull(){
		return this->tail == MAX_LENGTH;
	}

	void Enqueue(char newData){
		if(isFull()){
		}else{
			char temp;
			temp = newData;
			
			this->data[this->tail] = temp;
			
			this->tail++;
		}
	}

	char Dequeue(){
		if(isEmpty()){
			return '\0';
		}else{
			char temp = this->data[head];
			this->head++;
			return temp;
		}
	}
};

bool Palindrome(char* str){
	Queue word(str);
	bool status = true;

	char *cek;
	cek = new char[strlen(str)];

	for(int j = strlen(str)-1;j >= 0;j--){
		cek[j] = word.Dequeue();
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
	char tes[] = "inianaini";
	if(Palindrome(tes)){
		cout << "Yeah";
	}else{
		cout << "No";
	}
}