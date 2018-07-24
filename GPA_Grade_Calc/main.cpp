#include<iostream>
#include<fstream>
#include<windows.h>
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<ctype.h>
#include "lexicon.h"									// Custom header file (included in MinGW64)
using namespace std;

//...Globally Declared Variables...//
int i=0;
char response, pwd[9], pass[9], x[5000];
ifstream fin;
//................................//

class std_details {
	private :
		float perc[3], gpa[3], tmarks, cgpa, sbmarks[3];
		char name[30], sec, grade;
		int stdclass, stdno;
	public :
		void animation();
		void start();
		void restart();								// Re-runs the program
		void get_details();							// Get the details of student
		void get_marks_gpa_perc();						// Gets the marks for subjects
		void show_out();							// Shows the output to user
		float calc_cgpa(); 							// Calculates the CGPA in each subject
		float calc_grade(); 							// Calculates the Grade in each subject
		void password(char* password_array, char hide_char, int max_length);	// Function for password (input/checking)
}init;											// Class object declared

//......Class function starts here......//

void std_details :: get_details () {
	Sleep(500);
	cout<<"\nEnter the roll number : ";
	cin>>stdno;
	cin.ignore();
	Sleep(500);
	cout<<"\nEnter the student's name : ";
	gets(name);
	Sleep(500);
	cout<<"\nEnter the class : ";
	cin>>stdclass;
	Sleep(500);
	cout<<"\nEnter the section : ";
	cin>>sec;
}

void std_details :: animation () {
	strcpy(x, ascii_heading( "GRADE Calculator" ));
	rand_animation(x, 't', 500, 1);
	cout<<"\nPress any key to continue....";
	getch();
	system("cls");
}

void std_details :: get_marks_gpa_perc () {
    tmarks = 100 ;									// Assigns the total marks 100
    cgpa = 0;
	for(int i=0 ; i<3 ; i++) {
		Sleep(500);
		cout<<"\nEnter the marks for subject "<<i+1<<" : ";
		cin>>sbmarks[i];
		perc[i] = ( sbmarks[i] / tmarks ) * 100.0 ;				// Calculates the percentage in each subject	
		gpa[i] = ( perc[i] * 5.0 ) / 100.0;					// Calculates the GPA in each subject
		cgpa += gpa[i] / 3 ;							// Calculates the CGPA of student
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
		grade = 'E';
	}
}

void std_details :: show_out () {
	system("cls");
	Sleep(500);
	cout<<"\nStudent's Name : ";
	puts(name);
	Sleep(500);
	cout<<"\nRoll Number : "<<stdno<<endl;
	Sleep(500);
	cout<<"\nClass : "<<stdclass<<endl;
	Sleep(500);
	cout<<"\nSection : "<<sec<<endl;
	cout<<"\n#################################"<<endl;	
		for(int i=0 ; i<3 ; i++) {
			Sleep(500);
			cout<<"\nMarks of subject "<<i+1<<" : "<<sbmarks[i]<<endl;
			Sleep(500);
			cout<<"\nPercentage in subject "<<i+1<<" : "<<perc[i]<<"%"<<endl;
			Sleep(500);
			cout<<"\nGPA in subject "<<i+1<<" : "<<gpa[i]<<endl;
			Sleep(500);
			cout<<"\n#################################"<<endl;
		}
	cout<<"\nCGPA of "<<name<<" is : "<<cgpa<<endl;
	Sleep(500);
	cout<<"\nGrade of "<<name<<" is : "<<grade;
	cout<<endl;
	cout<<"\n#################################";
}

void std_details :: restart () {
	Sleep(500);
	cout<<endl;
	cout<<"\nDo you want to re-run the program (Y/N) ?? : ";
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
		cout<<"\nAW SNAP !! WRONG INPUT !!";
		cout<<endl;
		exit(0);
	}
}

/* void std_details :: password (char* password_array, char hide_char, int max_length) {
	Sleep(500);
	cout<<"\nEnter the password to run the program : ";
	if(max_length < 100) {		
		cout <<"\nPress any key to terminate...\n";
		getch();
		exit( 1 );
	}
	
	for(int i=0; i <= max_length; i++) {
		password_array[i] = '\0';
	}
	
	char pwd[max_length + 2];
	
	for(int i=0; i<(max_length+2); i++) {
		pwd[i]='\0';
	}

	while(1) {
		pwd[i]=getch();
		
		if(i < max_length) {
			
			switch(pwd[i]) {
				
				case 13:						// 13: Return Key
					pwd[i] = '\0';
					cout << endl;
					goto ESC;
				case 8:							// 8: Backspace
					if(i <= 0) {					// Only input password can get erased
						pwd[i] = '\0';
					}
					else {
						cout << "\b \b";
						pwd[i] = '\0';
						i = i - 1;
					}
					break;
				case 27:						// 27: Esc Key
					pwd[i] = '\0';					// Clear this char
					break;
				default:
					if(hide_char == 0) {  				// No special char used if 0
						cout << pwd[i];
						i++;
					}
					else {
						cout << hide_char;
						i++;
					}
			}
		}
		else {
			switch(pwd[i]) {
				case 13:
					pwd[i] = '\0';
					cout << endl;
					goto ESC;
				case 8:
					cout << "\b \b";
					pwd[i] = '\0';
					i = i - 1;
					break;
				default:
					break;						// No data entry after maximum limit
			}
		}
	}
	
	ESC:
	int counter = 0;
	for(int i=0; i < max_length; i++) {
		if( pwd[i] == pass[i] ) {
			counter++;
		}
	}
		if (counter == max_length) {
		Sleep(500);
		cout<<"\nAccess Granted !!";
		cout<<endl;
		Sleep(500);
		cout<<"\nPress any key to continue..";
		getch();
	}
	
	else {
		Sleep(500);
		cout<<"\nAccess Denied !!";
		cout<<endl;
		Sleep(500);
		exit(1);
	}
	
	return;
} */

void std_details :: start () {								// Contains all the fuctions sequence wise
	animation();
	get_details();
	get_marks_gpa_perc();
	Sleep(1000);
	calc_grade();
	show_out();
	Sleep(1000);
	cout<<endl;
	cout<<"\nPress any key to continue....";
	getch();
	system("cls");
	restart();
	Sleep(500);
}

//......Class function ends here......//

int main () {
	fin.open("pass.txt", ios :: in);						// Gets input from the file 'pass.txt'
	fin.getline(pass , 9);									// Stores password in a varibale 'pass'
	cout<<"Pwd : "<<pass<<endl;
	Sleep(500);
//	init.password(pwd, '*', 100);
	cout<<"\nEnter the password to run the program : ";
	pass_entry( pwd, '*', 9 );
	if(strcmp(pwd , pass) == 0 ) {
		Sleep(500);
		cout<<"\nAccess Granted !!";
		cout<<endl;
		Sleep(500);
		cout<<"\nPress any key to continue..";
		getch();
	}
	
	else {
		Sleep(500);
		cout<<"\nAccess Denied !!";
		cout<<endl<<"\nPass You Entered : "<<pwd;
		cout<<endl;
		Sleep(500);
		exit(1);
	}
	
	system("cls");
	Sleep(500);
	init.start();
	return 0;
}
