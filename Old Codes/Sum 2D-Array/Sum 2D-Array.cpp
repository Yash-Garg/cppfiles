#include<iostream>
#include<string.h>
using namespace std;
int main () {
	
	int X [2] [3],sum=0;
	
    for (int a=0;a<2;++a)
	{
		for (int b=0;b<3;++b)
		{
			cout<<"Enter Element --> ";
			cin>>X [a] [b];
			sum = sum + X[a][b];
		}
	}
    	cout<<endl<<endl;
		for (int a=0;a<2;++a)
	{
		for (int b=0;b<3;++b)
		{
			cout<<X [a] [b];
		}
	    	cout<<endl;
	}
        cout<<endl<<endl<<"The Sum Of All Elements Is "<<sum;
	    return 0;
}
