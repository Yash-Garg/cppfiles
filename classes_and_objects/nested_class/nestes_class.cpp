#include <iostream>
#include <conio.h>

using namespace std;

class result {
	int m1, m2, m3;
	int total;
	float average;
public:
	void getdata() 
	{
		cout << "Enter marks of Three Subjects:\n";
		cin >> m1>> m2>> m3;
	}
	void show()
	{
		total = m1 + m2 + m3;
		average = total / 3;
		cout << endl << "Markks of SUbect 1: " << m1;
		cout << endl << "Markks of SUbect 2: " << m2;
		cout << endl << "Markks of SUbect 3: " << m3;
		cout << endl << "Average makrs: " << average;
	}
};
class student {
	char name[20];
	int rno;
	int class_;
public:
	void readdata();
	void display();
	result res;
};
void student::readdata() {
	cout << endl << "Enter roll no: ";
	cin >> rno;
	cout << endl << "Enter name: ";
	cin >> name;
	cout << endl << "Enter class: ";
	cin >> class_;
	res.getdata();
}
void student::display() {
	cout << endl << "Roll no of the Student: " << rno;
	cout << endl << "Name of the Student: " << name;
	cout << endl << "Class of the Student: " << class_;
	res.show();
}

int main()
{
	student s1;
	s1.readdata();
	s1.display();
	cout<<endl;
	system("pause");
    return 0;
}

