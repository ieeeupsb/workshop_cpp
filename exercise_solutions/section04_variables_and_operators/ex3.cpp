#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int time_in_seconds;

    cout << "How many seconds? ";
    cin >> time_in_seconds;

    int days = floor(time_in_seconds / (60*60*24));
    int hours = (time_in_seconds / (60*60)) % 24;
    int minutes = (time_in_seconds / 60) % 60;
    int seconds = time_in_seconds % 60;

    cout << days << " days, " << hours << " hours, " << minutes << " minutes and " << seconds << " seconds" << endl;

    return 0;
}