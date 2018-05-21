#include<iostream>
#include<windows.h>
#include<math.h>
using namespace std;
int main () {
	int n,y,z;
	const int size = 20;
	float number[size];
	for(int i=0;i<size;i++)
	{
	    cout<<endl;
		Sleep(1000);
		cout<<" Enter The Number --> ";
		cin>>n;
		if(n%2==0)
		{
			Sleep(1500);
			cout<<" The Number "<<n<<" Is Even And Its Square Is "<<n*n;
		}
		else
		{
		    Sleep(1500);
		    cout<<" The Number "<<n<<" Is Odd And Its Cube Is "<<n*n*n;
        }
        
	}	
	return 0;
}
