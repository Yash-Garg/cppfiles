#include<iostream>
#include<fstream>
#include<windows.h>
#include "lexicon.h"									// Custom header file (included in /Dev-Cpp/MinGW64/include)
using namespace std;

//...Globally Declared Variables...//

int i=0;
char response, x[5000], pwd[9], pass[9];
ifstream fin;

//................................//

class std_details {
	private :
		float perc[3], gpa[3], tmarks, cgpa, sbmarks[3];
		char name[30], sec, grade;
		int stdclass, stdno;
	public :
		float calc_cgpa(); 							// Calculates the CGPA in each subject
		float calc_grade(); 							// Calculates the Grade in each subject
		void restart();								// Re-runs the program
		void get_details();							// Get the details of student
		void get_marks_gpa_perc();						// Gets the marks for subjects
		void show_out();							// Shows the output to user
		void password( char* password_array, char hide_char, int max_length );	// Function for password (input/checking)
		void animation();
		void start();
}obj;											// Class object declared

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
	PARAGRAPH par;
	par.ParaData( AsciiHeading( "Grade Calculator" ) );				// Typewriter function in "lexicon.h"
	par.CenterAlign();
	ANIMATION ani;
	ani.SetMessage( par.ReturnAsString() );
	ani.TypeWriter();
	cout<<endl;
	system("pause");
	system("cls");
}

void std_details :: get_marks_gpa_perc () {
    tmarks = 100 ;									// Assigns the total marks 100
    cgpa = 0;
	for(int i=0 ; i<3 ; i++) {
		Sleep(500);
		cout<<"\nEnter the marks for subject "<<i+1<<" : ";
		cin>>sbmarks[i];
		perc[i] = ( sbmarks[i] / tmarks ) * 100.0 				// Calculates the percentage in each subject	
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
		system("color 03");
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

void std_details :: start () {								// Contains all the functions sequence wise
	animation();
	system("color 07");								// Changes text color to white
	get_details();
	get_marks_gpa_perc();
	Sleep(1000);
	calc_grade();
	show_out();
	Sleep(1000);
	cout<<endl;
	system("pause");
	system("cls");
	restart();
	Sleep(500);
}

//......Class function ends here......//

int main () {
	fin.open( "pass.txt", ios :: in );						// Gets input from the file 'pass.txt'
	fin.read( (char*)pwd, sizeof(pwd) );						// Stores password in a varibale 'pass'
	system("color 03");								// Changes text color to Aqua
	cout<<"\nEnter the password to run the program : ";
	strcpy( pass, HidePassEntry( '*', 9 ) );					// Password function in "lexicon.h"
	if(strcmp(pwd , pass) == 0 ) {
		Sleep(500);
		cout<<"\nAccess Granted !!";
		cout<<endl;
		Sleep(500);
		cout<<endl;
		system( "pause" );
		}
	
	else {
		Sleep(500);
		cout<<"\nAccess Denied !!";
		Sleep(500);
		exit(1);
		}
	
	system("cls");
	Sleep(500);
	obj.start();
	return 0;
}
