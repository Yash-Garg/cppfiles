#include<iostream>
#include<stdio.h>
using namespace std;

    struct addr {
        int houseno;
        char area[26];
        char city[26];
        char state[26];
    };
    struct emp{
        int empno;
        char name[26];
        char desig[16];
        addr address;
        float basicsal;
        }worker;
        emp sales_emp[10];
        void display(int a);
        void enter(void);

    int main() {
        int eno,i;
        char ch;
        enter();
        do {
            cout<<"\n"<<"Enter Employee Mo. Whose Information Is To Be Displayed : "<<"\n";
            cin>>eno;
            int flag = 0;
            for (i=0;i<=10;++i)
            {
                if(sales_emp[i].empno==eno)
                {
                    display(i);flag=1;break;
                }
            }

            if (!flag)
            {
                cout<<"\n"<<"Sorry! No Data Found."<<"\n";
            }
                cout<<"\n"<<"Want To Search More ?? "<<"\n";
                cin>>ch;
            }   while(ch=='y');

        return 0;
            }

        void enter(void)
            {
            for (int i=0;i<10;i++)
            {
                cout<<"\n"<<"Employee No : "<<"\n";
                cin>>sales_emp[i].empno;
                cin.ignore();
                cout<<"\n"<<"Employee Name : "<<"\n ";
                gets(sales_emp[i].name);
                cout<<"\n"<<"Designation : "<<"\n";
                gets(sales_emp[i].desig);
                cout<<"\n"<<"Address "<<"\n";
                cout<<"\n"<<"House No. : "<<"\n";
                cin>>sales_emp[i].address.houseno;
                cin.ignore();
                cout<<"\n"<<"Area : "<<"\n";
                gets(sales_emp[i].address.area);
                cout<<"\n"<<"City : "<<"\n";
                gets(sales_emp[i].address.city);
                cout<<"\n"<<"State : "<<"\n";
                gets(sales_emp[i].address.state);
                cout<<"\n"<<"Basic Salary : "<<"\n";
                cin>>sales_emp[i].basicsal;
                cin.ignore();
            }
                return ;
            }

        void display(int a)
            {
                cout<<"\n"<<"Employee Data"<<"\n";
                cout<<"\n"<<"Employee No. : ";
                cout<<"\n"<<"Name : ";
                cout.write(sales_emp[a].name,26);
                cout<<"\n"<<"Designation : ";
                cout.write(sales_emp[a].desig,16);
                cout<<"\n"<<"Address : "<<sales_emp[a].address.houseno;
                cout.write(sales_emp[a].address.area,26);
                cout.write(sales_emp[a].address.city,26);
                cout.write(sales_emp[a].address.state,26);
                cout<<"\n"<<"Basic Salary : ";
                cout<<sales_emp[a].basicsal<<"\n";
                cout<<"\n";
                return;
            }
