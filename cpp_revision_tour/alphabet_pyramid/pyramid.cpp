#include <iostream>
#include <stdlib.h>
using namespace std;
int main() {
char a;
int n, b=1, d, x=10, y=10, e, z;
cout<<"Enter the number of Stairs to be produced: ";
cin>>n;
z=n;
while (x>0) {
    cout<<endl;
    x--;
}
    while (n>0) {
        a='A';
        n--;
        d=b;
        e=z;
            while (b>0) {
                while (z>0) {
                    cout<<" ";
                    z--;
                }
                cout<<a<<" ";
                a=a+1;
                b--;
            }
    cout<<endl;
    b=d;
    b++;
    z=e;
    z--;
    }
while (y>0) {
    cout<<endl;
    y--;
}
return 0;
}
