#include <iostream>

using namespace std;

int main(){
	int size;
	int l_sum=0, r_sum=0;
	cout<<"Enter no. of rows of the square matrix: ";
	cin>>size;
	int matrix[size][size];
	cout<<endl<<endl<<"Enter the elements of the array ( row wise ):-"<<endl<<endl;
	for( int i=0 ; i<size ; i++ ){
		cout<<"Enter elements of row "<< (i+1) <<" : "<<endl;
		for( int j=0; j<size ; j++ ){
			cin>>matrix[i][j];
		}
	}
	for( int i=0, j=0 ; i<size, j<size ; i++, j++ ){
		l_sum+=matrix[i][j];
	}
	for( int i=0, j=(size-1) ; i<size, j>=0 ; i++, j-- ){
	//	cout<<matrix[i][j]<<" ";	ERROR HANDLING
		r_sum+=matrix[i][j];
	}	
	cout<<"The matrix given is:-"<<endl;
	for( int i=0 ; i<size ; i++ ){
		
		for( int j=0; j<size ; j++ ){
			cout<<matrix[i][j]<<" ";	
		}
		cout<<endl;
	}
	cout<<endl<<endl;
	cout<<"Sum of element of left diagonal: "<<l_sum<<endl;
	cout<<"Sum of element of right diagonal: "<<r_sum;
	return 0;
}
