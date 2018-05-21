#include <iostream>
int main() {
using namespace std;

    int n;

    cout << " Enter The Number Of Rows ---> ";
    cin >> n;
    cout<<endl;
    cout<<" Output Is Given Below : "<<endl;
    cout<<endl;
    for(int i = n; i >= 1; --i)
    {
        for(int space = 0; space < n-i; ++space)
            cout<<" ";

        for(int j = i; j <= 2*i-1; ++j)
            cout<<"* ";

        cout << endl;
    }

    return 0;
}
