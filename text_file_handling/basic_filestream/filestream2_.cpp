#include <iostream>
#include <conio.h>
#include <fstream>
using namespace std;

int main()
{
	fstream fout;
	fout.open("testfile.txt", ios::out|ios::trunc);
	fout << "This is my first Text file\n";
	fout << "Using obect of fstream class\n";
	fout << "Tet file is created with name testfile\n";
	fout.close();
	cout << "File Created"<<endl;
	system("pause");
    return 0;
}

