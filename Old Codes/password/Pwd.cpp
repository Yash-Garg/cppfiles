#include<iostream>
#include<fstream>
#include <conio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>
using namespace std;
int main()
{
	Main:
	char a;
	char name[30], pwd[100];
	fstream fin,fout;
	cout<<"Enter the name: ";
	gets(name);
    cout<<"Enter the Password: ";
    //cout<<endl;
    int i=0;
    while(i<100)
    {
    	pwd[i]=getch();
    	if(pwd[i]==13)
    	{
    		pwd[i]='\0';
    		break;
		}
		else
		{
			if(pwd[i]==8)
			{
				if(i<=0)
				{
					i=-1;
					pwd[i]='\0';
				}
				else
				{
					cout<<"\b \b";
					pwd[i]='\0';
					i-=2;
				}
			}
			else
			{
				cout<<"*";
			}
		}
		i++;
	}
	//cout<<endl;
	//puts(pwd);
	cout<<endl;
    fout.open("pwd.txt", ios::out | ios::ate | ios::app);
    fout<<"Name: ";
    fout.write(name, strlen(name));
    fout<<endl;
    fout<<"Password: ";
    fout<<endl;
    fout.write(pwd, strlen(pwd));
    cout<<"Wanna go again?? (y/n): ";
    a=getch();
    //cout<<endl;
    if(a=='y')
    {
    	fout<<endl;
    	cout<<"Y";
    	Sleep(100);
    	system("cls");
    	goto Main;
	}
	else
	{
		cout<<"N";
		return 0;
	}
}
