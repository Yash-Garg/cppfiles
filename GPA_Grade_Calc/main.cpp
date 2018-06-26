#include<iostream>
#include<fstream>
#include<windows.h>
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<ctype.h>
using namespace std;
int i;
class std_details {
	float perc[3], gpa[3], tmarks, cgpa, sbmarks[3];
	char name[30], sec, grade;
	int stdclass, stdno;
	public:
		void get_details();				//Get the details of student
		void get_marks_gpa_perc();			//Gets the marks for subjects
		float calc_cgpa(); 				//Calculates the CGPA in each subject
		float calc_grade(); 				//Calculates the Grade in each subject
		void show_out();				//Shows the output to user
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
    tmarks = 100 ;						//Assigns the total marks 100
    cgpa = 0;
	for(int i=0 ; i<3 ; i++) {
		cout<<"\n"<<"Enter the marks for subject "<<i+1<<" : ";
	   	cin>>sbmarks[i];
		perc[i] = ( sbmarks[i] / tmarks ) * 100.0 ;	//Calculates the percentage in each subject
		gpa[i] = ( perc[i] * 5.0 ) / 100.0;		//Calculates the GPA in each subject
	}
}

/* void std_details :: calc_grade () {
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
		grade = 'D'
	}
	else {
		cout<<"\n"<<"You have failed !!";
	}
} */

void std_details :: show_out () {
	system("cls");
	cout<<"\n"<<"Student's Name : ";
	puts(name);
	cout<<"\n"<<"Roll Number : "<<stdno<<endl;
	cout<<"\n"<<"Class : "<<stdclass<<endl;
	cout<<"\n"<<"Section : "<<sec<<endl;	
		for(int i=0 ; i<3 ; i++) {
			cout<<"\n"<<"Marks of subject "<<i+1<<" : "<<sbmarks[i]<<endl;
			cout<<"\n"<<"Percentage in subject "<<i+1<<" : "<<perc[i]<<"%"<<endl;
			cout<<"\n"<<"GPA in subject "<<i+1<<" : "<<gpa[i]<<endl;
		}
}

int main () {
	init.get_details();
	init.get_marks_gpa_perc();
//	init.calc_grade();
	init.show_out();
	return 0;
}
