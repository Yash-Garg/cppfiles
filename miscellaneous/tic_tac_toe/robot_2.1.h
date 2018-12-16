#ifndef ROBOT_H	// include guard (to ensure that robot.h is not declared twice
#define ROBOT_H

#include <iostream>	// for console I/O streams
#include <fstream>	// for file I/O streams
#include <windows.h>	// for windows features of file list and console manipulations
#include <string.h>	// for string manipulations
#include <math.h>	// for standard math functions
#include <conio.h>	// for getch() function
using namespace std;

char Alpha[26];	// List of all alphabets
char E_Alpha[26]; // List of encrypted Alphabets
// Same positions are replaced during algorithm from the above arrays

char file[10000][10000]; // Complete file which is input to ecryption/decryption algorithms
int n_lines = 1;	// Stores number of line of data in the file
char PassKey[100];	// Holds the password used in encryption/decryption
int caesar_c = 0; // Shift value for alphabets
int caesar_c_num = 0;	// Shift value for numbers
int scrambler = 0;	//Shift value for scrambling
int selection_int = 0;	// Variable to store the selection of the user (int)
char selection_char[4] = "\0";	// Variable to store the selection of the user (char)
HANDLE console = GetStdHandle( STD_OUTPUT_HANDLE );	// Handle pointing to the console output window
COORD cursor_position;	// To hold the current postion of the cursor



// Function Prototypes //


// User Functions:

	int conv_to_int(char);	// Convert number stored as string array into an integer
	char* conv_to_char(int);	// Convert integer data into a char array
	
	void app_string(char*, char*);	// Appends 2 strings into one
	void typeout(char*, char, int);	// Output a string on the console as if being typed
	void ascii_heading( char*, int);	// Creates a stylish heading made with lines and dashes
	char* paragraph(char*);	// Breaks the line while ensuring no word gets cut according to the length of the screen
	void pass_entry(char*, char, int);	// The user inputs a password, an each char is enveloped by a special character
	char* select_file(char*, int);	// User can browse files on the console and either select a file or a folder
	
	int screen_len();	// Returns the length of the console screen
	int screen_h();	// Returns height of the console screen
	int getX();	// Returns the current X coordinate of cursor on the screen
	int getY(); // Returns the current Y coordinate of cursor on the screen
	void gotoXY(int, int, int);	// Go to the x and y coordinate positions of the console or shift it by the values
	void center_align(char*);	// Moves the cursor to the position it should be at if a text was being center-aligned. input the string
	void center_align(int);	// Moves the cursor to the position it should be at if a text was being center-aligned. input the length of the string
	void console_cursor(int);	// Show or hide the blinking cursor in console window
	int console_cursor();	// Tell what is the cursor set to ( Show / Hide )
	
	char* encrypt(char*, char*, char*);	// Encryption
	char* decrypt(char*, char*, char*);	// Decryption
	
	char* get_version_robot();	// Returns the Version of the Header File
	
// In-Header-file Functions:

	void OPEN_RUN(char*, char*);	// Commands to run at start of encryption/decryption
	char* CLOSE_RUN(char*);	// Commands to run at end of encryption/decryption
	void CA(int);	// The main center align algorithm
	
	
// MAIN FUNCTIONS //

int conv_to_int(char* num_string)
{
	int len = strlen(num_string);
	int num = 0;
	
	for(int i=0; i<len; i++)
	{
		num+=int(num_string[i] - '0') * pow(10, len-i-1);	// 213 = 2 * 10^2 + 20 * 10^1 + 3 * 10^0
	}
	
	return num;
}



char* conv_to_char(int number)
{
	int len = 0;
	
	while( floor( number / pow( 10, len ) ) > 0 )
	{
		len++;
		// Get no. of positions
	}
	char number_char[len+1];
	
	int num_temp = 0;
	for(int i=0; i<len; i++)
	{
		num_temp = number / pow(10, len-i-1);	// All Previous terms (Mathematically) eliminated
		num_temp = num_temp % 10;	// All	Following terms (Mathematically) eliminated
		number_char[i] = char(num_temp + '0');
	}
	number_char[len + 1] = '\0';
	
	return number_char;
}


void app_string(char* Destination_String, char* Source_String)
{
	int i = strlen( Destination_String );
	
	for(int j=0; j < strlen( Source_String ); j++, i++)
	{
		Destination_String[i] = Source_String[j];	// From end of the Dest, all chars in src are placed in order
	}
	Destination_String[i] = '\0';
	
	return;
}



void typeout(char* input, char time_type, int time_in_ms)
/*
time_type:
	i : individual
	t : total
*/
{
	int delay = 0;
	switch( time_type )
	{
		case 'i':
			delay = time_in_ms;	// if type is 'i', each letter will take that much time to print
			break;
		case 't':
			delay = time_in_ms / strlen( input );	// if type is 't', whole word is printed in that much time
			break;
	}
	
	Sleep( delay );
	for(int i=0; i<strlen( input ); i++)
	{
		cout << input[i];
		Sleep( delay );
	}
	
	return;
}

