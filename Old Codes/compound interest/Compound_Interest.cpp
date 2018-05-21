#include<iostream>
#include<math.h>
using namespace std;
   
    int main() {     
	
	float interest,deposit,time,ci;  
    cout<<"Welcome to our Bank"<<endl<<endl;
    cout<<"Enter Deposit Money ---> ";
	cin>>deposit;
	cout<<"Enter Time Period ---> ";
	cin>>time;  
   
    if (deposit>2000 && time>=2)
	{  
	interest = 0.05;
	}
	
	else if (deposit >=2000 && deposit<6000 && time>=2)
	{
		interest = 0.07;
	}
	else if(deposit>6000 && time>=1)
	 {
	 	interest = 0.08;
	 }
	 else if (time>=5)
	 {
	 	interest =0.1; 
	 }
	 else
	 {
	 	interest = 0.03;
	 }
     ci = deposit*(pow((1+interest),time));
     cout<<"Balance In Your Bank Account Is ----> "<<ci<<endl;
		return 0;
	}
