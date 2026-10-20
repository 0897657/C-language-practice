#include <iostream>
using namespace std;
 
int main(){
    float obj1,obj2;
    char op;
    cout << "Please enter the four operations: \n";
    cin >> obj1 >> op >> obj2;
    switch (op)
    {
        case '+':
            cout << obj1 << " + " << obj2 << " = " << obj1 + obj2 << endl;
            break;
        case '-':
            cout << obj1 << " - " << obj2 << " = " << obj1 - obj2 << endl;
            break;
        case '*':
            cout << obj1 << " * " << obj2 << " = " << obj1 * obj2 << endl;
            break;
        case '/':
            if (obj2 == 0) 
            {
                cout << "Error: Division by zero is not allowed." << endl;
            }
            else
            {
                cout << obj1 << " / " << obj2 << " = " << obj1 / obj2 << endl;
            }
    }
    return 0;
}