void ascii_heading( char* message, int center ) {
	COORD pos_start;
	COORD pos_end;
	COORD pos, pos_1;
	char msg[100];
	for( int i = 0; i < 100; i++ ) {
		msg[i] = '\0';
	}
	
	for( int i = 0, j = 0; i < strlen( message ); i++, j++ ) {
		if( isalpha( message[i] ) ) {
			if( islower( message[i] ) ) {
				msg[j] = toupper( message[i] );
			}
			else {
				msg[j] = message[i];
			}
		}
		else {
			j--;
		}
	}
	
	pos_start.X = getX();
	pos_start.Y = getY();
	pos_1 = pos_start;
	for( int i = 0; i < strlen( msg ); i++ ) {
		
		switch( msg[i] ) {
			case'A':
				cout << "          ";
				pos_end.X = getX();
				pos_end.Y = getY();
				gotoXY( pos_start.X, getY() + 1, 0 );
				cout << "    /\\    ";
				gotoXY( pos_start.X, getY() + 1, 0 );
				cout << "   /  \\   ";
				gotoXY( pos_start.X, getY() + 1, 0 );
				cout << "  / /\\ \\  ";
				gotoXY( pos_start.X, getY() + 1, 0 );
				cout << " / ____ \\ ";
				gotoXY( pos_start.X, getY() + 1, 0 );
				cout << "/_/    \\_\\";
				gotoXY( pos_start.X, getY() + 1, 0 );
				pos.X = pos_end.X + 1;
				pos.Y = getY() - 1;
				gotoXY( pos_end.X + 2, pos_end.Y, 0 );
				pos_start.X = getX();
				pos_start.Y = getY();
				break;
			case'B':
				cout << " ____  ";
				pos_end.X = getX();
				pos_end.Y = getY();
				gotoXY( pos_start.X, getY() + 1, 0 );
				cout << "|  _ \\ ";
				gotoXY( pos_start.X, getY() + 1, 0 );
				cout << "| |_) |";
				gotoXY( pos_start.X, getY() + 1, 0 );
				cout << "|  _ < ";
				gotoXY( pos_start.X, getY() + 1, 0 );
				cout << "| |_) |";
				gotoXY( pos_start.X, getY() + 1, 0 );
				cout << "|____/ ";
				gotoXY( pos_start.X, getY() + 1, 0 );
				pos.X = pos_end.X + 1;
				pos.Y = getY() - 1;
				gotoXY( pos_end.X + 2, pos_end.Y, 0 );
				pos_start.X = getX();
				pos_start.Y = getY();
				break;
			case'C':
				cout << "  _____ ";
				pos_end.X = getX();
				pos_end.Y = getY();
				gotoXY( pos_start.X, getY() + 1, 0 );
				cout << " / ____|";
				gotoXY( pos_start.X, getY() + 1, 0 );
				cout << "| |     ";
				gotoXY( pos_start.X, getY() + 1, 0 );
				cout << "| |     ";
				gotoXY( pos_start.X, getY() + 1, 0 );
				cout << "| |____ ";
				gotoXY( pos_start.X, getY() + 1, 0 );
				cout << " \\_____|";
				gotoXY( pos_start.X, getY() + 1, 0 );
				pos.X = pos_end.X + 1;
				pos.Y = getY() - 1;
				gotoXY( pos_end.X + 2, pos_end.Y, 0 );
				pos_start.X = getX();
				pos_start.Y = getY();
				break;
			case'D':
				cout << " _____  ";
				pos_end.X = getX();
				pos_end.Y = getY();
				gotoXY( pos_start.X, getY() + 1, 0 );
				cout << "|  __ \\ ";
				gotoXY( pos_start.X, getY() + 1, 0 );
				cout << "| |  | |";
				gotoXY( pos_start.X, getY() + 1, 0 );
				cout << "| |  | |";
				gotoXY( pos_start.X, getY() + 1, 0 );
				cout << "| |__| |";
				gotoXY( pos_start.X, getY() + 1, 0 );
				cout << "|_____/ ";
				gotoXY( pos_start.X, getY() + 1, 0 );
				pos.X = pos_end.X + 1;
				pos.Y = getY() - 1;
				gotoXY( pos_end.X + 2, pos_end.Y, 0 );
				pos_start.X = getX();
				pos_start.Y = getY();
				break;
			case'E':
				cout << " ______ ";
				pos_end.X = getX();
				pos_end.Y = getY();
				gotoXY( pos_start.X, getY() + 1, 0 );
				cout << "|  ____|";
				gotoXY( pos_start.X, getY() + 1, 0 );
				cout << "| |__   ";
				gotoXY( pos_start.X, getY() + 1, 0 );
				cout << "|  __|  ";
				gotoXY( pos_start.X, getY() + 1, 0 );
				cout << "| |____ ";
				gotoXY( pos_start.X, getY() + 1, 0 );
				cout << "|______|";
				gotoXY( pos_start.X, getY() + 1, 0 );
				pos.X = pos_end.X + 1;
				pos.Y = getY() - 1;
				gotoXY( pos_end.X + 2, pos_end.Y, 0 );
				pos_start.X = getX();
				pos_start.Y = getY();
				break;
			case'F':
				cout << " ______ ";
				pos_end.X = getX();
				pos_end.Y = getY();
				gotoXY( pos_start.X, getY() + 1, 0 );
				cout << "|  ____|";
				gotoXY( pos_start.X, getY() + 1, 0 );
				cout << "| |__   ";
				gotoXY( pos_start.X, getY() + 1, 0 );
				cout << "|  __|  ";
				gotoXY( pos_start.X, getY() + 1, 0 );
				cout << "| |     ";
				gotoXY( pos_start.X, getY() + 1, 0 );
				cout << "|_|    ";
				gotoXY( pos_start.X, getY() + 1, 0 );
				pos.X = pos_end.X + 1;
				pos.Y = getY() - 1;
				gotoXY( pos_end.X + 2, pos_end.Y, 0 );
				pos_start.X = getX();
				pos_start.Y = getY();
				break;
			case'G':
				cout << "  _____ ";
				pos_end.X = getX();
				pos_end.Y = getY();
				gotoXY( pos_start.X, getY() + 1, 0 );
				cout << " / ____|";
				gotoXY( pos_start.X, getY() + 1, 0 );
				cout << "| |  __ ";
				gotoXY( pos_start.X, getY() + 1, 0 );
				cout << "| | |_ |";
				gotoXY( pos_start.X, getY() + 1, 0 );
				cout << "| |__| |";
				gotoXY( pos_start.X, getY() + 1, 0 );
				cout << " \\_____|";
				gotoXY( pos_start.X, getY() + 1, 0 );
				pos.X = pos_end.X + 1;
				pos.Y = getY() - 1;
				gotoXY( pos_end.X + 2, pos_end.Y, 0 );
				pos_start.X = getX();
				pos_start.Y = getY();
				break;
			case'H':
				cout << " _    _ ";
				pos_end.X = getX();
				pos_end.Y = getY();
				gotoXY( pos_start.X, getY() + 1, 0 );
				cout << "| |  | |";
				gotoXY( pos_start.X, getY() + 1, 0 );
				cout << "| |__| |";
				gotoXY( pos_start.X, getY() + 1, 0 );
				cout << "|  __  |";
				gotoXY( pos_start.X, getY() + 1, 0 );
				cout << "| |  | |";
				gotoXY( pos_start.X, getY() + 1, 0 );
				cout << "|_|  |_|";
				gotoXY( pos_start.X, getY() + 1, 0 );
				pos.X = pos_end.X + 1;
				pos.Y = getY() - 1;
				gotoXY( pos_end.X + 2, pos_end.Y, 0 );
				pos_start.X = getX();
				pos_start.Y = getY();
				break;
			case'I':
				cout << " _____ ";
				pos_end.X = getX();
				pos_end.Y = getY();
				gotoXY( pos_start.X, getY() + 1, 0 );
				cout << "|_   _|";
				gotoXY( pos_start.X, getY() + 1, 0 );
				cout << "  | |  ";
				gotoXY( pos_start.X, getY() + 1, 0 );
				cout << "  | |  ";
				gotoXY( pos_start.X, getY() + 1, 0 );
				cout << " _| |_ ";
				gotoXY( pos_start.X, getY() + 1, 0 );
				cout << "|_____|";
				gotoXY( pos_start.X, getY() + 1, 0 );
				pos.X = pos_end.X + 1;
				pos.Y = getY() - 1;
				gotoXY( pos_end.X + 2, pos_end.Y, 0 );
				pos_start.X = getX();
				pos_start.Y = getY();
				break;
			case'J':
				cout << "      _ ";
				pos_end.X = getX();
				pos_end.Y = getY();
				gotoXY( pos_start.X, getY() + 1, 0 );
				cout << "     | |";
				gotoXY( pos_start.X, getY() + 1, 0 );
				cout << "     | |";
				gotoXY( pos_start.X, getY() + 1, 0 );
				cout << " _   | |";
				gotoXY( pos_start.X, getY() + 1, 0 );
				cout << "| |__| |";
				gotoXY( pos_start.X, getY() + 1, 0 );
				cout << " \\____/ ";
				gotoXY( pos_start.X, getY() + 1, 0 );
				pos.X = pos_end.X + 1;
				pos.Y = getY() - 1;
				gotoXY( pos_end.X + 2, pos_end.Y, 0 );
				pos_start.X = getX();
				pos_start.Y = getY();
				break;
			case'K':
				cout << " _  __";
				pos_end.X = getX();
				pos_end.Y = getY();
				gotoXY( pos_start.X, getY() + 1, 0 );
				cout << "| |/ /";
				gotoXY( pos_start.X, getY() + 1, 0 );
				cout << "| ' / ";
				gotoXY( pos_start.X, getY() + 1, 0 );
				cout << "|  <  ";
				gotoXY( pos_start.X, getY() + 1, 0 );
				cout << "| . \\ ";
				gotoXY( pos_start.X, getY() + 1, 0 );
				cout << "|_|\\_\\";
				gotoXY( pos_start.X, getY() + 1, 0 );
				pos.X = pos_end.X + 1;
				pos.Y = getY() - 1;
				gotoXY( pos_end.X + 2, pos_end.Y, 0 );
				pos_start.X = getX();
				pos_start.Y = getY();
				break;
			case'L':
				cout << " _      ";
				pos_end.X = getX();
				pos_end.Y = getY();
				gotoXY( pos_start.X, getY() + 1, 0 );
				cout << "| |     ";
				gotoXY( pos_start.X, getY() + 1, 0 );
				cout << "| |     ";
				gotoXY( pos_start.X, getY() + 1, 0 );
				cout << "| |     ";
				gotoXY( pos_start.X, getY() + 1, 0 );
				cout << "| |____ ";
				gotoXY( pos_start.X, getY() + 1, 0 );
				cout << "|______|";
				gotoXY( pos_start.X, getY() + 1, 0 );
				pos.X = pos_end.X + 1;
				pos.Y = getY() - 1;
				gotoXY( pos_end.X + 2, pos_end.Y, 0 );
				pos_start.X = getX();
				pos_start.Y = getY();
				break;
			case'M':
				cout << " __  __ ";
				pos_end.X = getX();
				pos_end.Y = getY();
				gotoXY( pos_start.X, getY() + 1, 0 );
				cout << "|  \\/  |";
				gotoXY( pos_start.X, getY() + 1, 0 );
				cout << "| \\  / |";
				gotoXY( pos_start.X, getY() + 1, 0 );
				cout << "| |\\/| |";
				gotoXY( pos_start.X, getY() + 1, 0 );
				cout << "| |  | |";
				gotoXY( pos_start.X, getY() + 1, 0 );
				cout << "|_|  |_|";
				gotoXY( pos_start.X, getY() + 1, 0 );
				pos.X = pos_end.X + 1;
				pos.Y = getY() - 1;
				gotoXY( pos_end.X + 2, pos_end.Y, 0 );
				pos_start.X = getX();
				pos_start.Y = getY();
				break;
			case'N':
				cout << " _   _ ";
				pos_end.X = getX();
				pos_end.Y = getY();
				gotoXY( pos_start.X, getY() + 1, 0 );
				cout << "| \\ | |";
				gotoXY( pos_start.X, getY() + 1, 0 );
				cout << "|  \\| |";
				gotoXY( pos_start.X, getY() + 1, 0 );
				cout << "| . ` |";
				gotoXY( pos_start.X, getY() + 1, 0 );
				cout << "| |\\  |";
				gotoXY( pos_start.X, getY() + 1, 0 );
				cout << "|_| \\_|";
				gotoXY( pos_start.X, getY() + 1, 0 );
				pos.X = pos_end.X + 1;
				pos.Y = getY() - 1;
				gotoXY( pos_end.X + 2, pos_end.Y, 0 );
				pos_start.X = getX();
				pos_start.Y = getY();
				break;
			case'O':
				cout << "  ____  ";
				pos_end.X = getX();
				pos_end.Y = getY();
				gotoXY( pos_start.X, getY() + 1, 0 );
				cout << " / __ \\ ";
				gotoXY( pos_start.X, getY() + 1, 0 );
				cout << "| |  | |";
				gotoXY( pos_start.X, getY() + 1, 0 );
				cout << "| |  | |";
				gotoXY( pos_start.X, getY() + 1, 0 );
				cout << "| |__| |";
				gotoXY( pos_start.X, getY() + 1, 0 );
				cout << " \\____/ ";
				gotoXY( pos_start.X, getY() + 1, 0 );
				pos.X = pos_end.X + 1;
				pos.Y = getY() - 1;
				gotoXY( pos_end.X + 2, pos_end.Y, 0 );
				pos_start.X = getX();
				pos_start.Y = getY();
				break;
			case'P':
				cout << " _____  ";
				pos_end.X = getX();
				pos_end.Y = getY();
				gotoXY( pos_start.X, getY() + 1, 0 );
				cout << "|  __ \\ ";
				gotoXY( pos_start.X, getY() + 1, 0 );
				cout << "| |__) |";
				gotoXY( pos_start.X, getY() + 1, 0 );
				cout << "|  ___/ ";
				gotoXY( pos_start.X, getY() + 1, 0 );
				cout << "| |     ";
				gotoXY( pos_start.X, getY() + 1, 0 );
				cout << "|_|    ";
				gotoXY( pos_start.X, getY() + 1, 0 );
				pos.X = pos_end.X + 1;
				pos.Y = getY() - 1;
				gotoXY( pos_end.X + 2, pos_end.Y, 0 );
				pos_start.X = getX();
				pos_start.Y = getY();
				break;
			case'Q':
				cout << "  ____  ";
				pos_end.X = getX();
				pos_end.Y = getY();
				gotoXY( pos_start.X, getY() + 1, 0 );
				cout << " / __ \\ ";
				gotoXY( pos_start.X, getY() + 1, 0 );
				cout << "| |  | |";
				gotoXY( pos_start.X, getY() + 1, 0 );
				cout << "| |  | |";
				gotoXY( pos_start.X, getY() + 1, 0 );
				cout << "| |__| |";
				gotoXY( pos_start.X, getY() + 1, 0 );
				cout << " \\___\\_\\";
				gotoXY( pos_start.X, getY() + 1, 0 );
				pos.X = pos_end.X + 1;
				pos.Y = getY() - 1;
				gotoXY( pos_end.X + 2, pos_end.Y, 0 );
				pos_start.X = getX();
				pos_start.Y = getY();
				break;
			case'R':
				cout << " _____  ";
				pos_end.X = getX();
				pos_end.Y = getY();
				gotoXY( pos_start.X, getY() + 1, 0 );
				cout << "|  __ \\ ";
				gotoXY( pos_start.X, getY() + 1, 0 );
				cout << "| |__) |";
				gotoXY( pos_start.X, getY() + 1, 0 );
				cout << "|  _  / ";
				gotoXY( pos_start.X, getY() + 1, 0 );
				cout << "| | \\ \\ ";
				gotoXY( pos_start.X, getY() + 1, 0 );
				cout << "|_|  \\_\\";
				gotoXY( pos_start.X, getY() + 1, 0 );
				pos.X = pos_end.X + 1;
				pos.Y = getY() - 1;
				gotoXY( pos_end.X + 2, pos_end.Y, 0 );
				pos_start.X = getX();
				pos_start.Y = getY();
				break;
			case'S':
				cout << "  _____ ";
				pos_end.X = getX();
				pos_end.Y = getY();
				gotoXY( pos_start.X, getY() + 1, 0 );
				cout << " / ____|";
				gotoXY( pos_start.X, getY() + 1, 0 );
				cout << "| (___  ";
				gotoXY( pos_start.X, getY() + 1, 0 );
				cout << " \\___ \\ ";
				gotoXY( pos_start.X, getY() + 1, 0 );
				cout << " ____) |";
				gotoXY( pos_start.X, getY() + 1, 0 );
				cout << "|_____/ ";
				gotoXY( pos_start.X, getY() + 1, 0 );
				pos.X = pos_end.X + 1;
				pos.Y = getY() - 1;
				gotoXY( pos_end.X + 2, pos_end.Y, 0 );
				pos_start.X = getX();
				pos_start.Y = getY();
				break;
			case'T':
				cout << " _______ ";
				pos_end.X = getX();
				pos_end.Y = getY();
				gotoXY( pos_start.X, getY() + 1, 0 );
				cout << "|__   __|";
				gotoXY( pos_start.X, getY() + 1, 0 );
				cout << "   | |   ";
				gotoXY( pos_start.X, getY() + 1, 0 );
				cout << "   | |   ";
				gotoXY( pos_start.X, getY() + 1, 0 );
				cout << "   | |   ";
				gotoXY( pos_start.X, getY() + 1, 0 );
				cout << "   |_|   ";
				gotoXY( pos_start.X, getY() + 1, 0 );
				pos.X = pos_end.X + 1;
				pos.Y = getY() - 1;
				gotoXY( pos_end.X + 2, pos_end.Y, 0 );
				pos_start.X = getX();
				pos_start.Y = getY();
				break;
			case'U':
				cout << " _    _ ";
				pos_end.X = getX();
				pos_end.Y = getY();
				gotoXY( pos_start.X, getY() + 1, 0 );
				cout << "| |  | |";
				gotoXY( pos_start.X, getY() + 1, 0 );
				cout << "| |  | |";
				gotoXY( pos_start.X, getY() + 1, 0 );
				cout << "| |  | |";
				gotoXY( pos_start.X, getY() + 1, 0 );
				cout << "| |__| |";
				gotoXY( pos_start.X, getY() + 1, 0 );
				cout << " \\____/ ";
				gotoXY( pos_start.X, getY() + 1, 0 );
				pos.X = pos_end.X + 1;
				pos.Y = getY() - 1;
				gotoXY( pos_end.X + 2, pos_end.Y, 0 );
				pos_start.X = getX();
				pos_start.Y = getY();
				break;
			case'V':
				cout << "__      __";
				pos_end.X = getX();
				pos_end.Y = getY();
				gotoXY( pos_start.X, getY() + 1, 0 );
				cout << "\\ \\    / /";
				gotoXY( pos_start.X, getY() + 1, 0 );
				cout << " \\ \\  / / ";
				gotoXY( pos_start.X, getY() + 1, 0 );
				cout << "  \\ \\/ /  ";
				gotoXY( pos_start.X, getY() + 1, 0 );
				cout << "   \\  /   ";
				gotoXY( pos_start.X, getY() + 1, 0 );
				cout << "    \\/    ";
				gotoXY( pos_start.X, getY() + 1, 0 );
				pos.X = pos_end.X + 1;
				pos.Y = getY() - 1;
				gotoXY( pos_end.X + 2, pos_end.Y, 0 );
				pos_start.X = getX();
				pos_start.Y = getY();
				break;
			case'W':
				cout<<" _      _";
				pos_end.X = getX();
				pos_end.Y = getY();
				gotoXY( pos_start.X, getY() + 1, 0 );
				cout<<"| |    | |";
				gotoXY( pos_start.X, getY() + 1, 0 );
				cout<<"| | /\\ | |";
				gotoXY( pos_start.X, getY() + 1, 0 );
				cout<<"| |/  \\| |";
				gotoXY( pos_start.X, getY() + 1, 0 );
				cout<<"|   /\\   |";
				gotoXY( pos_start.X, getY() + 1, 0 );
				cout<<"|__/  \\__|";
				gotoXY( pos_start.X, getY() + 1, 0 );
				pos.X = pos_end.X + 1;
				pos.Y = getY() - 1;
				gotoXY( pos_end.X + 2, pos_end.Y, 0 );
				pos_start.X = getX();
				pos_start.Y = getY();
				break;
			case'X':
				cout << " __   __";
				pos_end.X = getX();
				pos_end.Y = getY();
				gotoXY( pos_start.X, getY() + 1, 0 );
				cout << " \\ \\ / /";
				gotoXY( pos_start.X, getY() + 1, 0 );
				cout << "  \\ V / ";
				gotoXY( pos_start.X, getY() + 1, 0 );
				cout << "   > <  ";
				gotoXY( pos_start.X, getY() + 1, 0 );
				cout << "  / . \\ ";
				gotoXY( pos_start.X, getY() + 1, 0 );
				cout << " /_/ \\_\\";
				gotoXY( pos_start.X, getY() + 1, 0 );
				pos.X = pos_end.X + 1;
				pos.Y = getY() - 1;
				gotoXY( pos_end.X + 2, pos_end.Y, 0 );
				pos_start.X = getX();
				pos_start.Y = getY();
				break;
			case'Y':
				cout << "__     __";
				pos_end.X = getX();
				pos_end.Y = getY();
				gotoXY( pos_start.X, getY() + 1, 0 );
				cout << "\\ \\   / /";
				gotoXY( pos_start.X, getY() + 1, 0 );
				cout << " \\ \\_/ / ";
				gotoXY( pos_start.X, getY() + 1, 0 );
				cout << "  \\   /  ";
				gotoXY( pos_start.X, getY() + 1, 0 );
				cout << "   | |   ";
				gotoXY( pos_start.X, getY() + 1, 0 );
				cout << "   |_|   ";
				gotoXY( pos_start.X, getY() + 1, 0 );
				pos.X = pos_end.X + 1;
				pos.Y = getY() - 1;
				gotoXY( pos_end.X + 2, pos_end.Y, 0 );
				pos_start.X = getX();
				pos_start.Y = getY();
				break;
			case'Z':
				cout << " ______";
				pos_end.X = getX();
				pos_end.Y = getY();
				gotoXY( pos_start.X, getY() + 1, 0 );
				cout << "|___  /";
				gotoXY( pos_start.X, getY() + 1, 0 );
				cout << "   / / ";
				gotoXY( pos_start.X, getY() + 1, 0 );
				cout << "  / /  ";
				gotoXY( pos_start.X, getY() + 1, 0 );
				cout << " / /__ ";
				gotoXY( pos_start.X, getY() + 1, 0 );
				cout << "/_____|";
				gotoXY( pos_start.X, getY() + 1, 0 );
				pos.X = pos_end.X + 1;
				pos.Y = getY() - 1;
				gotoXY( pos_end.X + 2, pos_end.Y, 0 );
				pos_start.X = getX();
				pos_start.Y = getY();
				break;
		}
	}
	
	gotoXY( pos.X, pos.Y, 0 );
	
	if( center == 1 ) {
		int len = pos_end.X - pos_1.X;
		
		while( getX() != pos_1.X || getY() != pos_1.Y ) {
			if( getX() == 0 ) {
				cout << " ";
				gotoXY( pos.X, getY() - 1, 0 );
			}
			cout << " ";
			gotoXY( -2, 0, 1 );
		}
		center_align( len );
		ascii_heading( message, 0 );
	}
	
	return;
}

