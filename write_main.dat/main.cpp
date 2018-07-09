#include<iostream>
#include<fstream>
#include<windows.h>
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<ctype.h>
using namespace std;

ofstream fout;

class stud {
	private:
		char name[25];
		char Class[4];
		int rollnum;
		float marks;
		char grade;
	public:
		void getdata();
		void show();
		void calcgrade();
		int getrno();
}init;

void stud :: getdata () {
	Sleep(500);
	cout<<"\nEnter the roll number : ";
	cin>>rollnum;
	cin.ignore();
	Sleep(500);
	cout<<"\nEnter the student's name : ";
	gets(name);
	Sleep(500);
	cout<<"\nEnter the class : ";
	cin>>Class;
	Sleep(500);
	cout<<"\nEnter marks : ";
	cin>>marks;
	Sleep(500);
}

void stud :: calcgrade () {
	if (marks>=75) {
		grade = 'A';
	}
	else if (marks>=60) {
		grade = 'B';
	}
	else if (marks>=50) {
		grade = 'C';
	}
	else if (marks>=40) {
		grade = 'D';
	}
	else {
		grade = 'E';
	}
}

int stud :: getrno () {
	return rollnum;
}
void stud :: show () {
	system("cls");
	Sleep(500);
	cout<<"\nStudent's Name : ";
	puts(name);
	Sleep(500);
	cout<<"\nRoll Number : "<<rollnum<<endl;
	Sleep(500);
	cout<<"\nClass : "<<Class<<endl;
	Sleep(500);
	cout<<"\nMarks : "<<marks<<endl;
	Sleep(500);
	cout<<"\nGrade : "<<grade<<endl;
	Sleep(500);
}

int main () {
	char res = 'y';
	while (res == 'y') {
		ofstream fout("main.dat",ios::app | ios::binary);
		init.getdata();
		init.calcgrade();
		fout.write((char*)&init,sizeof(init));
		cout<<"\nRecord added to file !"<<endl;
		Sleep(500);
		cout<<"\nWant to enter more records ?";
		cin>>res;
	}
	fout.close();
	return 0;
}
