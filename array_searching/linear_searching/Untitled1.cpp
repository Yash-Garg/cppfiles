#include <iostream>

using namespace std;

int main(){
	int arr[20], size, item;
	int flag = 0;
	cout<<"Enter number of elements in the array (max 20): ";
	cin>>size;
	cout<<endl<<"Enter the elements of the array: ";
	for( int i=0 ; i<size ; i++ ){
		cin>>arr[i];	
	}
	cout<<endl<<"Enter the element to search for: ";
	cin>>item;
	for( int i=0 ; i<size ; i++ ){
		if(item==arr[i]){
			cout<<"Element found at index: "<< (i+1) <<endl;
			flag = 1;
		}
	}
	if ( flag == 1){
		
	}
	else{
		cout<<"The element does not exist in the array."<<endl<<endl;
		cout<<"Aborting Program.";
		exit(0);	
	}	
	return 0;
}