char* paragraph(char* input)
{
	int counter = 0;	// Variable to used as a recursive counter
	
	char msg[10000];	// Temporarily holds the input
	for(int i = 0; i < 10000; i++)
	{
		msg[i] = '\0';	// Clearing array msg
	}
	strcpy( msg, input);
	
	counter = 0;
	for( int i = getX(); counter < strlen( msg ); i++, counter++)
	{
		if( msg[counter] == '\n')
		{
			i = -1;	// The loop shall automatically add 1 to i, hence making it restart from 0
		}
		else if( i == screen_len() - 1)
		{
			i = -1;	// The loop shall automatically add 1 to i, hence making it restart from 0
			
			while( msg[counter] != ' ')	// reach to the last space in the input
			{
				counter--;
			}
			
			if( msg[counter] == ' ')	// if there does exist a space, change it to a line break
			{
				msg[counter] = '\n';
			}
		}
	}
	
	return msg;
}


void pass_entry(char* password_array, char hide_char, int max_length)
{
	int cursor = console_cursor();
	console_cursor( 1 );	// Pass Entry function must always show the cursor
	
	
	if(max_length < 3)
	{
		cout << "\n\n:: HEADER FILE -------- Invlaid entry into parameter ::\n\n";
		
		cout << "## max_length(func: pass_entry) > 2 = FALSE\n";
		
		
		cout << "Press any key to terminate...\n";
		getch();
		exit( 1 );
	}
	
	for(int i=0; i <= max_length; i++)
	{
		password_array[i] = '\0';
	}
	char pwd[max_length + 2];
	for(int i=0; i<(max_length+2); i++)
	{
		pwd[i]='\0';
	}
	
	int i=0;
	while(1)
	{
		pwd[i]=getch();
		
		if(i < max_length)
		{
			switch(pwd[i])
			{
				case 13:	// 13: Return Key
					pwd[i] = '\0';
					cout << endl;
					goto ESC;
				case 8:	// 8: Backspace
					if(i <= 0)	// Only input password can get erased
					{
						pwd[i] = '\0';
					}
					else
					{
						cout << "\b \b";
						pwd[i] = '\0';
						i = i - 1;
					}
					break;
				case 27:	// 27: Esc Key
					pwd[i] = '\0';	// Clear this char
					break;
				default:
					if(hide_char == 0)	// No special char used if 0
					{
						cout << pwd[i];
						i++;
					}
					else
					{
						cout << hide_char;
						i++;
					}
			}
		}
		else
		{
			switch(pwd[i])
			{
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
					break;	// No data entry after maximum limit
			}
		}
	}
	
	ESC:
	for(int i=0; i < max_length; i++)
	{
		password_array[i] = pwd[i];
	}
	
	console_cursor( cursor );	// Set cursor state back to original
	return;
}



