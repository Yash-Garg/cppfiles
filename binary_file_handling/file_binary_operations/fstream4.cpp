#include <iostream>
#include <conio.h>
#include <fstream>
#include <string.h>
using namespace std;

class student {
private:
	int rollno;
	char name[15];
	float total;
public:
	void getdata() {
		cout << "Enter roll no: ";
		cin >> rollno;
		cout << "Enter name: ";
		cin >> name;
		cout << "Enter Total marks: ";
		cin >> total;
		}
	void display()
	{
		cout << "\nRoll Number: " << rollno;
		cout << "\tName: " << name;
		cout << "\tTotal Marks: " << total;
	}
	char *retname() { return(name); }
	int retrollno() { return rollno;}
};

char rep;
student s, s1;
fstream fs, temp;

//FUNTION TO CREATE binary file "Stud.dat"
void create(){
	fs.open("stud.dat", ios::out | ios::binary);
	do {
		s.getdata();
		fs.write((char*)&s, sizeof(s));
		cout << "\nDo you want to add more records y/n? \n";
		cin >> rep;
	} while (rep == 'y' || rep == 'Y');
	fs.close();
}

//Reading and displaying records from file
void dispfile() {
	fs.open("stud.dat", ios::in);
	while (!fs.eof()){
	fs.read((char*)&s, sizeof(s));
	s.display();}	
	fs.close();
}

//Adding more records
void append()
{
	fs.open("stud.dat", ios::app);
	do
	{
		s.getdata();
		fs.write((char*)&s, sizeof(s));
		cout << "DO you want to add enter another records (y/n)";
		cin >> rep;
	} while (rep == 'y');
	fs.close();
}

void search() {
	int choice;
	fs.open("stud.dat", ios::in);
	cout << "Search on the basis of:\n 1.Roll No. 2.Name \n";
	cout << "\n Enter Choice \n";
	cin >> choice;
	if (choice == 1)    //Searching on basis of Roll no
	{
		int mroll;
		cout << "Enter roll number to be searched:\n";
		cin >> mroll;
		while (fs.read((char*)&s, sizeof(s))) {
			if (s.retrollno() == mroll) {
				s.display();break;
			}
		}
	}
	if (choice == 2) //searching on basis of name
	{
		char mname[15], rname[15];
		cout << "Enter name to search\n";
		cin >> mname;
		while (fs.read((char*)&s, sizeof(s))) {
			strcpy(rname, s.retname());
			if (strcmp(rname, mname) == 0)
			{
				s.display();break;
			}
		}
	}
}

void count_rec(){
	int num = 0;
	fs.open("stud.dat", ios::in);
	while(fs.read((char*)&s,sizeof(s)))
	{
		num++;
	}
	cout << "Records in the file are: " << num;
}

int main()
{
	int ch;
	char ch1;
	do
	{
		cout << "\t\tFile Handling Functions MENU: \n";
		cout << "1.Create a file \n";
		cout << "2.Read all the records\n";
		cout << "3.Append into the file \n";
		cout << "4. Search and display a records\n";
		cout << "5.Count no of Records\n";
		cin >> ch;
		switch (ch)
		{
		case 1:create();break;
		case 2:dispfile();break;
		case 3:append();break;
		case 4:search();break;
		case 5:count_rec();break;
		}
		cout << "\nWant to continue (y/n)--?";
		cin >> ch1;
		
	} while (ch1 == 'y' || ch1 == 'Y');
    return 0;
}

