#include<iostream>
using namespace std;
int fact(int a)
{
	int i,b;
	
	for(i=1;i<=a;i++){
	
	b = b*i;
}
	cout<<"The value for "<<a<<" factorial is: "<<b;
	return 0; 
}
int main()
{
	int s;
	cout<<"give the value of number to be operated: "<<endl;
	cin>>s;
	fact(s);
	return 0;
}
