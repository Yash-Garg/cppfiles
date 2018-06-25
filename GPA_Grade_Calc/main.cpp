#include<iostream>
#include<fstream>
#include<windows.h>
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
using namespace std;

class std_details {
	float perc, gpa, cgpa;
	char name[30], sec, sbname[30];
	int stdclass, stdno, sbmarks;
	public:
		void get_details();				//Get the details of student
		void get_marks();				//Gets the marks for subjects
		float calc_perc(int i); 		//Calculates the percentage in each subject
		float calc_gpa(int j); 			//Calculates the GPA in each subject
		float calc_cgpa(); 				//Calculates the CGPA in each subject
}init;

void std_details :: get_details () {
	cout<<"\n"<<"Enter The Roll Number : ";
	cin>>stdno;
	cin.ignore();
	cout<<"\n"<<"Enter The Student's Name : ";
	gets(name);
	cout<<"\n"<<"Enter The Class : ";
	cin>>stdclass;
	cout<<"\n"<<"Enter The Section : ";
	cin>>sec;
}

void std_details :: get_marks () {
	for (int i=0;i<=2;i++) {
		cout<<"\n"<<"Enter The Name Of Subject : ";
		cin.ignore();
		gets(sbname);
		cout<<"\n"<<"Enter The Marks Obtained In Subject : ";
		cin>>sbmarks;
	}
}

int main () {
	init.get_details();
	init.get_marks();
	return 0;
}
