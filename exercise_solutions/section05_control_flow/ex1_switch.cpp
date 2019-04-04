#include <iostream>

using namespace std;

int main() {
    double op1, op2;
    char operation;
    double result;

    cout << "Operation ( + , - , * , / )? ";
    cin >> operation;
    cout << "First Operand? ";
    cin >> op1;
    cout << "Seconds Operand? ";
    cin >> op2;

    switch(operation) {
        case '+':
            result = op1 + op2;
            break;
        case '-':
            result = op1 - op2;
            break;
        case '*':
            result = op1 * op2;
            break;
        case '/':
            result = op1 / op2;
            break;
        default:
            cout << "Invalid operator!" << endl;
            return 1;
    }

    cout << "Result: " << result << endl;

    return 0;
}