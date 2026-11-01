#include <iostream>
using namespace std;
int main()
{
    int i, n ,num ,sum;
    cout << "Please enter the upper limit n before all completions: ";
    cin >> n;
    for (num = 2; num <= n; num++)
    {
        sum = 0;
        for(i = 1; i < num; i++)
        {
            if(num % i == 0)
            {
                sum += i;
            }
        }if(sum == num)
        {
            cout << num << endl;
        }
    }
    return 0;
}
   