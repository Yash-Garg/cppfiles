#include<iostream>
#include<fstream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

using namespace std;
ifstream fin;

void count () {
	fin.open("para.txt", ios :: in);
	char x;
	int y=1;
	while (!fin.eof()) {
		fin.get(x);
		if((isdigit(x))==0) {
			++y;
		}
	}
	cout<<"\nNumber of digits present are "<<y<<" !";
	fin.close();
}

int main () {
	count();
	return 0;
}
