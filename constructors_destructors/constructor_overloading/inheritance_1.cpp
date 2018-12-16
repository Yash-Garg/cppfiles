#include <iostream>
#include <conio.h>
using namespace std;

class student {
	int rollno;
	char grade;
	char result;

public:
	student() {           //DEFAULT CONSTRUCTOR
		rollno = 1;
		grade = 'A';
		cout << "Default Constucter Called" << endl;
		display();
	}
	student(char g) {
		rollno = 2;
		grade = g;
		cout << "Parametrized contructor Called" << endl;
		display();
	}
	student(char g, int roll) {
		rollno = roll;
		grade = g;
		cout << "Paramerterized contructor 2 invoked" << endl;
		display();
	}
	void display() {
		cout << "Roll No:" << rollno;
		cout << "\nGrade:" << grade << endl;
	}
};//End of class defination


int main()
{
	system("cls");
	student s1;
	student s2('C');
	student s3('B', 10);
	system("pause");

    return 0;
}

