#include<iostream>
using namespace std;
int main () {
int a,b,c,d,Sum;
cout<<"Enter The Three Digit Number = ";
cin>>d;
a=d/100;
b=(d%100)/10;
c=(d%100)%10;
Sum = a + b + c ;
cout<<"The Sum Of The Digits Is ";
cout<<Sum;
return 0;
}
