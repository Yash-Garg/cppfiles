#include <iostream>
#include <conio.h>

using namespace std;

void InsertionSort(int list[], int n) {
	int i, k, j, temp;
	for (i = 0; i < n; i++)
	{
		temp = list[i];
			j = i - 1;
		while(temp<list[j]&&(j>=0))
		{
			list[j + 1] = list[j];
			j--;
		}
		list[j + 1] = temp;
		cout << "\n After Pass: " << i << endl;
		for (k = 0;k < n;k++) cout << list[k] <<" ";
	}
}


int main()
{
	int list[20], N;
	system("cls");
	cout << "Enter the number of Elements: ";cin >> N;
	cout << "\nEnter the elements:\n";
	for (int i = 0;i < N;++i)cin >> list[i];
	InsertionSort(list, N);
	cout<<endl;
	system("pause");
    return 0;
}

