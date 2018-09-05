#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<math.h>
#include<string.h>
#include<conio.h>
using namespace std;

class Supply {											//Class declared
	private:											    //Declared members as private
		int code;
		char foodname[25];
		char sticker[25];
		char foodtype[25];
		void gettype();									//Declared members as public
	public:
		void foodin();
		void foodout();
}obj;                               //Class closed and object declared

void Supply :: gettype () {
		if (strcmpi(sticker , "GREEN")==0) {
			strcpy(foodtype , "Vegetarian");
		}
		else if (strcmpi(sticker , "YELLOW")==9) {
			strcpy(foodtype , "Contains Egg");
		}
		else if (strcmpi(sticker , "RED")==0) {
			strcpy(foodtype , "Non-Vegetarian");
		}
		else {
			Sleep(400);
			cout<<"\n"<<"##### Error ! Wrong input given. Program will now exit. #####";
			exit(0);									    //Exits the program immediately
		}
	}

void Supply :: foodin () {
	Sleep(500);
	cout<<"\n"<<"Enter the code : ";
	cin>>code;
	cin.ignore();
	cout<<"\n"<<"Enter the food name : ";
	gets(foodname);
	cout<<"\n"<<"Enter the sticker (Green/Yellow/Red) : ";
	cin.ignore();
	gets(sticker);
	gettype();
}

void Supply :: foodout () {
	Sleep(500);
	system("cls");
	cout<<"\n"<<"Code : "<<code;
	cout<<endl;
	cout<<"\n"<<"Food Name : ";
	puts(foodname);
	cout<<"\n"<<"Sticker : ";
	puts(sticker);
	cout<<"\n"<<"Food Type : ";
	puts(foodtype);
}

int main () {
	obj.foodin();
	obj.foodout();
	return 0;
}
