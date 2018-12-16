#include <iostream>
#include <fstream>
#include <conio.h>
#include <ctype.h>
using namespace std;
int main()
{
	ifstream fin;
	fin.open("data.txt");
	ofstream fout;
	fout.open("second.txt",ios::trunc);
	char line[80];
	while (!fin.eof()) 
	{
		fin>>line;
		if (isupper(line[0]))
			fout << line << "\n";	//write to file 
	}
	fin.close();
	fout.close();
	cout << "File conversion complete.\n";
	system("pause");
    return 0;
}

