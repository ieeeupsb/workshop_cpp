#include <iostream>

using namespace std;

int main() {
    int randomNumber = rand() % 101; // random number between 0 and 100
    int guess;

    do {
        cout << "Insert a number: ";
        cin >> guess;

        if (guess < randomNumber)
            cout << "Higher" << endl;
        else if (guess > randomNumber)
            cout << "Lower" << endl;

    } while(guess != randomNumber);

    cout << "Correct, the number is " << randomNumber << endl;

    return 0;
}