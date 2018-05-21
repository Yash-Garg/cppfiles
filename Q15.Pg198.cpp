#include<iostream>
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<windows.h>

using namespace std;

class Worker {
	private:
		int wno;
		char wname[25];
		float hrwrk;
		float wgrate;
		float totwage;
		void calcwg() {
			int x = hrwrk*wgrate;
			cout<<x;
		}
	public:
		void in_data();
		void out_data();
}init;

void Worker :: in_data () {
	cout<<"\n"<<"Enter the worker number : ";
	cin>>wno;
	cout<<"\n"<<"Enter the worker name : ";
	gets(wname);
	cout<<"\n"<<"Enter the number of hours worked : ";
	cin>>hrwrk;
	cout<<"\n"<<"Enter the wage rate per hour : ";
	cin>>wgrate;
	calcwg();
}

int main () {
	init.in_data();
}
