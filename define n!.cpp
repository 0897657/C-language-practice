#include <iostream>
using namespace std;

int sum(int m);
int fact(int m);

int main()
{
    int n;
    cout << "Please enter a number: ";
    cin >> n;
    cout << "The sum is: " << sum(n) << endl;
}
int sum(int m)
{
    int i, s = 0;
    for (i = 1; i <= m; i++)
        s += fact(i);
    return s;
}
int fact(int m)
{
    int i, f = 1;
    for (i = 1; i <= m; i++)
        f *= i;
    return f;
}
