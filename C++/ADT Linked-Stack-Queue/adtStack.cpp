#include <bits/stdc++.h>
using namespace std;

#define MAX_LENGTH 100

class Stack{
	public:
		int top;
		int data[MAX_LENGTH];

		Stack(){
			top = -1;
		}

		bool isEmpty(){
			return top == -1;
		}

		bool isFull(){
			return top == MAX_LENGTH-1;
		}

		void push(int newData){
			if(!isFull()){
				data[++top] = newData;
			}
		}

		void pop(){
			if(!isEmpty()){
				int *temp;
				temp = data+top;
				
				top--;
				delete temp;
			}
		}

		void printStack(){
			for(int i = top;i >= 0;i--){
				cout << data[i] << endl;
			}
		}
};

int main(){
	Stack newStack;

	newStack.push(10);
	newStack.push(20);
	newStack.push(30);

	newStack.pop();

	newStack.printStack();
}