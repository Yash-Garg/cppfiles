#include <iostream>
#include <conio.h>
using namespace std;

class student {
protected:
	int rno;
	char name[10];
public:
	void getdata()
	{
		cout << "Enter rollno: ";
		cin >> rno;
		cout << "Enter name: ";
		cin >> name;
	}
	void showdata()
	{
		cout << endl << "Roll no of a Student: " << rno;
		cout << "\nName of the student: " << name;
	}
};

class theory_exam :virtual public student
	{
protected:
	int m1;
public:
	void readdata()
	{
		cout << "Enter marks of theory: ";
		cin >> m1;
	}
	void displaydata() { cout << endl << "Marks in theory: " << m1;}
};

class practical_exam : virtual public student
{
protected:
	int p1;
public:
	void readdata() {
		cout << "Enter marks in practical: ";
		cin >> p1;
		}
	void displaydata() { cout << endl << "Marks in practical: "<< p1;}

};

class result:public theory_exam, public practical_exam
{private:
	int total;
public:
	void total_marks() {
		total = m1 + p1;
		cout << endl << "Total marks in both exams: " << total;
	}
};

int main()
{
	result rs;   // Virtual resolves ambiguity
	rs.getdata();
	rs.theory_exam::readdata();
	rs.practical_exam::readdata();
	rs.showdata();
	rs.theory_exam::displaydata();
	rs.practical_exam::displaydata();
	rs.total_marks();
	cout<<endl;
	system("pause");

    return 0;
}

