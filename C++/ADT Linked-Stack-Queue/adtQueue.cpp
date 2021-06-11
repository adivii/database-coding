#include <bits/stdc++.h>
using namespace std;

#define MAX_LENGTH 100

class Queue{
	public:
		int head;
		int tail;
		int data[MAX_LENGTH];

		Queue(){
			head = 0;
			tail = -1;
		}

		bool isEmpty(){
			return tail == -1;
		}

		bool isFull(){
			return tail == MAX_LENGTH-1;
		}

		void Enqueue(int newData){
			if(!isFull()){
				data[++tail] = newData;
			}
		}

		void Dequeue(){
			if(!isEmpty()){
				int *temp;
				temp = data+tail;
				for(int i = 0;i < tail;i++){
					data[i] = data[i+1];
				}
				tail--;
				delete temp;
			}
		}

		void printQueue(){
			for(int i = head;i <= tail;i++){
				cout << data[i] << " ";
			}
			cout << endl;
		}
};

int main(){
	Queue newQueue;

	newQueue.Enqueue(10);
	newQueue.Enqueue(20);
	newQueue.Enqueue(30);

	newQueue.Dequeue();

	newQueue.printQueue();
}