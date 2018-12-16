#include <string.h>
#include <iostream>
#include <conio.h>
#include <fstream>

using namespace std;

int wordsize(char a[]) {
	return strlen(a);
}


int main()
{
	char word[10];
	float count=0;
	float words_total=0;
	
	ifstream fin;
	fin.open("File1.txt");
	if (fin.fail())cout << "FAILED";


	while (!fin.eof()) {
		fin >> word;
		count++;
		words_total += wordsize(word);  
	}
	cout << "Average Word size = " << float(words_total/count)<<endl;
	fin.close();
	system("pause");
    return 0;
}

