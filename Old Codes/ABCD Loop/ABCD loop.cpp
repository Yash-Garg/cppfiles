#include<iostream>
int main () {
	using namespace std;
	int i,j,n,z;
	cout<<"Enter The Number Till You Want The Series ---> ";
	cin>>n;
	for (i=1 ; i<=n ; ++i )
	{
		char z = 65;
		cout<<endl<<endl;
        for (j=1 ; j<=i ; ++j)
        {
            cout<<z++;
        }
	}
	return 0;

}
