#include <iostream>
using namespace std;
int main()
{
    int i,n;
    int fact = 1;
    cout << "Enter the value of n: ";
    cin >> n;
    for(i = 1; i <= n; i++)
    {
        fact *= i;
    }
    cout << "The factorial of " << n << " is " << fact << endl;
    return 0;
}