char* select_file(char* location, int entry_type)
/*
entry_type:
	0: All
	1: Files
	2: Folders
*/
{
	int cursor = console_cursor();
	int run_counter = 0;	// To store which iteration (numerically) of the function is the current one
	char path[260];
	for( int i = 0; i < 260; i++ )	// Clearing the variable path
	{
		path[i] = '\0';
	}
	app_string( path, location );	// Original Variable/Input must not be changed
	
	SELECT_FILE_MAIN:
	
	int counter = 0;	// Variable to used as a recursive counter
	run_counter++;
	
	// Check if the path is relative
	if( path[1] != ':' )	// Since absolute path are of format [DRIVE LETTER]:\...., path[1] should hold ':' if it is an absolute path
	{
		char curr_location[260];
		GetCurrentDirectory( 260, curr_location );
		
		strcpy( path, curr_location );
		app_string( path, "/" );
	}
	
	for(int i = 0; i < strlen( path ); i++)
	{
		if( path[i] == '\\')
		{
			path[i] = '/';	// Prefer '/' over '\'
		}
	}
	
	// Location Format: X/......XYZ/*
	switch(path[strlen(path) - 1])
	{
		case '*':
			if (path[strlen(path) - 2] == '/' || path[strlen(path) - 2] == '\\')
			{
				break;
			}
			break;
		case '/':
			app_string( path, "*");
			break;
		case '\\':
			app_string( path, "*");
			break;
		default:
			app_string( path, "/*");
			break;
	}
	
	char file_list[500][260];
	for(int i=0; i<500; i++)
	{
		for(int j=0; j<260; j++)
		{
			file_list[i][j] = '\0';
		}
	}
	
	WIN32_FIND_DATA file;
	HANDLE curr_file = FindFirstFile( path, &file );
	if(curr_file != INVALID_HANDLE_VALUE)
	{
		do
		{
			if(!(( file.dwFileAttributes & FILE_ATTRIBUTE_HIDDEN )||( file.dwFileAttributes & FILE_ATTRIBUTE_SYSTEM )))	//Only show user files
			{
				switch( entry_type )
				{
					case 0:
						strcpy(file_list[counter], file.cFileName);
						counter++;
						break;
					case 1:
						strcpy(file_list[counter], file.cFileName);
						counter++;
						break;
					case 2:
						if( file.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY )	//Only List Folders
						{
							strcpy(file_list[counter], file.cFileName);
							counter++;
						}
						break;
					default:
						cout << paragraph( "\n\n:: HEADER FILE -------- Invlaid entry into parameter ::\n\n" );
		
						cout << paragraph( "## entry_type = [0, 1, 2] = FALSE\n" );
		
		
						cout << paragraph( "Press any key to terminate...\n" );
						getch();
						exit( 1 );
						break;
				}
			}
		}while( FindNextFile( curr_file, &file ) );
		FindClose( curr_file );
		
		SHOW_FILE_LIST:
		
		if( run_counter == 1 )	// If it is the first run
		{
			// Marking the starting postion of the output displayed by the function
			cursor_position.Y = getY();
		}
		
		// Clearing the previous output
		console_cursor( 0 );
		while( getY() != cursor_position.Y )	// While cursor is not in the same line
		{
			gotoXY( 0, getY() - 1, 0 );	// Move one line back
			// Clear the line
			for( int i = 0; i < screen_len() - 1; i++)
			{
				cout<<" ";	
			}
		}
		gotoXY( 0, getY(), 0);	// Go to the sarting position of the line 
		
		cout << paragraph( "Current Location: " ) << endl;
		cout.write( path, strlen(path)-1 );	// Dont display the '*'
		cout << endl << endl;
		
		int c = 0;	// Temporary counter
		for(; c < counter; c++)
		{
			if( strcmp( file_list[c], "." ) == 0 )
			{
				if( entry_type != 1 )	// Folders not selectabe in file type
				{
					cout << c << ". << Use This Folder >>" << endl;
				}
			}
			else if( strcmp( file_list[c], ".." ) == 0 )
			{
				cout << c << ". << Go Up/Back a Folder >>" << endl;
			}
			else
			{
				cout << c << ". ";
				cout.write( file_list[c], strlen( file_list[c] ) );
				cout << endl;
			}
		}
		if( entry_type != 1 )	// If Folder can be selected
		{
			cout << c <<". << New Folder >>" << endl;
			c++;
		}
		cout << c <<". << Cancel >>" << endl;
		
		// Select desired file/folder
		console_cursor( 1 );
		cout << paragraph( "Enter the index of the folder/file to open: " );
		cin.getline(selection_char, 4);
		for( int i = 0; i < strlen( selection_char); i++ )
		{
			if(!( selection_char[i] >= '0' && selection_char[i] <= '9' ))	// Only number entry allowed
			{
				cout << endl<<"Invlaid! Please enter a number" << endl;
				cout << "Press any key to Retry!" << endl;
				getch();
				
				run_counter++;
				goto SHOW_FILE_LIST;
			}
		}
		console_cursor( 0 );
		
		selection_int = conv_to_int(selection_char);
		if( selection_int > counter + 1 )
		{
			cout <<endl << "Invalid index number!" << endl;
			cout << "Press any key to Retry!" << endl;
			getch();
			
			run_counter++;
			goto SHOW_FILE_LIST;
		}
		
		if( selection_int == 0 && entry_type == 1)	// Folders not selectable in file type
		{
			cout << endl << "Invalid index number!" << endl;
			cout << "Press any key to Retry!" << endl;
			getch();
			
			run_counter++;
			goto SHOW_FILE_LIST;
		}
		
		
		// Removing '*' and '/' from the path
		path[strlen( path ) - 1] = '\0';
		path[strlen( path ) - 1] = '\0';
		
		if( ( entry_type != 1 && selection_int == counter + 1 ) || ( entry_type == 1 && selection_int == counter ) )	// If user Cancels
		{
			return "\0";
		}
		else if( entry_type != 1 && selection_int == counter )	// If create new folder
		{
			char name[260];
			char invalid[] = {"/\\:*\"<>|"};
			
			NAME_ENTRY:
			console_cursor( 1 );
			cout << "Enter name for New Folder: ";
			cin.getline( name, 260 );
			console_cursor( 0 );
			
			for(int i = 0; i < strlen( name ); i++)
			{
				for(int j = 0; j < strlen( invalid ); j++)
				{
					if( name[i] == invalid[j] )	// The characters in invalid array are not allowed in the folder name in windows
					{
						cout << endl << "The Folder name is not valid\nPlease Retry\n";
						goto NAME_ENTRY;
					}
				}
			}
			
			app_string( path, "/" );
			app_string( path, name );
			
			CreateDirectory( path, NULL );
			// If creation is not successful due to folder with same name already existing, the program shall simply open that folder
			
			goto SELECT_FILE_MAIN;
			return path;
		}
		else if( strcmp( file_list[selection_int], ".") == 0)
		{
			return path;
		}
		else if( strcmp( file_list[selection_int], "..") == 0)
		{
			// Getting rid of name of current directory from path
			for( int k = strlen( path ); k > 0; k--)
			{
				if( path[k] == '/' || path[k] == '\\')
				{
					goto SELECT_FILE_MAIN;
					return path;
				}
				else
				{
					path[k] = '\0';
				}
			}
		}
		else
		{
			app_string( path, "/");
			app_string( path, file_list[selection_int] );
			
			goto SELECT_FILE_MAIN;
			return path;
		}
	}
	else
	{
		// If the current path is not a Folder or invalid path
		
		
		//Removing '*' and '/' from the path
		path[strlen( path ) - 1] = '\0';
		path[strlen( path ) - 1] = '\0';
		
		fstream test;
		test.open( path, ios::in);
		
		if( test )
		{
			test.close();
			return path;
		}
		else
		{
			cout << "\n\n:: HEADER FILE -------- Unexpected Handle ::\n\n";
		
		
			cout << "Press any key to terminate...\n";
			getch();
			exit(1);
		}
	}
	console_cursor( cursor );
	return path;
}



