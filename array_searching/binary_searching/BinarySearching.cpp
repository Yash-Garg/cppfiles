#include <iostream>
#include <conio.h>

using namespace std;

int binary_search(int a[], int n, int val){
	int low, mid, high, i, flag = 0;
	low = 0;
	high = n - 1;
	while (low <= high&&flag == 0) {
		mid = (low + high) / 2;
		if (val == a[mid]){
			flag = mid;
			return flag;
		}
		else if (val > a[mid]) low = mid + 1;
		else high = mid - 1;
	}
	return -1;
}


int main(){
	
	int A[20], N,val,index;
	system("cls");
	cout << "Enter the number of Elements (max 20): ";
	cin >> N;
	cout << "\nEnter the Elements:- \n";
	for (int i = 0;i < N;i++) cin >> A[i];
	cout << "\n\nEnter the Value to be searched: ";
	cin >> val;
	index = binary_search(A, N, val);
	if (index > -1){
		cout << "\nElement found at index: " << index << " and at position: " <<(index + 1)<<endl;
	}
	else{
		cout << "UNSUCCESSFUL SEARCH";
	}
	system("pause");
		
	return 0;
}

