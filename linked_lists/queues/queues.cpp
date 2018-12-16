#include <iostream>
#include <conio.h>

using namespace std;

struct NODE {
	int data;
	NODE *next;
};

class queue {
	NODE *rear, *front;
public:
	queue() {
		rear = NULL;
		front = NULL;}
	void qinsert();
	void qdelete();
	void qdisplay();
	~queue();

};

void queue::qinsert() {
	NODE *temp;
	temp = new NODE;
	cout << "Enter DATA: ";
	cin >> temp->data;
	temp->next = NULL;
	if (rear == NULL)
	{
		rear = temp;
		front = temp;
	}
	else
	{
		rear->next = temp;
		rear = temp;
	}
}

void queue::qdelete()
{
	if (front != NULL)
	{
		NODE *temp = front;
		cout << front->data << endl << "Element deleted \n";
		front = front->next;
		delete temp;
		if (front == NULL)rear = NULL;
	}
	else cout << "QUEUE is EMPTY";
}

void queue::qdisplay()
{
	NODE *temp = front;
	while(temp!=NULL){
		cout << temp->data << endl;
		temp = temp->next;
	}
}

queue::~queue() {
	while (front != NULL) {
		NODE *temp = front;
		front = front->next;
		delete temp;
	}
}

int main()
{
	system("cls");
	queue obj;char ch;

	do
	{
		cout << "\nMain Menu :";
		cout << "\nA.INSERT\tB.DELETE\tC.DISPLAY\tD.EXIT\n ";
		cout << endl << "Enter your choice: ";
		cin >> ch;
		switch (ch)
		{
		case'a':
		case 'A':obj.qinsert();break;
		case'b':
		case 'B':obj.qdelete();break;
		case 'c':
		case 'C': obj.qdisplay();break;
		case 'd':
		case 'D': exit(0);
		}
	} while (true);
	system("pause");

    return 0;
}

