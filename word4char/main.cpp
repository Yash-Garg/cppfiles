#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
using namespace std;

ifstream fin;

void word4char () {
    char x[50];
    fin.open("fun.txt", ios :: in);
    while (!fin.eof()) {
        fin>>x;
        if(strlen(x)==4){
            cout<<x<<" "<<endl;
        }
        fin.close();
    }
}

int main () {
word4char();
}
