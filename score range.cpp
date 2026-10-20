#include <iostream>
using namespace std;
int main(){
    int score;
    cout << "Enter your score: ";
    cin >> score;
    do
    {
        if(score < 0 || score > 100)
        {
            cout << "Invalid score. Please enter a score between 0 and 100: ";           
        }
    }while(score < 0 || score > 100);
    switch(score / 10) {
        case 10:
        case 9:
            cout << "Your grade is A " << endl;
            break;
        case 8:
            cout << "Your grade is B " << endl;
            break;
        case 7:
            cout << "Your grade is C " << endl;
            break;
        case 6:
            cout << "Your grade is D " << endl;
            break;
        default:
            cout << "Your grade is E " << endl;
    }
    cout << endl;
    return 0;
}