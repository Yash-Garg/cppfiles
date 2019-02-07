#include <iostream>	// for console input output
#include <fstream>	// for file streams
#include <stdlib.h> // for system commands
#include <string.h>	// for string manipulation functions
#include <conio.h>	// for getch() ( keypress instantaneous input )
using namespace std;

class telephone {	// class declared
	private:
		char telno[11];
		char name[20];
	public:
		telephone();
		void getdata();
		void putdata();
		char* rel_tel_no();
};

// function prototypes
void heading();
void write_file( telephone tel );
void searching();
void show_all();

telephone::telephone() {	// constructor
	for( int i = 0; i < 10; i++ ) {
		telno[i] = '#';
	}
	for( int i = 0; i < 20; i++ ) {
		name[i] = '\0';
	}
}

void telephone::getdata() {		// to get user data
	phinput:
		heading();
		cout << "Please enter your phone number: ";
		cin.getline( telno, 11 );
		
		// checking for valid phone number entry
		int flag = 1;
		for( int i = 0; i < 10; i++ ) {
			if( !isdigit( telno[i] ) ) {
				flag = 0;
				break;
			}
		}
		if( !flag ) {
			cout << "Enter a valid phone number\n";
			system("pause");
			goto phinput;
		}
	nameinput:
		heading();
		cout << "Please enter your name: ";
		cin.getline( name, 20 );
		// checking for valid name entry
		flag = 1;
		for( int i = 0; i < strlen( name ); i++ ) {
			if( !isalpha( name[i] ) ) {
				if( name[i] == ' ' ) {
					flag = 0;
					break;
				}
			}
		}
		if( !flag ) {
			cout << "Enter a valid name\n";
			cout << "Press any key to continue...";
			getch();
			goto nameinput;
		}
	return;
}

void telephone::putdata() {	// to output user data to binary data file
	cout << "Name of user: " << name << endl;
	cout << "Telephone number: " << telno << endl;
	cout << endl;
	return;
}

char*	// to return telephone number
telephone::rel_tel_no() {
	return telno;
}

void heading() {	// display heading
	system( "cls" );
	cout << endl << "\t\tTELEPHONE DIRECTORY" << endl << endl;
	return;
}

void write_file( telephone tel ) {	// to write the data into the binary file
	fstream fout;
	fout.open( "telephone.dat", ios::out | ios::app | ios::binary );
	fout.write( (char*)&tel, sizeof( telephone ) );
	fout.close();
	cout << "File successfully written\n";
	system("pause");
	return;
}

void searching() {	// to search for a telephone number
	fstream fin;
	telephone obj;
	char teltemp[11];
	heading();
	cout << "Enter the phone number you want to search for: ";
	cin.getline( teltemp, 11 );
	fin.open( "telephone.dat", ios::in | ios::binary );
	int flag = 0;
	while( fin.read( (char*)&obj, sizeof( telephone ) ) ) {
		if( !strcmp( obj.rel_tel_no(), teltemp ) ) {
			flag = 1;
			cout << endl << "Record Found\n";
			cout << endl << "The details are:";
			obj.putdata();
			break;
		}
	}
	// checking for failure
	if( !flag ) {
		cout << endl<< "Record not found!\n";
	}
	system("pause");
	return;
}

void // to show all records;
show_all() {
	telephone tel;
	fstream fin;
	
	heading();
	cout << "The saved records are:\n\n";
	fin.open( "telephone.dat", ios::in | ios::binary );
	while( fin.read( (char*)&tel, sizeof( telephone ) ) ) {
		tel.putdata();
	}
	fin.close();
	system("pause");
	return;
}


int main() {
	telephone object;
	char selection;
	do{
		selection ='\0';
		heading();
		cout << "1: Add records\n";
		cout << "2: Search a Telephone Number\n";
		cout << "3: Display Telephone Records\n";
		cout << "4. Exit\n";
		cout << endl << "::";
		selection = getch();
		// operations according to user choice
		switch( selection ) {
			case '1':
				object.getdata();
				write_file( object );
				break;
			case '2':
				searching();
				break;
			case '3':
				show_all();
				break;
			case '4':
				cout << "Thank you for using the Program";
				break;
		}
	} while( selection != '4' );
	return 0;
}