int screen_len()
{
	CONSOLE_SCREEN_BUFFER_INFO screen_len;
	
	GetConsoleScreenBufferInfo( console, &screen_len);
	
	return screen_len.dwMaximumWindowSize.X;
}


int screen_h()
{
	CONSOLE_SCREEN_BUFFER_INFO screen_h;
	
	GetConsoleScreenBufferInfo( console, &screen_h );
	
	return screen_h.dwMaximumWindowSize.Y;
}


int getX()
{
	CONSOLE_SCREEN_BUFFER_INFO cursor_pos;
	
	GetConsoleScreenBufferInfo( console, &cursor_pos );
	
	return cursor_pos.dwCursorPosition.X;
}

int getY()
{
	CONSOLE_SCREEN_BUFFER_INFO cursor_pos;
	
	GetConsoleScreenBufferInfo( console, &cursor_pos );
	
	return cursor_pos.dwCursorPosition.Y;
}



void gotoXY(int X_coord, int Y_coord, int relative = 0)
/*
relative:
	1/true: relative motion (addition/subtraction)
	0/false: fixed
*/
{
	COORD cursor_pos;
	
	switch( relative )
	{
		case 0:
			cursor_pos.X = X_coord;
			cursor_pos.Y = Y_coord;
			break;
		default:
			cursor_pos.X = getX() + X_coord;
			cursor_pos.Y = getY() + Y_coord;
	}
	
	SetConsoleCursorPosition( console, cursor_pos);
	
	return;
}


