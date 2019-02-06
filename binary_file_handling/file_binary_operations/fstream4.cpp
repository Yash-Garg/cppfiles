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
	void display() {
		cout << "\nRoll Number: " << rollno;
		cout << "\nName: " << name;
		cout << "\nTotal Marks: " << total;
		cout<<endl;
	}
	char *retname() {
		return(name);
	}
	int retrollno() {
		return rollno;
	}
};

char rep;
student s, s1;
fstream fs, temp;

//Function to create binary file "Stud.dat"
void create() {
	fs.open("stud.dat", ios::out | ios::binary);
	do {
		s.getdata();
		fs.write((char*)&s, sizeof(s));
		cout << "\nDo you want to add more records (y/n): ";
		cin >> rep;
	} while (rep == 'y' || rep == 'Y');
	fs.close();
}

//Reading and displaying records from file
void dispfile() {
	fs.open("stud.dat", ios::in);
	while (!fs.eof()) {
		fs.read((char*)&s, sizeof(s));
		s.display();
	}
	fs.close();
}

void search() {
	int choice;
	fs.open("stud.dat", ios::in);
	cout << "Search on the basis of:\n 1.Roll No. 2.Name \n";
	cout << "\n Enter Choice \n";
	cin >> choice;
	if (choice == 1) {    //Searching on basis of Roll no
		int mroll;
		cout << "Enter roll number to be searched:\n";
		cin >> mroll;
		while (fs.read((char*)&s, sizeof(s))) {
			if (s.retrollno() == mroll) {
				s.display();
				break;
			}
		}
	}
	if (choice == 2) { //searching on basis of name
		char mname[15], rname[15];
		cout << "Enter name to search\n";
		cin >> mname;
		while (fs.read((char*)&s, sizeof(s))) {
			strcpy(rname, s.retname());
			if (strcmp(rname, mname) == 0) {
				s.display();
				break;
			}
		}
	}
}

int main() {
	int ch;
	char ch1;
	do {
		cout << "\t\tFile Handling Functions Menu: \n" << endl;
		cout << "1. Create a file \n";
		cout << "2. Read all the records\n";
		cout << "3. Search and display a records\n";
		cout << endl << "Enter operation (1..3): ";
		cin >> ch;
		system("cls");
		switch (ch) {
		case 1:create();break;
		case 2:dispfile();break;
		case 3:search();break;
		}
		cout << "\nWant to continue (y/n): ";
		cin >> ch1;
		system("cls");
	} while (ch1 == 'y' || ch1 == 'Y');
    return 0;
}
