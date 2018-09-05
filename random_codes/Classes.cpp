#include<iostream>
#include<stdlib.h>
using namespace std;

class ITEM  {
    int itemcode[50];
    float it_price[50];
    public :
    void initialize (void);
    float largest (void);
    float sum (void);
    void display_items (void);
};
//........Member Function definitions below.......
void ITEM :: initialize (void) {
    for (int i=0;i<50;i++) {
        cout<<"\n"<<"Item No : "<<(i+1);
        cout<<"\n"<<"Enter item code : ";
        cin>>itemcode[i];
        cout<<"\n"<<"Enter item price : ";
        cin>>it_price[i];
        cout<<"\n";
    }
}

float ITEM :: largest (void) {
    float large = it_price[0];
    for (int i=0;i<50;i++) {
        if (large<it_price[i])
            large = it_price[i];
    }
    return large;
}

float ITEM :: sum (void) {
    float sum = 0;
    for (int i=0;i<50;i++) {
        sum += it_price[i];
    }
    return sum;
}

void ITEM :: display_items (void) {
    cout<<"\nCode Price\n";
    for (int i=0;i<50;i++) {
        cout<<"\n"<<itemcode[i];
        cout<<"\n"<<it_price[i];
    }
    cout<<"\n";
}

int main () {
    ITEM order;                          //Declared object
    order.initialize();                  //Initialize arrays
    float total,biggest;
    int ch=0;
    do {
        cout<<"\nMain Menu\n";
        cout<<"\n1.Display largest price. ";
        cout<<"\n2.Display sum of prices. ";
        cout<<"\n3.Display item list. ";
        cout<<"\nEnter your choice (1-3): ";
        cin>>ch;
        switch (ch) {
            case 1 : biggest = order.largest();
                     cout<<"The largest price is "<<biggest<<"\n";
                     break;
            case 2 : total = order.sum();
                     cout<<"The sum of the prices is "<<total<<"\n";
                     break;
            case 3 : order.display_items();
                     break;
            default: cout<<"\nWrong Choice!!\n";
                     break; 
        }                                  //End of switch case 
    } while (ch>=1 && ch<=3);
    return 0;
}
