#include<iostream>
#include<string.h>
using namespace std;
int main () {
	
	int X [2] [3];
{   for (int a=0;a<2;++a)
	{
		for (int b=0;b<3;++b)
		{
			cout<<"Enter Element --> ";
			cin>>X [a] [b];
		}
	}
	
}

{	for (int a=0;a<2;++a)
	{
		for (int b=0;b<3;++b)
		{
			cout<<X [a] [b];
		}
	    	cout<<endl;
	}
}
        return 0;
}
