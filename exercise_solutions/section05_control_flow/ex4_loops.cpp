#include <iostream>

using namespace std;

int main() {
    int number_of_students;
    cout << "Number of students? ";
    cin >> number_of_students;

    double grade, sum = 0;
    for (int i = 0; i < number_of_students; i++) {
        cout << "Grade? ";
        cin >> grade;
        sum += grade;
    }   

    cout << "Average grade is " << sum/number_of_students << endl;

    return 0;
}
