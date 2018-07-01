#include<iostream>
#include<fstream>
#include<windows.h>
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<ctype.h>
using namespace std;

//...Globally Declared Variables...//
int i;
char response;
ifstream fin;
char pwd[9];
char pass[9];
//................................//

class std_details {
	private :
		float perc[3], gpa[3], tmarks, cgpa, sbmarks[3];
		char name[30], sec, grade;
		int stdclass, stdno;
	public :
		void start();
		void restart();							//Re-runs the program
		void get_details();						//Get the details of student
		void get_marks_gpa_perc();					//Gets the marks for subjects
		void show_out();						//Shows the output to user
		float calc_cgpa(); 						//Calculates the CGPA in each subject
		float calc_grade(); 						//Calculates the Grade in each subject
		void password();						//Function for password
}init;										//Class object declared

//......Class function starts here......//

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
    tmarks = 100 ;								//Assigns the total marks 100
    cgpa = 0;
	for(int i=0 ; i<3 ; i++) {
		Sleep(500);
		cout<<"\n"<<"Enter the marks for subject "<<i+1<<" : ";
		cin>>sbmarks[i];
		perc[i] = ( sbmarks[i] / tmarks ) * 100.0 ;			//Calculates the percentage in each subject	
		gpa[i] = ( perc[i] * 5.0 ) / 100.0;				//Calculates the GPA in each subject
		cgpa += gpa[i] / 3 ;						//Calculates the CGPA of student
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

void std_details :: password () {
	cout<<"Enter The Password To Run The Program : ";
	while(i<8) {
		pwd[i]=getch();
		if (pwd[i]==8 && i>0) {
			cout<<"\b \b";
			--i;
		}
		else if	(pwd[i]==13) {
			goto end;
		}
		else if (pwd[i]!=8 && pwd[i]!=13) {
			cout<<"*";
			++i;
		}
	}
	end:
	if (strcmp(pwd , pass)==0) {						//Compares the password with 'pass' variable
		cout<<endl<<"Access Granted !!";
		Sleep(1000);
		system("cls");
		start();
		cout<<endl;
		Sleep(200);
	}
	else {
	cout<<endl<<"Access Denied !!";
	cout<<endl;
	exit(0);
	}
}

void std_details :: start () {
	get_details();
	get_marks_gpa_perc();
	Sleep(1000);
	calc_grade();
	show_out();
	Sleep(5000);
	system("cls");
	restart();
	Sleep(500);
}

//......Class function ends here......//

int main () {
	fin.open("pass.txt", ios :: in);					//Gets input from the file 'pass.txt'
	fin.get(pass , 9);							//Stores password in a varibale 'pass'
	Sleep(500);
	init.password();
	Sleep(500);
	init.start();
	return 0;
}
