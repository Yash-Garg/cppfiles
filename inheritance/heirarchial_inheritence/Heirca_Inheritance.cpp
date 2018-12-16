#include <iostream>
#include <conio.h>
using namespace std;
class A				//Base class
{
public: 
	int a, b;
	void getnumber()
	{	cout << "\nEnter Number:: \t";
		cin >> a;}
};
class B : public A       //derived class 1
{
public:
	void square()
	{
	getnumber();
	cout << "\n\tThe Square of the number ::\t" << (a*a);
	cout << "\n\n-------------------------------";
	}
};
class C :public A      //derived class 2
{
public:void cube() {
	getnumber();
	cout << "\n\tThe Cube of the number ::\t" << (a*a*a);
	cout << "\n\n-------------------------------";
}
};

int main()
{
	B b1;
	b1.square();
	C c1;
	c1.cube();
	system("pause");
	return 0;
}

