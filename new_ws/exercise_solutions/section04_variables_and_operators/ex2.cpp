#include <iostream>

using namespace std;

int main() {
    double tempCelcius;

    cout << "Temperature (Celcius)? ";
    cin >> tempCelcius;

    // 1F = 1C × 1.8 + 32
    double tempFahrenheit = tempCelcius * 1.8 + 32;

    cout << "Temperature in Fahrenheit is " << tempFahrenheit << endl;

    return 0;
}