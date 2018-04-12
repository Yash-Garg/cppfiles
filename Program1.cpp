#include<iostream>
#include<stdlib.h>
using namespace std;
int i;

class train {               //Class Named train
    private:
    int TrainNumber;
    char Destination[50];
    float Distance;
    float fuel;
    int CALFUEL() {        //Inline Function CALFUEL
        if (i<=1500) {
            fuel = 250;
        }
        else if (i>1500 && i<=3000) {
            fuel = 1000;
        }
        else {
            fuel = 2500;
        }
    }
    public:
    void FEED_INFO() {
        cout<<"\n"<<"Enter The Train Number : ";
        cin>>TrainNumber;
        cout<<"\n"<<"Enter The Destination : ";
        cin>>Destination;
        cout<<"\n"<<"Enter Distance : ";
        cin>>Distance;
        CALFUEL();          //Called Function CALFUEL
    }
    void SHOWINFO() {
        cout<<"\n"<<"Train Number : "<<TrainNumber;
        cout<<"\n"<<"Destination : "<<Destination;
        cout<<"\n"<<"Distance : "<<Distance;
        cout<<"\n"<<"Fuel : "<<fuel;
    }
}init;                      //Class Object Declared

int main () {
    init.FEED_INFO();
    init.SHOWINFO();
    return 0;
}
