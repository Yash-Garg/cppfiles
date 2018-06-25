#include<iostream>
#include<fstream>
#include<windows.h>
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
using namespace std;
int i;
class std_details {
	float perc, gpa, cgpa;
	char name[30], sec;
	int x, y, stdclass, stdno, sbmarks[2];
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
	cout<<"\n"<<"Enter The Roll Number : ";
	cin>>stdno;
	cin.ignore();
	Sleep(500);
	cout<<"\n"<<"Enter The Student's Name : ";
	gets(name);
	Sleep(500);
	cout<<"\n"<<"Enter The Class : ";
	cin>>stdclass;
	Sleep(500);
	cout<<"\n"<<"Enter The Section : ";
	cin>>sec;
}

void std_details :: get_marks () {
	for (i=0;i<=2;i++) {
		Sleep(500);
		cout<<"\n"<<"Enter The Marks Obtained In Subject (out of 100) : ";
		cin>>sbmarks[i];
		calc_perc();
	}
}

float std_details :: calc_perc () {
	x = (sbmarks[i]*100)/100;
}

int main () {
	init.get_details();
	init.get_marks();
	return 0;
}
