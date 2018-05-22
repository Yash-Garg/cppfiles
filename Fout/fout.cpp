#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<windows.h>
using namespace std;

int main () {
	int x;
	ofstream fout("fout.txt", ios :: out);
	char name[30];
	cout<<"\n"<<"Enter Your Name : ";
	gets(name);
	fout<<name;
	fout.close();
}
