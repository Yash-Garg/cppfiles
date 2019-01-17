#include <iostream>
#include <process.h>

using namespace std;

struct NODE {
	int data;
	NODE *NEXT;

};

class stack {
	private:
		NODE *TOP;
	public:
		stack() { TOP = NULL; };
		void push();
		void pop();
		void display();
		~stack();
};

void stack::push() {
	NODE *TEMP;
	TEMP = new NODE;
	if (TEMP == NULL) { cout << "Underflow";exit(0); }
	cout << "Enter data"; cin >> TEMP->data;
	TEMP->NEXT = TOP;
	TOP = TEMP;
}

void stack::pop() {
	if (TOP!= NULL) {
		NODE *TEMP = TOP;
		TOP = TOP->NEXT;
		cout << TEMP->data << " Element Deleted\n";
		delete TEMP;
	}
	else cout << "The Stack is Empty";
}

void stack::display() {
	NODE *TEMP = TOP;
	cout << "The Stack : ";
	while (TEMP!= NULL) {
		cout << TEMP->data << " ";
		TEMP = TEMP->NEXT;
	}
}

stack::~stack() {
	while (TOP != NULL) {
		NODE *TEMP = TOP;
		TOP=TOP->NEXT;
		delete TEMP;}
}

int main() {
	system("cls");
	stack st;
	int ch;

	do {
		cout << "\n\nMain Menu :";
		cout << "\n1.PUSH ELEMENT";
		cout << "\n2.POP ELEMENT";
		cout << "\n3.DISPLAY STACK";
		cout << "\nENTER YOUT CHOICE: ";
		cin >> ch;
		switch (ch) {
			case 1: st.push();break;
			case 2: st.pop();break;
			case 3: st.display();break;
			default: exit(0);break;
		}
	} while (ch<4);
	system("pause");
    return 0;
}
