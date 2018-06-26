#include<iostream>
#include<fstream>
#include<windows.h>
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
using namespace std;
int i;
class std_details {
	float perc[2], gpa[2], tmarks;
	char name[30], sec;
	int cgpa, stdclass, stdno, sbmarks[2];
	public:
		void get_details();				//Get the details of student
		void get_marks();				//Gets the marks for subjects
		float calc_perc(); 				//Calculates the percentage in each subject
		float calc_gpa(); 				//Calculates the GPA in each subject
		float calc_cgpa(); 				//Calculates the CGPA in each subject
		float calc_grade(); 			//Calculates the Grade in each subject
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

void std_details :: get_marks () {
    tmarks = 100 ;					//Assigns the total marks 100
	cgpa = 0;
	for(int i=0 ; i<=2 ; i++) {
		cout<<"\n"<<"Enter the marks for subject "<<i+1<<" : ";
	    cin>>sbmarks[i];
		perc[i] = sbmarks[i]*100/tmarks;
		gpa[i] = perc[i] * 5 / 100;
	}
}

int main () {
	init.get_details();
	init.get_marks();
	return 0;
}
