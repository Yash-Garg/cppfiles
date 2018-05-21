#include<iostream>               //For Input Output Functions
#include<math.h>                   //For Mathematical Operations
using namespace std;
int main () {
int Answer,x,n;                         //Declared Integers
cout<<"Enter The Value Of x = ";
cin>>x;
cout<<"Enter The Value Of n = ";
cin>>n;
Answer = pow(x,n);
cout<<"The Answer Is ";
cout<<Answer;
return 0;
}
