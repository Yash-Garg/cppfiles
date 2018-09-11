#include <iostream>
#include <fstream>
#include <windows.h>
#include <string.h>
using namespace std;

int i;
ofstream fout;
ifstream fin;
int count;

class STOCK {
	private:
		int itno;
		char item[10];
	public:
		void getit();
		void showit();
		int retitem () {
			return itno;
		}
};

void STOCK :: getit () {
	cout<<"\nEnter item number: ";
	cin>>itno;
	cin.ignore();
	cout<<"\nEnter item name: ";
	cin.get(item, 10);
	cin.ignore();
}

void STOCK :: showit () {
	cout<<"\nItem number: ";
	cout<<itno;
	cout<<"\nItem name: ";
	cout<<item;
}

int main () {
	system("color 03");
	STOCK obj[3];
	fout.open( "item.dat", ios::out | ios::binary );
	fin.open( "item.dat", ios::in );
	for ( int i=0; i<=3; i++ ) {
		cout<<"\nEnter data for item: "<<endl;
		obj[i].getit();
		fout.write((char *)& obj[i], sizeof(obj[i]));
	}
	fout.close();
	fin.close();
	system("cls");
	cout<<"\nDisplaying details for item: ";
	for ( int i=0; i<=3; i++ ) {
		fin.read((char *)& obj[i], sizeof(obj[i]));
		obj[i].showit();
		count += sizeof(obj[i]);
		cout<<endl<<"\nTotal number of bytes: "<<count;
	}
}
