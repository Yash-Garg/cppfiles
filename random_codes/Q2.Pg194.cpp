#include<iostream>
#include<stdlib.h>
using namespace std;

class Item {
    private:
    int trainnumber;
    char destination[50];
    float distance;
    float fuel;
    void CALFUEL();
    public:
    void FEED_INFO();
    int SHOW_INFO();
};

//.......Member Function Definitions Below......

void Item :: CALFUEL() {
    if (distance<=1500) {
        fuel=250;
    }
    else if (distance>1500 && distance<=3000) {
        fuel=1000;
    }
    else {
        fuel=2500;
    }
}

void Item :: FEED_INFO() {
    cout<<"\n"<<"Enter flight number : ";
    cin>>trainnumber;
    cin.ignore();
    cout<<"\n"<<"Enter destination : ";
    gets(destination);
    cout<<"\n"<<"Enter distance : ";
    cin>>distance;
    CALFUEL();
}

int Item :: SHOW_INFO() {
    cout<<"\n"<<"Train Number : "<<trainnumber;
    cout<<"\n"<<"Destination : "<<destination;
    cout<<"\n"<<"Distance : "<<distance;
    cout<<"\n"<<"Fuel : "<<fuel;
}

int main () {
    Item init;          //Object Declaration For Class Flight
    init.FEED_INFO();
    init.show_fuel();
    return 0;
}