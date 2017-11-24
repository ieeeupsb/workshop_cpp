# Extras

### Random numbers
```c++
#include <iostream>
#include <cstdlib>
#include <ctime>

int main(){
  srand(time(NULL)); // feed the pseudo-random number generator with a seed
  
  for(int i=0;i<10;i++){
    cout << rand()%500; //prints a random number between 0 and 5000
  }
  return 0;
}
```
### Date and time
```c++
#include <iostream>
#include <ctime>

using namespace std;

int main() {
   // current date/time
   time_t now = time(0);
   
   // convert now to string form
   char* dt = ctime(&now);

   cout << "The local date and time is: " << dt << endl;
}

```


### #define

With the **#define** keywork you can define certains words to a value. This is done before the compilation process. Imagine you do `#define MAX 100`. For each instance of **MAX** the preprocessor substitutes by 100. 
