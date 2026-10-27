#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int i,j;
    cout << setw(5) << "|" << endl;
    for(j = 1; j <= 9; j++)
    {
        cout << setw(4) << j;
    }
    cout << "\n----+--------------------" << endl;
    for(i = 1; i <=9; i++)
    {
        cout << i << setw(4) << "|"; 
        for(j = 1; j <= i; j++)
        {
            cout << setw(4) << i * j;
        } 
        cout << endl; 
    }
    return 0;
}