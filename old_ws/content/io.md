## Input/Output

To get access to the standard output stream ( in most cases, the screen) and to the standard input stream ( in most cases, the keyboard), we will have to use the `#include <iostream>` and define we are using the standard namespace, whether it is by using `using namespace std;`. Use `cin >> variable` to get a number and save it in a variable and `cout << "String" << variable;` to print a string and a variable to the screen. You can chain strings and variables in any way you like.

```c++
/*
This program gets two numbers entered by the user, multiplies and prints them

*/
#include <iostream>

using namespace std;

int product(int a ,int b)
{
  return a*b;
}

int main ()
{
  int a,b;
  cin >> a;
  cin >> b;
  cout << product(a,b) << endl;
  return 0;
}

```

### Files

We can also read/write from/to files. C++ standard library offers classes that facilitate this and we are going to make use of them.
First, we have to define to write `#include <fstream>` to include the class. Then, we need to create an instance of the class that will define the file - `fstream file;`. Next, open the file. If the file doesn't exist, it'll now be created - `file.open("fexample.txt", ios::out);` - we opened the file and stated that we are going to write on it.
We write to the file the same way we write to the screen - `file << "My first file "<< endl;`. In the end, we need to close the file with `file.close();`.

```c++
#include <iostream>
#include <fstream>

using namespace std;

int main () {
  fstream file;
  file.open("example.txt", ios::out);
  file << "My first file "<< endl;
  file.close();
  return 0;
}

```
