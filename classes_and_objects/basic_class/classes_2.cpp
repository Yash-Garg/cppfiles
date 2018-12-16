#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;

class tour {
	int tcode, adults, children, distance;
	float totalfare;

	void assignfare() {
		float cfare = 50, afare = 1500;
		if (distance < 1500)afare = afare - (afare / 4);
		totalfare = (children*cfare) + (adults*afare);
	}
public:
	tour() { tcode = children = adults = distance = totalfare = 0; }

	void entertour(){
		do{
			cout << "Enter tcode between 6-10: ";
			cin >> tcode;
			if (tcode < 6 || tcode>10)cout << "invalid Code" << endl;
		} while (tcode < 6 || tcode>10);
		cout << "Enter Children,Adults,Distance: ";
		cin >> children >> adults >> distance;
		assignfare();
	}
	void showtour(){
		cout << "tcode: " << tcode << endl;
		cout << "children: " << children << endl;
		cout << "adults: " << adults << endl;
		cout << "distance: " << distance << endl;
		cout << "TotalFare: " << totalfare << endl;
	}

}; //END OF CLASS DEFINITION

int main()
{
	tour a;
	a.entertour();
	a.showtour();
	system("pause");
    return 0;
}

