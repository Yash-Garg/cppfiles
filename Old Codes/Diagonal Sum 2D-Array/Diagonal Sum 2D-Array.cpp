#include<iostream>
#include<windows.h>
using namespace std;
int main () {
	
	int X [4][4],dsum1=0,dsum2=0;
	
    for (int a=0;a<4;++a)
	{
		for (int b=0;b<4;++b)
		{
			cout<<"Enter Element --> ";
			cin>>X [a][b];
			
			if(a==b)
                dsum1+=X[a][b];
			
			if(a+b==(4-1))
		        dsum2+=X[a][b];                
		}
	}
    	cout<<endl<<endl;
		for (int a=0;a<4;++a)
	{
		for (int b=0;b<4;++b)
		{
			cout<<X [a][b];
		}
	    	cout<<endl;
	}
	Sleep(1500);
	cout<<endl<<endl<<"The Sum Of 1st Diagonal Is "<<dsum1<<" !!";
	Sleep(1500);
	cout<<endl<<endl<<"The Sum Of 2nd Diagonal Is "<<dsum2<<" !!";
}
