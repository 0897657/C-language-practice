#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main(){
    int n,i,j,c = 0;
    cout << "Enter an integer larger than 1: ";
    cin >> n;
    for(j = 2; j <= n; j++){
        int sqrtj = sqrt(j);
        for(i = 2; i <= sqrtj; i++){
            if(j % i == 0)
            break;
            }
        if(i > sqrtj){
            cout << setw(5) << j;
            c++;
            if(c % 5 == 0)
                cout << endl;
        }
    }
    return 0;
}