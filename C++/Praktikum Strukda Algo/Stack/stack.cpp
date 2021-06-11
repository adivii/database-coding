#include <bits/stdc++.h>
using namespace std;

#define MAX_VALUE 100

class Stack{
	public:
		int data[MAX_VALUE];
		int top;

		Stack(){
			top = -1;
		}

		bool isFull(){
			return top+1 == MAX_VALUE;
		}

		bool isEmpty(){
			return top == -1;
		}

		void push(int newData){
			if(isFull()){
				cout << "Stack Penuh!" << endl;
			}else{
				top++;
				data[top] = newData;

				cout << "Data " << newData << " berhasil ditambahkan!" << endl;
			}
		}

		void pop(){
			if(isEmpty()){
				cout << "Stack Kosong!" << endl;
			}else{
				int *bantu = (data+top);
				int deletedData = data[top--]; // Mengambil nilai pada index top, dan mengurangi index top sebanyak 1
				cout << "Data " << deletedData << " berhasil dihapus!" << endl;
				delete bantu;
			}
		}

		void clear(){
			while(!isEmpty()){
				pop();
			}
		}

		void print(){
			if(isEmpty()){
				cout << "Stack Kosong!" << endl;
			}else{
				for(int i = top;i >= 0;i--){
					cout << data[i] << endl;
				}
			}
		}
};

int main(){
	Stack newStack;

	newStack.push(20);
	newStack.push(30);
	newStack.push(50);

	newStack.clear();
	newStack.print();

	cout << newStack.data[0];

	return 0;
}