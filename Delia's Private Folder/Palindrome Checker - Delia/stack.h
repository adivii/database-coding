#include <bits/stdc++.h>
using namespace std;

class Node{
	public:
		char data;
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

		void addFront(char newData){
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

		char removeFront(){
			Node* temp;
			char data;
			if(!isEmpty()){
				temp = head;

				head = head->next;
				data = temp->data;
				delete temp;
			}
			return data;
		}

		char removeBack(){
			Node* temp;
			Node* bantu;
			char data;
			if(!isEmpty()){
				temp = head;

				while(temp->next->next != NULL){
					temp = temp->next;
				}

				bantu = temp->next;
				temp->next = NULL;
				data = bantu->data;

				delete bantu;
			}
			return data;
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

class Stack{
public:
	LinkedList top;

	void push(int newData){
		this->top.addBack(newData);
	}

	char pop(){
		return top.removeBack();
	}

	void print(){
		top.printNode();
	}
};

