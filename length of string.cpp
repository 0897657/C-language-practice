#include <iostream>
using namespace std;
int main()
{
    char line[100];
    int len = 0;
    int i = 0;
    cin.getline(line, 100);
    while (line[i] != '\0')
    {
        i++;
        len++;
    }
    cout << "Length of the string: " << len << endl;
    return 0;
}