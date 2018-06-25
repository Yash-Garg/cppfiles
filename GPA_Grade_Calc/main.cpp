#include<iostream>
#include<fstream>
#include<windows.h>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

class std_details {
	string name;
	string ID;
	char sec;
	int std_class;
	public:
		std_details();
		void get_details(int stdno);
};

class std_marks : public std_details{ 	//Deriving the base class publically
	float perc[nsub], gpa[nsub], cgpa;
	public:
		std_marks();
		float calc_perc(int i); 		//calculates the percentage in each subject
		float calc_gpa(int j); 			//calculates the GPA in each subject
		float calc_cgpa(); 				//calculates the CGPA in each subject		
};