void center_align(char* input )
{
	int len = strlen( input );
	
	CA( len );
	
	return;
}

void center_align( int string_len )
{
	int len = string_len;
	
	CA( len );
	
	return;
}

void CA(int len)
{
	int s_len = screen_len();
	
	switch( len % 2)
	{
		case 0:
			len = ( len / 2 ) - 1;
			break;
		case 1:
			len = ( len - 1 ) / 2;
			break;
	}
	
	switch( s_len % 2 )
	{
		case 0:
			s_len = ( s_len / 2 ) + 1;
			break;
		case 1:
			s_len = ( s_len + 1 ) / 2;
			break;
	}
	
	gotoXY( s_len - len, getY(), 0 );
	
	return;
}



void console_cursor(int show_cursor)
{
	CONSOLE_CURSOR_INFO cursor_info;
	
	GetConsoleCursorInfo( console, &cursor_info );
	cursor_info.bVisible = show_cursor;
	SetConsoleCursorInfo( console, &cursor_info );
	
	return;
}

int console_cursor()
{
	CONSOLE_CURSOR_INFO cursor_info;
	
	GetConsoleCursorInfo( console, &cursor_info );
	
	return (int)cursor_info.bVisible;
}

char* encrypt(char* input, char* password, char* output = "**")
{
	OPEN_RUN(input, password);
	
	// Caesar Cipher
	for(int i = 0; i < n_lines; i++)
	{
		for(int j = 0; j < strlen( file[i] ); j++)
		{
			// Alphabets
			if( ( file[i][j] >= 'a' && file[i][j] <='z' ) )	// If input is a small alphabet
			{
				if( file[i][j] + caesar_c - 'a' < 26 )	// If adding the shift keeps it between 'a' to 'z'
				{
					file[i][j] += caesar_c;	// Add shift
				}
				else
				{
					file[i][j] += ( caesar_c - 26 );	// Else add shift and subtract 26 to go back to the beginning of the alphabet 
				}
			}
			else if( ( file[i][j] >= 'A' && file[i][j] <='Z' ) )	// If input is a capital aplhabet
			{
				if( file[i][j] + caesar_c - 'A' < 26 )	// If adding the shift keeps it between 'A' to 'Z'
				{
					file[i][j] += caesar_c;	// Add shift
				}
				else
				{
					file[i][j] += ( caesar_c - 26 );	// Else add shift and subtract 26 to go back to the beginning of the alphabet
				}
			}
			
			
			// Numbers
			else if( file[i][j] >= '0' && file[i][j] <= '9' )	// If input is a number
			{
				if( file[i][j] + caesar_c_num - '0' <= 9 )	// If adding the shift keeps it betwwen '0' to '9'
				{
					file[i][j] += caesar_c_num;	// Add shift
				}
				else
				{
					file[i][j] += ( caesar_c_num - 10 );	// Else add shift and subtract 10 to go back to beginnnig of the number series
				}
			}
		}
	}
	
	
	// Secret Encryption
	for( int i = 0; i < n_lines; i++)
	{
		for( int j = 0; j < strlen( file[i] ); j++)
		{
			for( int k = 0; k < 26; k++)
			{
				if( file[i][j] == Alpha[k] )	// If input matches a small alphabet
				{
					file[i][j] = E_Alpha[k];	// Replace it with respective Encrypted alphabet
					break;
				}
				else if( file[i][j] == ( Alpha[k] + 'A' - 'a' ) )	// If input matches a capital alphabet
				{	
					file[i][j] = E_Alpha[k] + 'A' - 'a';	// Replace it with respective Encrypted capital alphabet
					break;
				}
			}
		}
	}
	
	
	// Scrambler
	scrambler = 0;	// Scrambler picks up the sum of current position as its value (in the algorithm)
	for(int i = 0; i < n_lines; i++)
	{
		for(int j = 0; j < strlen( file[i] ); j++)
		{
			
			// Alphabets
			if( ( file[i][j] >= 'a' && file[i][j] <='z' ) )	// If input is a small alphabet
			{
				scrambler = ( i + j ) % 26;	// Scrambler for alphabets must be between 0 - 25
				
				if( file[i][j] + scrambler - 'a' < 26 )	// If adding the shift keeps it between 'a' to 'z'
				{
					file[i][j] += scrambler;	// Add shift
				}
				else
				{
					file[i][j] += ( scrambler - 26 );	// Else add shift and subtract 26 to go back to the beginning of the alphabet 
				}
			}
			else if( ( file[i][j] >= 'A' && file[i][j] <='Z' ) )	// If input is a capital aplhabet
			{
				scrambler = ( i + j ) % 26;	// Scrambler for alphabets must be between 0 - 25
				if( file[i][j] + scrambler - 'A' < 26 )	// If adding the shift keeps it between 'A' to 'Z'
				{
					file[i][j] += scrambler;	// Add shift
				}
				else
				{
					file[i][j] += ( scrambler - 26 );	// Else add shift and subtract 26 to go back to the beginning of the alphabet
				}
			}
			
			
			// Numbers
			else if( file[i][j] >= '0' && file[i][j] <= '9' )	// If input is a number
			{
				scrambler = ( i + j ) % 10;	// Scrambler for alphabets must be between 0 - 9
				if( file[i][j] + scrambler - '0' <= 9 )	// If adding the shift keeps it betwwen '0' to '9'
				{
					file[i][j] += scrambler;	// Add shift
				}
				else
				{
					file[i][j] += ( scrambler - 10 );	// Else add shift and subtract 10 to go back to beginnnig of the number series
				}
			}
		}
	}
	
	char* rval;
	rval=CLOSE_RUN( output );
	
	return rval;
	
	
	return output;
}



