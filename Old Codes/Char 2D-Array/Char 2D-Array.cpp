#include<iostream>
#include<string.h>
using namespace std;
int main () {
	
	char X [2] [5];
{   for (int a=0;a<2;++a)
	{
		for (int b=0;b<5;++b)
		{
			cout<<"Enter Element --> ";
			cin>>X [a] [b];
		}
	}
	
}
    cout<<endl<<endl;
{	for (int a=0;a<2;++a)
	{
		for (int b=0;b<5;++b)
		{
			cout<<X [a] [b];
		}
	    	cout<<endl;
	}
}
        return 0;
}
