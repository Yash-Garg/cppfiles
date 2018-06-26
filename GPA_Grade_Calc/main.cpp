#include<iostream>
#include<fstream>
#include<windows.h>
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<ctype.h>
using namespace std;
int i;
char response;
class std_details {
	float perc[3], gpa[3], tmarks, cgpa, sbmarks[3];
	char name[30], sec, grade;
	int stdclass, stdno;
	public:
		void start();
		void restart();
		void get_details();							//Get the details of student
		void get_marks_gpa_perc();						//Gets the marks for subjects
		void show_out();							//Shows the output to user
		float calc_cgpa(); 							//Calculates the CGPA in each subject
		float calc_grade(); 							//Calculates the Grade in each subject
}init;

void std_details :: get_details () {
	Sleep(500);
	cout<<"\n"<<"Enter the roll number : ";
	cin>>stdno;
	cin.ignore();
	Sleep(500);
	cout<<"\n"<<"Enter the student's name : ";
	gets(name);
	Sleep(500);
	cout<<"\n"<<"Enter the class : ";
	cin>>stdclass;
	Sleep(500);
	cout<<"\n"<<"Enter the section : ";
	cin>>sec;
}

void std_details :: get_marks_gpa_perc () {
    tmarks = 100 ;									//Assigns the total marks 100
    cgpa = 0;
	for(int i=0 ; i<3 ; i++) {
		Sleep(500);
		cout<<"\n"<<"Enter the marks for subject "<<i+1<<" : ";
		cin>>sbmarks[i];
		perc[i] = ( sbmarks[i] / tmarks ) * 100.0 ;				//Calculates the percentage in each subject	
		gpa[i] = ( perc[i] * 5.0 ) / 100.0;					//Calculates the GPA in each subject
		cgpa += gpa[i] / 3 ;							//Calculates the CGPA of student
	}
}

float std_details :: calc_grade () {
	if (cgpa>=4) {
		grade = 'A';
	}
	else if (cgpa>=3) {
		grade = 'B';
	}
	else if (cgpa>=2) {
		grade = 'C';
	}
	else if (cgpa>=1) {
		grade = 'D';
	}
	else {
		cout<<"\n"<<"You have failed !!";
	}
}

void std_details :: show_out () {
	system("cls");
	Sleep(500);
	cout<<"\n"<<"Student's Name : ";
	puts(name);
	Sleep(500);
	cout<<"\n"<<"Roll Number : "<<stdno<<endl;
	Sleep(500);
	cout<<"\n"<<"Class : "<<stdclass<<endl;
	Sleep(500);
	cout<<"\n"<<"Section : "<<sec<<endl;	
		for(int i=0 ; i<3 ; i++) {
			Sleep(500);
			cout<<"\n"<<"Marks of subject "<<i+1<<" : "<<sbmarks[i]<<endl;
			Sleep(500);
			cout<<"\n"<<"Percentage in subject "<<i+1<<" : "<<perc[i]<<"%"<<endl;
			Sleep(500);
			cout<<"\n"<<"GPA in subject "<<i+1<<" : "<<gpa[i]<<endl;
		}
	Sleep(500);
	cout<<"\n"<<"CGPA of "<<name<<" is : "<<cgpa<<endl;
	Sleep(500);
	cout<<"\n"<<"Grade of "<<name<<" is : "<<grade;
}

void std_details :: restart () {
	Sleep(500);
	cout<<endl;
	cout<<"\n"<<"Do you want to re-run the program (Y/N) ?? : ";
	cin>>response;
	if (response == 'Y' || response == 'y') {
		system("cls");
		start();
		cout<<endl<<"THANKS FOR USING THE PROGRAM !!";
		cout<<endl;
	}
	else if (response == 'N' || response == 'n') {
		cout<<endl<<"THANKS FOR USING THE PROGRAM !!";
		cout<<endl;
		exit(0);
	}
	else {
		cout<<"\n"<<"AW SNAP !! WRONG INPUT !!";
		cout<<endl;
		exit(0);
	}
}

void std_details :: start () {
	get_details();
	get_marks_gpa_perc();
	calc_grade();
	show_out();	
	restart();
	Sleep(500);
}

int main () {
	init.start();
	return 0;
}
