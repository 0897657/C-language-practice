#include <iostream>
#include <cmath>
using namespace std;
double cirArea(double cir_r);
int main()
{
    double r, area;
    cout << "Enter the radius of the circle: ";
    cin >> r;
    area = cirArea(r);
    cout << "The area of the circle is: " << area << endl;
    return 0;
}
double cirArea(double cir_r)
{
    double cir_area;
    cir_area = 3.14159 * pow(cir_r, 2);
    return cir_area;
}