#include <iostream>
using namespace std;
int main()
{
    int i, n;
    int fact = 1, sum = 0;
    cout << "Enter a number: ";
    cin >> n;
    i = 1;
    do
    {
        fact *= i;
        sum += fact;
        i++;
    }while(i <= n);
    cout << "sum = " << sum << endl;
    return 0;
}
