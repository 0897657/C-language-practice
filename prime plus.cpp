#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n,i;
    cout << "Please enter a integer: ";
    cin >> n;
    int sqrtn = sqrt(n);
    for(i = 2; i <= sqrtn; i++){
        if(n % i == 0)
            break;
    }
    if(i > sqrtn)
        cout << n << " is a prime number." << endl;
    else
        cout << n << " is not a prime number." << endl;
    return 0;
}