#include <iostream>

using namespace std;

int main() {
    int number;
    cout << "Insert a number: ";
    cin >> number;

    for (int factor = 2; factor < number; factor++) {
        if (number % factor == 0)
        cout << factor << " ";
    }   

    cout << endl;

    return 0;
}
