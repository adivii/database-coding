#include <bits/stdc++.h>
using namespace std;

class Node{
	public:
		int data;
		Node* next;
};

class LinkedList{
	public:
		Node* head;

		LinkedList(){
			this->head = new Node();
			this->head = NULL;
		}

		bool isEmpty(){
			return this->head == NULL;
		}

		void addFront(int newData){
			Node* temp;

			temp = new Node();

			temp->data = newData;
			temp->next = NULL;

			if(isEmpty()){
				head = temp;
			}else{
				temp->next = head;
				head = temp;
			}
		}

		void addBack(int newData){
			Node* temp;

			temp = new Node();

			temp->data = newData;
			temp->next = NULL;

			if(isEmpty()){
				head = temp;
			}else{
				Node* counter;
				counter = head;
				while(counter->next != NULL){
					counter = counter->next;
				}
				counter->next = temp;
			}
		}

		void removeFront(){
			Node* temp;
			if(!isEmpty()){
				temp = head;

				head = head->next;
				delete temp;
			}
		}

		void removeBack(){
			Node* temp;
			Node* bantu;
			if(!isEmpty()){
				temp = head;

				while(temp->next->next != NULL){
					temp = temp->next;
				}

				bantu = temp->next;
				temp->next = NULL;

				delete bantu;
			}
		}

		void printNode(){
			Node* temp;
			temp = head;

			while(temp != NULL){
				cout << temp->data << endl;
				temp = temp->next;
			}
		}
};

int main(){
	LinkedList newList;

	newList.addFront(13);
	newList.addFront(12);
	newList.addBack(14);

	newList.removeBack();
	newList.removeFront();
	newList.addFront(11);
	newList.printNode();
}