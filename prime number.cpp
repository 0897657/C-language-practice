#include <iostream>
using namespace std;
int main(){
    int i,n;
    cout << "Enter an integer n: ";
    cin >> n;
    for(i = 2; i <= n; i++)
    {
        if(n % i == 0)
            break;
    }
    if(i == n)
    {
        cout << n << " is a prime number." << endl;
    }
    else
    {
        cout << n << " is not a prime number." << endl;
    }
    return 0;
}