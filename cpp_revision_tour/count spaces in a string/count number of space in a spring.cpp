#include<iostream>
#include<stdio.h>
using namespace std ;
int main()
{  char str[80] ;
int i, count = 0 ;
cout << "\n enter any string(max.80 chars) :" ;
gets(str) ;
for(i = 0 ; str[i] !='\0' ; i++)
if(str[i] == ' ')
       count++ ;
cout<<"\n number of spaces in the given string are :"<<count ;
return 0 ;
}
