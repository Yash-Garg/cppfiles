#include<iostream>
#include<math.h>
using namespace std;
int main () {
int n,x,t1=0,t2=1,nextTerm;
cout<<"Enter The Number Of Terms --> ";
cin>>n;
cout<<t1<<endl<<t2<<endl;
for (x = 1; x<=n ; ++x) {
    nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
        cout<<nextTerm<<endl;
    }
return 0;
}

