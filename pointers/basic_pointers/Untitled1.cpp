#include <iostream>
using namespace std;

int main()
{
    int var1 = 3;
    int *var2 = &var1;
    int **var3 = &var2;
    cout << var1 << endl;
    cout << var2 << endl;
    cout << var3 << endl;
    
    return 0;
}
