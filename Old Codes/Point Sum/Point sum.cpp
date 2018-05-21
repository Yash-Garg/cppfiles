#include<iostream>
#include<stdio.h>
using namespace std;

struct point{
int x,y;
};

    int main () {
    point p1,p2,p3;
    cout<<endl<<endl;
    cout<<"Enter X Co-Ordinate of Point 1  --> ";
    cin>>p1.x;
    cout<<endl<<endl;
    cout<<"Enter Y Co-Ordinate of Point 1  --> ";
    cin>>p1.y;
    cout<<endl<<endl;
    cout<<"Point 1 : "<<p1.x<<","<<p1.y;
    cout<<endl;
    cout<<endl<<endl;
    cout<<"Enter X Co-Ordinate of Point 2  --> ";
    cin>>p2.x;
    cout<<endl<<endl;
    cout<<"Enter Y Co-Ordinate of Point 2  --> ";
    cin>>p2.y;
    cout<<endl<<endl;
    cout<<"Point 2 : "<<p2.x<<","<<p2.y;
    cout<<endl;
    p3.x = p1.x + p2.x;
    p3.y = p1.y + p2.y;
    cout<<endl<<endl;
    cout<<"Co-Ordinates Of Point 3 Are --> "<<p3.x<<","<<p3.y;
    cout<<endl<<endl;
    return 0;
}
