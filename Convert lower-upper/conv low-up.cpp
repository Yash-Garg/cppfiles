#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
using namespace std;
char name[30];
ifstream fin;
int i;

void convert () { 									//Loop for converting Upper to lower and vice versa
	for (i=0;i<=strlen(name);i++) {
		if (islower(name[i])) {
			name[i] = (toupper(name[i]));
		}
		else if (isupper(name[i])) {
			name[i] = (tolower(name[i]));
		}
	}
}

int main () {
	fin.open("main.txt" , ios :: in);				//Gets input from main.txt
	fin.getline(name , 30);
	convert();
	cout<<"Converted text : ";
	puts(name);
	fin.close();
	ofstream fout("convert.txt" , ios :: out);		//Gives output to convert.txt
	fout<<name;
	fout.close();
	return 0;
}
