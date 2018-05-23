#include<iostream>
#include<fstream>
#include<stdlib.h>
using namespace std;

int main () {
	int x;
	ifstream fin;
	fin.open("fin.txt", ios :: in);
	char name[30];
	fin.get(name , 30);
	cout<<name;
}
