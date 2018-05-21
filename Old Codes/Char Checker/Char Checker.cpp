#include<iostream>
#include<windows.h>
using namespace std;
    
	int main () {
	char a,again = 'y';
{
	while (again == 'Y' || again == 'y'){
		{
	cout<<endl;
	cout<<"Enter The Character --> ";
	cin>>a;
	if (a>=65 && a<=90 ){
		Sleep(1000);
		cout<<endl;
		cout<<"You Entered An UpperCase Alphabet"<<endl;
	}
		
	else if (a>=97 && a<=122) {
		Sleep(1000);
		cout<<endl;
		cout<<"You Entered An LowerCase Alphabet"<<endl;
	}
	else if (a>=48 && a<=57){
		Sleep(1000);
		cout<<endl;
		cout<<"You Entered A Number"<<endl;
	}
	else {
    	Sleep(1000);
		cout<<endl;
		cout<<"You Entered A Special Character"<<endl;
    } 	
    }   
		Sleep(1000);
		cout<<endl;
		cout<<"Want To Try Again (y/n) --> ";
		cin>>again;
}
}
	return 0;	
}

