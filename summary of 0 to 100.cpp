#include <iostream>
using namespace std;
int main(){
    int i =0, sum = 0;
    while (i <= 100){
        sum += i;
        i++;
    }
    cout << "The sum of numbers from0 to 100 is: " << sum  << endl;
    return 0;
}