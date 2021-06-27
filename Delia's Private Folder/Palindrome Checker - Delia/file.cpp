#include "stack.h"

int main(){
	Stack newStack;

	newStack.push('a');
	newStack.push('b');
	newStack.print();
	cout << newStack.pop() << endl;
	newStack.print();
}