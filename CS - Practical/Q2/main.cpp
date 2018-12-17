#include<iostream>
using namespace std;

int takeinput() {
	int size;
	int rowsum;
	cout<<"\nEnter no. of rows: ";
	cin>>size;
	float arr[size][size];
	cout<<endl<<"\nEnter the elements of the array ( row wise ): ";
	cout<<endl;
	for( int i=0 ; i<size ; i++ ) {
		cout<<"\nEnter elements of row "<< (i+1) <<" : "<<endl;
		for( int j=0; j<size ; j++ ) {
			cin>>arr[i][j];
		} 
	}
	system("pause");
	system("cls");
	cout<<"\nThe array given is: ";
	cout<<endl;
	for( int i=0 ; i<size ; i++ ) {
		for( int j=0; j<size ; j++ ) {
			cout<<arr[i][j]<<" ";	
		}
		cout<<endl;
	}
	cout<<endl;
	for ( int i=0; i<size; i++ ) {
		for ( int j=0; j<size; j++ ) {
			rowsum+=arr[i][j];
			
		}
		cout<<endl<<"Sum of row "<<i+1<<": "<<rowsum<<endl;
		rowsum=0;
	}
}

int main() {
	takeinput();
	return 0;
}
