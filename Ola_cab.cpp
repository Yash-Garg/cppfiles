#include<iostream>
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
#include<windows.h>
#include<conio.h>
using namespace std;
char response;
char pwd[8];
int i=0;
class Ola {
    private:
        int cabno;
        char from [30];
        char to [30];
        char type;
        float distance;
        float fare;
    public:
        Ola () {
            type = 'O';
            fare = 500;
        }
        void calcfare ();
        void seq ();
        void re ();
        void pass ();
        void checkpass ();
        void countdown ();
        void beautifystart () {
        	Sleep(1000);
        	cout<<"\n"<<"######### WELCOME TO OLA CAB SERVICE #########";
		}
        void beautifyend () {
        	Sleep(1000);
        	cout<<endl;
        	cout<<"\n"<<"##############################################";
        	cout<<endl;
        }
        void allocate () {
        	Sleep(1000);
        	cout<<endl;
            cout<<"\n"<<"Enter The Cab Number : ";
            cin>>cabno;
            cin.ignore();
            cout<<"\n"<<"Enter The Starting Location : ";
            gets(from);
            cout<<"\n"<<"Enter The Final Location : ";
            gets(to);
    		cout<<"\n"<<"Enter The Distance (In KMs): ";
    		cin>>distance;
            cout<<"\n"<<"Enter The Cab Type (O/E/L) : ";
            cin>>type;
        }
        void show () {
        	Sleep(1000);
            cout<<"\n"<<"################ OUTPUT BELOW ################"<<endl;
            Sleep(500);
			cout<<"\n"<<"Cab Number : "<<cabno;
			Sleep(500);
            cout<<"\n"<<"Starting Location : "<<from;
            Sleep(500);
			cout<<"\n"<<"Final Location : "<<to;
            Sleep(500);
			cout<<"\n"<<"Cab Type : "<<type;
            Sleep(500);
			cout<<"\n"<<"Distance : "<<distance;
            Sleep(500);
			cout<<"\n"<<"Your Total Fare : "<<fare;
			Sleep(1500);
			cout<<endl<<endl<<"Booking Confirmed !";
        }
        
}init;

void Ola :: countdown () {
		Sleep(500);
		cout<<endl<<endl<<"5.....";
		Sleep(500);
		cout<<"4....";
		Sleep(500);
		cout<<"3...";
		Sleep(500);
		cout<<"2..";
		Sleep(500);
		cout<<"1.";
}
void Ola :: calcfare () {
    if (type == 'O' || type == 'o') {
        fare = 15*distance;
    }
    else if (type == 'E' || type == 'e') {
        fare = 20*distance;
    }
    else if (type == 'L' || type == 'l') {
        fare = 24*distance;
    }
    else {
        cout<<"\n"<<"######## Error ! Wrong Input Given !! ########";
        exit(0);
    }
}

void Ola :: seq () {
	beautifystart();
	allocate();
	calcfare();
	show();
	beautifyend();
}

void Ola :: re () {
	cout<<"\n"<<"Do You Want To Book Another Cab ?? : ";
	cin>>response;
	if (response == 'Y' || response == 'y') {
		system("cls");
		init.seq();
		cout<<endl<<"THANKS FOR USING OLA #MakeInIndia !!";
		cout<<endl;
	}
	else if (response == 'N' || response == 'n') {
		cout<<endl<<"THANKS FOR USING OLA #MakeInIndia !!";
		cout<<endl;
		exit(0);
	}
	else {
		cout<<"\n"<<"AW SNAP !! WRONG INPUT !!";
		cout<<endl;
		exit(0);
	}
}

void Ola :: pass () {
	cout<<"Enter The Password To Run The Program : ";
	while(i<8) {
		pwd[i]=getch();
		if (pwd[i]==8 && i>0) {
			cout<<"\b \b";
			--i;
		}
		else if	(pwd[i]==13) {
			goto end;
		}
		else if (pwd[i]!=8 && pwd[i]!=13) {
			cout<<"*";
			++i;
		}
	}
	end:
	if (strcmp(pwd , "abcd1234")==0) {
		cout<<endl<<"Access Granted !! Program Will Run In 5 Seconds !!";
		countdown();
		cout<<endl;
		Sleep(200);
		system("cls");
		seq();
		re();
	}
	else {
	cout<<endl<<"Acess Denied !! Program Will Exit in 5 Seconds !!";
	countdown();
	cout<<endl;
	exit(0);
	}
}

int main () {
	init.pass();
}
