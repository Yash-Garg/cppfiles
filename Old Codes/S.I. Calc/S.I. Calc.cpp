#include<iostream>
#include<math.h>
using namespace std;
int main(){
float p,r,t,si;
cout<<"Enter The Principle Amount = ";
cin>>p;
cout<<"Enter The Time Period = ";
cin>>t;
r = (t>10) ? 8:12;
si= (p*r*t)/100 ;
cout<<"The Simple Interest Is ";
cout<<si<<endl;
cout<<"Thanks For Calculating!!!";
return 0;
}

