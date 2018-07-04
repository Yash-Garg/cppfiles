#include<iostream>
#include<fstream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

using namespace std;
ifstream fin;

void check () {
    fin.open("main.txt", ios :: in);
    char x[30];
    int y=0, z=0;
    while ( !fin.eof()) {
        fin>>x;
        if(strcmpi(x , "me")==0) {
            y++;
        }
        if(strcmpi(x , "my")==0) {
            z++;
        }
    }
    cout<<"\nCount of 'Me' is "<<y;
    cout<<"\nCount of 'My' is "<<z;
    fin.close();
}
}
