#include <iostream>
#include <conio.h>

using namespace std;

void BubbleSort(int a[], int n)
{
	int temp;
	for (int i = 0; i < n ; i++) 
	{
		for (int j = 0; j < n-1; j++)
		{
			if (a[j] > a[j + 1])
			{
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
		cout << "\nAFTER PASS " << i + 1 << endl;
		for (int k = 0;k < n;k++) cout << a[k] << " ";
	}


	
}

int main()
{
	
	int A[20], N;
	cout << "Enter the number of elements: ";
	cin >> N;
	cout << endl << "Enter the Elements:- \n";
	for (int i = 0; i < N; i++)cin >> A[i];
	BubbleSort(A, N);
	system("pause");
    return 0;
}

