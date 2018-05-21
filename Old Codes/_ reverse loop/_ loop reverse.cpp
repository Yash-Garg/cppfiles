#include<iostream>
int main () {
	using namespace std;
	int i,j,n,z;
	cout<<"Enter The Number Till You Want The Series ---> ";
	cin>>n;
	for (i=n ; i>=1 ; --i)
	{
		char z = 65;
		cout<<endl<<endl;
        for (j=i ; j>=1 ; --j)
        {
            cout<<"&";
        }
	}
	return 0;

}
