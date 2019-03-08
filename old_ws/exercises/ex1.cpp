#include <iostream>

using namespace std;

int main(){
  int i, min, max; // range values

  cout << "Please enter the lower end value: ";
  cin >> min;
  cout << "Please enter the upper end value: ";
  cin >> max;
  cout << "The prime numbers between " << min << " and " << max << " are: " << endl;

  for(min ; min <= max; min++){
    for(i=2 ; i <= min-1; i++){
        if(min % i == 0)
            break;
    }

    if(i == min)
        cout << min << " ";
  }
  cout << endl;
  return 0;
}
