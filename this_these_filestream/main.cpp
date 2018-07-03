#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<windows.h>
using namespace std;

int main () {
    ifstream fin;
    fin.open("new.txt", ios :: in);
    char x[30];
    int y=0, z=0;
    while ( !fin.eof()) {
        fin>>x;
        if(strcmpi(x , "this")==0) {
            y++;
        }
        if(strcmpi(x , "these")==0) {
            z++;
        }
    }
    cout<<"\nCount of 'This' is "<<y;
    cout<<"\nCount of 'These' is "<<z;
    fin.close();
}
