#include<iostream>
#include<fstream>
#include<stdio.h>
#include<windows.h>
using namespace std;

ofstream fout;													// Object of output stream
ifstream fin;													// Object of input stream

class STOCK {
	private:
		int itno;
		char ITEM[10];
	public:
		void getit();											// To input the details
		void showit();											// To display the details on screen
} obj;

void STOCK :: getit () {
	cout<<"\nEnter item number -> ";
	cin>>itno;
	cout<<"\nEnter item name -> ";
	cin.ignore();
	gets(ITEM);
}

void STOCK :: showit () {
	cout<<"\nItem Number -> "<<itno;
	cout<<"\nItem Name -> ";
	puts(ITEM);
}

int main() {
	obj.getit();
	system("pause");
	system("cls");												// Clears the console window
	Sleep(1000);												// Adds a delay of 1 second
	fout.open("main.dat", ios::out | ios::binary);				// Creates a binary file
	fout.write((char*) &obj, sizeof(obj));
	fout.close();
	fin.read((char*) &obj, sizeof(obj));
	obj.showit();
	fin.close();
	return 0;
}
