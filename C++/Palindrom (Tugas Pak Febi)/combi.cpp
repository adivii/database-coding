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
			this->tail++;
			this->data[this->tail] = temp;
		}
	}

	char Dequeue(){
		if(!isEmpty()){
			char popped = data[head];
			char *temp;
			for(int i = 0;i < tail;i++){
				data[i] = data[i+1];
			}
			delete (data+tail);
			return popped;
		}
	}
};

bool Palindrome(string str){
	bool status = true;
	Queue q;
	Stack s;	
	for (int i = 0; i < str.size(); i++) {
	    q.Enqueue(str[i]);
	    s.push(str[i]);
 	}

 	for (int j = 0; j < str.size()/2; j++){
 		if (q.Dequeue() != s.pop()){
 			status = false;
 			break;
		}	
	}
	return status;
}

int main(){
	string tes = "kasur ini rusak";
	if(Palindrome(tes)){
		cout << "Yeah";
	}else{
		cout << "No";
	}
}