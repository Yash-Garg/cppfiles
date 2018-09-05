#include<iostream>
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<windows.h>

using namespace std;

class Worker {
	private:
		int wno;
		int x;
		char wname[25];
		float hrwrk;
		float wgrate;
		float totwage;
		void calcwg() {
			x = hrwrk*wgrate;
		}
	public:
		void in_data();
		void out_data();
}init;

void Worker :: in_data () {
	cout<<"\n"<<"Enter the worker number : ";
	cin>>wno;
	cin.ignore();
	cout<<"\n"<<"Enter the worker name : ";
	gets(wname);
	cout<<"\n"<<"Enter the number of hours worked : ";
	cin>>hrwrk;
	cout<<"\n"<<"Enter the wage rate per hour : ";
	cin>>wgrate;
	calcwg();
}

void Worker :: out_data () {
	Sleep(500);
	system("cls");
	cout<<"\n"<<"Worker Number : "<<wno;
	cout<<"\n"<<"Worker Name : "<<wname;
	cout<<"\n"<<"Number Of Hours Worked : "<<hrwrk;
	cout<<"\n"<<"Wage Rate Per Hour : "<<wgrate;
	cout<<"\n"<<"Calculated Wage : "<<x;
}

int main () {
	init.in_data();
	init.out_data();
}