char* decrypt(char* input, char* password, char* output = "**")
{
	OPEN_RUN(input, password);
	
	
	// De-Scrambler
	scrambler = 0;	// Scrambler picks up the sum of current position as its value (in the algorithm)
	for(int i = 0; i < n_lines; i++)
	{
		for(int j = 0; j < strlen( file[i] ); j++)
		{
			
			// Alphabets
			if( ( file[i][j] >= 'a' && file[i][j] <='z' ) )	// If input is a small alphabet
			{
				scrambler = ( i + j ) % 26;	// Scrambler for alphabets must be between 0 - 25
				
				if( file[i][j] - scrambler - 'a' >= 0 )	// If adding the shift keeps it between 'a' to 'z'
				{
					file[i][j] -= scrambler;	// Add shift
				}
				else
				{
					file[i][j] -= ( scrambler - 26 );	// Else add shift and subtract 26 to go back to the beginning of the alphabet
				}
			}
			else if( ( file[i][j] >= 'A' && file[i][j] <='Z' ) )	// If input is a capital aplhabet
			{
				scrambler = ( i + j ) % 26;	// Scrambler for alphabets must be between 0 - 25
				if( file[i][j] - scrambler - 'A' >= 0 )	// If adding the shift keeps it between 'A' to 'Z'
				{
					file[i][j] -= scrambler;	// Add shift
				}
				else
				{
					file[i][j] -= ( scrambler - 26 );	// Else add shift and subtract 26 to go back to the beginning of the alphabet
				}
			}
			
			
			// Numbers
			else if( file[i][j] >= '0' && file[i][j] <= '9' )	// If input is a number
			{
				scrambler = ( i + j ) % 10;	// Scrambler for alphabets must be between 0 - 9
				if( file[i][j] - scrambler - '0' >= 0 )	// If adding the shift keeps it betwwen '0' to '9'
				{
					file[i][j] -= scrambler;	// Add shift
				}
				else
				{
					file[i][j] -= ( scrambler - 10 );	// Else add shift and subtract 10 to go back to beginnnig of the number series
				}
			}
		}
	}	
	

	// De- Secret Encryption
	for( int i = 0; i < n_lines; i++)
	{
		for( int j = 0; j < strlen( file[i] ); j++)
		{
			for( int k = 0; k < 26; k++)
			{
				if( file[i][j] == E_Alpha[k] )	// If input matches a small alphabet
				{
					file[i][j] = Alpha[k];	// Replace it with respective Encrypted alphabet
					break;
				}
				else if( file[i][j] == ( E_Alpha[k] + 'A' - 'a' ) )	// If input matches a capital alphabet
				{	
					file[i][j] = Alpha[k] + 'A' - 'a';	// Replace it with respective Encrypted capital alphabet
					break;
				}
			}
		}
	}
	
	
	// De- Caesar Cipher
	for(int i = 0; i < n_lines; i++)
	{
		for(int j = 0; j < strlen( file[i] ); j++)
		{
			// Alphabets
			if( ( file[i][j] >= 'a' && file[i][j] <='z' ) )	// If input is a small alphabet
			{
				if( file[i][j] - caesar_c - 'a' >= 0 )	// If adding the shift keeps it between 'a' to 'z'
				{
					file[i][j] -= caesar_c;	// Add shift
				}
				else
				{
					file[i][j] -= ( caesar_c - 26 );	// Else add shift and subtract 26 to go back to the beginning of the alphabet
				}
			}
			else if( ( file[i][j] >= 'A' && file[i][j] <='Z' ) )	// If input is a capital aplhabet
			{
				if( file[i][j] - caesar_c - 'A' >= 0 )	// If adding the shift keeps it between 'A' to 'Z'
				{
					file[i][j] -= caesar_c;	// Add shift
				}
				else
				{
					file[i][j] -= ( caesar_c - 26 );	// Else add shift and subtract 26 to go back to the beginning of the alphabet
				}
			}
			
			
			// Numbers
			else if( file[i][j] >= '0' && file[i][j] <= '9' )	// If input is a number
			{
				if( file[i][j] - caesar_c_num - '0' >= 0 )	// If adding the shift keeps it betwwen '0' to '9'
				{
					file[i][j] -= caesar_c_num;	// Add shift
				}
				else
				{
					file[i][j] -= ( caesar_c_num - 10 );	// Else add shift and subtract 10 to go back to beginnnig of the number series
				}
			}
		}
	}
	
	char* rval;
	rval = CLOSE_RUN( output );
	
	return rval;	
}




