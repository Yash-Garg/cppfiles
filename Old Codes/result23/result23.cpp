#include<iostream>
int main()
{
	using namespace std;
	long number=5572331,result=0;
	do
	{ result*=10;
	int digit=number%10;
	result+=digit;
	number/=10;
	} while(number>0);
	cout<<"output="<<result<<endl;

	return 0;

}
