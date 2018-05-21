#include<iostream>
#include<windows.h>
using namespace std;
int main () {
	char x,l;
	cout<<"Enter The LowerCase Letter --> ";
	cin>>l;
	x = l - 32;
	cout<<endl<<endl;
	Sleep(1500);
	cout<<"The Upper Case Letter For "<<l<<" Is "<<x<<endl<<endl;
	Sleep(1500);
	cout<<"Thank You For The Input :D ";
	return 0;
}
