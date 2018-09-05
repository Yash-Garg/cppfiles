#include<iostream>
#include<stdlib.h>
using namespace std;

class Flight {
    private:
    int flightnumber;
    char destination[50];
    float distance;
    float fuel;    
    void calfuel();
    public:
    void feed_info();
    int show_fuel();
};

//.......Member Function Definitions Below......

void Flight :: calfuel() {
    if (distance<=1000) {
        fuel=500;
    }
    else if (distance>1000 && distance<=2000) {
        fuel=1100;
    }
    else {
        fuel=2200;
    }
}

void Flight :: feed_info() {
    cout<<"\n"<<"Enter flight number : ";
    cin>>flightnumber;
    cin.ignore();
    cout<<"\n"<<"Enter destination : ";
    gets(destination);
    cout<<"\n"<<"Enter distance : ";
    cin>>distance;
    calfuel();
}

int Flight :: show_fuel() {
    cout<<"\n"<<"Flight Number : "<<flightnumber;
    cout<<"\n"<<"Destination : "<<destination;
    cout<<"\n"<<"Distance : "<<distance;
    cout<<"\n"<<"Fuel : "<<fuel;
}

int main () {
    Flight init;          //Object Declaration For Class Flight
    init.feed_info();
    init.show_fuel();
    return 0;
}