void OPEN_RUN(char* input, char* password)
{
	int counter = 0;	// Variable to used as a recursive counter
	
	for( int i = 0; i < 100; i++)
	{
		PassKey[i] = '\0';	// Clearing PassKey
	}
	
	for( int i = 0; i < 10000; i++ )
	{
		for( int j = 0; j < 10000; j++ )
		{
			file[i][j] = '\0';	// Clearing the input
		}
	}
	
	fstream fin;
	fin.open(input, ios::in);
	
	fin.seekg(0, ios::end);
	if( fin && fin.tellg() != 0)	// If file exists and is not empty
	{
		fin.seekg(0, ios::beg);
		
		counter = 0;
		char line[10000];
		while( fin.getline( line, 10000 ) )
		{
			for( int i=0; i < strlen( line ); i++)
			{
				file[counter][i] = line[i];	// Save all content of file into variable 'file'
			}
			counter++;
		}
		n_lines = counter;
		
		fin.close();
	}
	else if( !fin )	// If input specified is not a valid file
	{
		if( strlen( input ) == 0)	// If input is empty
		{
			cout << "\n\n:: HEADER FILE -------- Invalid Entry into Parameter ::\n\n";
			
			cout << "## length of input > 0 = FALSE\n";
			
			cout << "Press any key to terminate...\n";
			getch();
			exit(1);
		}
		else
		{
			counter = 0;
			for(int i = 0, j = 0; i < strlen( input ); i++, j++ )
			{
				if( input[i] == '\n' )	// '\n' in input must not be saved. It switches to the next row/line
				{
					j = -1;	// Loop will add 1 to j, hence making it 0 for the next line
					counter++;
					continue;
				}
				
				file[counter][j] = input[i];	// Import the input itself as if it was the content of a file
			}
			n_lines = counter + 1;	// counter is 0 if there is 1 line
		}
	}
	else if( fin.tellg() == 0 )	// If the file is Empty
	{
		cout << "\n\n:: HEADER FILE -------- Invalid Entry into Parameter ::\n\n";
		
		cout << "## data from input file = FALSE\n";
		
		cout << "Press any key to terminate...\n";
		getch();
		exit(1);
	}
	
	if( strlen( password ) < 4 )
	{
		cout << "\n\n:: HEADER FILE -------- Invalid PassKey ::\n\n";
		
		cout << "## length of password > 3 = FALSE";
		
		cout << "Press any key to terminate...\n";
		getch();
		exit(1);
	}
	else
	{
		strcpy( PassKey, password );
	}
	
	// Getting Caesar Cipher shift value
	caesar_c = 0;
	for( int i = 0; i < strlen( PassKey ); i++)
	{
		if( PassKey[i] >= '0' && PassKey[i] <= '9')
		{
			caesar_c += PassKey[i] - '0';	// Save numeric value of character numbers into caesar_c_num
		}
	}
	
	//Caesar shift for numbers is in range 1 - 9
	caesar_c_num = caesar_c % 10;
	if( caesar_c_num == 0 )
	{
		caesar_c_num = 1;
	}
	
	// Caesar shift for alphabets is in range 1 - 25
	caesar_c = caesar_c % 26;
	if( caesar_c == 0 )
	{
		caesar_c = 1;
	}
	
	
	// Eliminating special characters from PassKey
	char PassKey_temp[100];	// Temporary storing PassKey
	for( int i = 0; i < 100; i++)
	{
		PassKey_temp[i] = '\0';	// Clearing PassKey_temp (To temporarily store PassKey)
	}
	
	for( int i = 0, j = 0; i < strlen( PassKey ); i++)
	{
		if( ( PassKey[i] >= 'a' && PassKey[i] <= 'z' ) || ( PassKey[i] >= 'A' && PassKey[i] <= 'Z' ) || (PassKey[i] == '\0') )	// Only Alphabets Allowed
		{
			PassKey_temp[j] = PassKey[i];
			j++;
		}
	}
	strcpy( PassKey, PassKey_temp);
	
	// Converting to Small ( A -> a )
	for( int i = 0; i < strlen( PassKey ); i++)
	{
		if( PassKey[i] >= 'A' && PassKey[i] <= 'Z')	// If alphabet is capital
		{
			PassKey[i] -= 'A' - 'a';	// Subtract the difference of capital and small alphabets
		}
	}
	
	
	
	// Eliminating Repitition
	
	int counter_temp = 0;	// A temporary Counter
	char used_alpha_list[26];	// List to store used alphabets in the password
	for(int i = 0; i < 26; i++)
	{
		used_alpha_list[i] = '\0';	// Clearing used_alpha_list
	}
	for(int i = 0; i < 100; i++)
	{
		PassKey_temp[i] = '\0';	// Clearing PassKey_temp (To temporarily store PassKey)
	}
	
	for(int i = 0; i < strlen( PassKey ); i++)
	{
		counter = 0;
		for(int j = 0; j < 26; j++)
		{
			if(PassKey[i] == used_alpha_list[j])	// Checking if the alphabet has been used previously
			{
				break;
			}
			else
			{
				counter++;
			}
		}
		
		if( counter == 26 )	// If alphabet has not been used, counter would reach 26 = number of times the loop can run
		{
			PassKey_temp[counter_temp] = PassKey[i];
			counter_temp++;
			for(int j = 0; j < 26; j++)
			{
				if( used_alpha_list[j] == '\0' )
				{
					used_alpha_list[j] = PassKey[i];	// Adding the alphabet to used_alpha_list
					break;
				}
			}
		}
	}
	strcpy(PassKey, PassKey_temp);
	
	
	for(int i = 0; i < 26; i++)
	{
		Alpha[i] = 'a' + i;	// Filling up alphabet list
	}
	
	for(int i = 0; i < strlen( PassKey ); i++)
	{
		E_Alpha[i] = PassKey[i];	// List of Encrypted Alphabets starts with the alphabets in PassKey
	}
	
	// Filling up Encrypted Alphabet list
	char alphabet = 'a';
	for( int i = strlen( PassKey ); i < 26; i++)
	{
		counter = 0;
		for( int k = 0; k < strlen( PassKey ); k++)
		{
			if( alphabet == PassKey[k])	// Checking if the alphabet is already stored in the list
			{
				counter = 1;
				break;
			}
		}
		
		if( counter != 1)
		{
			E_Alpha[i] = alphabet;	// Add alphabet to list if it is not already present
		}
		else
		{
			i -= 1;	// As this position is not yet filled, subtract 1 from i and the loop will add 1 to it in the end, thus net change in i = 0
		}
		
		alphabet++;	// Go on to the next alphabet
	}
	
	return;
}



char* CLOSE_RUN(char* output)
{
	if( strcmp( output, "**" ) != 0 )	// If an output parameter is given
	{
		// Writing the output in the appropriate location
		fstream fout;
		fout.open( output, ios::out | ios::trunc );
		
		if ( fout )	// If the location is valid
		{
			for(int i = 0; i < n_lines; i++)
			{
				fout.write( file[i], strlen( file[i] ) );
				fout<<endl;
			}	
		}
		else
		{
			cout << "\n\n:: HEADER FILE -------- Invalid Entry into Parameter ::\n\n";
		
			cout<<"## output location did not open\n";
		
			cout << "Press any key to terminate...\n";
			getch();
			exit(1);
		}
		
		fout.close();
	}
	else
	{
		// If there is no output parameter, return the output as a variable
		// Do note that data loss is possible if the input is too big!!! This is a limit of C++
		char file_temp[2000000];
		for( int i = 0; i < 2000000; i++)
		{
			file_temp[i] = '\0';	// Clearing the variable file_temp to remove junk from previous runs
		}
		
		for(int i = 0; i < n_lines; i++)
		{
			app_string( file_temp, file[i] );
			app_string( file_temp, "\n" );
		}
		
		return file_temp;
	}
	
	return "\0";
}

char* get_version_robot()
{
	char H_VER_R[4] = "2.0";	// Enter the Version of the Header File here
	
	return H_VER_R;
}

#endif ROBOT_H
