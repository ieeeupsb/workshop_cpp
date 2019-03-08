#include <iostream>
#include <cmath>

// if we want the actual value of PI we have to include the <cmath> library and use the acos() function
#define PI acos(-1)

using namespace std;

int main() {
    double pi = 3.1415926;
    double radius;
    cout << "Radius? ";
    cin >> radius;

    double area = pi * radius * radius;
    double perimeter = 2 * pi * radius;

    cout << "Area = " << area << endl;
    cout << "Perimeter = " << perimeter << endl;

    return 0;
}