#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int number, sum = 0;
    cout << "Insert a number: ";
    cin >> number;

    while (number/10.0 != 0) {
        sum += number % 10;
        number = (int)floor(number / 10);
    }    

    cout << "Sum of digits = " << sum << endl;

    return 0;
}
