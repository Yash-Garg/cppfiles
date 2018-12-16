#include <iostream>
using namespace std;
//Addition
float addition()
{
	float a,b,c;
		cout<<"enter the first value: ";
		cin>>a;
		cout<<"enter the second value: ";
		cin>>b;
		c=a+b;
		cout<<"the sum is: "<<c;
}
//Suntraction
float subtraction()
{
	float a,b,c;
		cout<<"enter the first value: ";
		cin>>a;
		cout<<"enter the second value: ";
		cin>>b;
		c=a-b;
		cout<<"the difference is: "<<c;
}
//Multiplication
float multiplication()
{
	float a,b,c;
		cout<<"enter the first value: ";
		cin>>a;
		cout<<"enter the second value: ";
		cin>>b;
		c=a*b;
		cout<<"the product is: "<<c;
}
//Division
float division()
{
	float a,b,c;
		cout<<"enter the divident: ";
		cin>>a;
		cout<<"enter the divisor: ";
		cin>>b;
		c=a/b;
		cout<<"the quotient is: "<<c;
}
//Main program
int main() 
{	
    cout<< "This program deals with basic operations."<<endl;
    int choice;
    cout<< "what operation do you want to perform:- \n 1.Addition \n 2.Subtraction \n 3.Multiplication \n 4.Division"<<endl;
    cout<< "what do you prefer: ";
    cin>>choice;
    cout<<endl <<endl;

	if (choice==1){
    	cout<<"You have selected addition. Follow the instruction below."<<endl;
		addition();
    	}
	else if(choice==2){
    	 cout<<"You have selected subtraction. Follow the instruction below."<<endl;
		 subtraction();
		}
	else if(choice==3){
		  cout<<"You have selected multiplication. Follow the instruction below."<<endl;
		  multiplication();
	    }	
	else if(choice==4){
		  cout<<"You have selected division. Follow the instruction below."<<endl;
		  division();
	    }
	else {
		cout<<"Wrong choice entered. Restart the program please.";
	}

return 0;
}
