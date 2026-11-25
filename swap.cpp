#include <iostream>
using namespace std;
void swapxy(int x, int y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
    cout << "In swapxy : x=" << x << " y=" << y << endl;
}
int main()
{
    int a = 1, b = 0;
    cout << "In main : a=" << a << " b=" << b << endl;
    swapxy(a, b);
    return 0;
}