#include <iostream>
using namespace std;
void bubble(int a[], int len);
int main()
{
    int array[] = { 4, 6 , 7, 12, 34, 46, 2, 3, 11, 100 };
    int len = sizeof(array) / sizeof(array[0]);
    for (int i = 0; i < len; i++)
    {
        cout  << array[i] << " ";
    }
    cout << endl;
    bubble(array, len);
    for (int i = 0; i < len; i++)
    {
        cout << array[i] << " ";
    }
}
void bubble(int a[], int len)
{
    int i, temp;
    for (int pass = 0; pass < len; pass++)
    {
        for (i = 0; i < len - pass - 1; i++)
        {
            if (a[i] > a[i + 1])
            {
                temp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = temp;
            }
        }
    }
}