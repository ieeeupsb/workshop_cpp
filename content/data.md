# Let's talk about data

We live in the data age. Data makes the world go 'round and the same can be said in relation to programs. There are differents kind of data, so we have different kinds of **variables**. Variables are a portion of memory that can store a value. In the end, it's all represented as *bits*, but is useful to store and manipulate a string as a **String** and an integer as an **int**.

## Integers

An **int** is a type of variable that stores, guess what, an integer. That means if you try to do an assignment like `int i=3.14;` and then do `cout << i;`, the number that is going to be printed is just **3**.

## Floats

A **float** stores numerical values just like an int, but it has support for floating point numbers. If you want to do **5/2** and store the correct number, then your code should look like this `float div; div = 5/2;` 

## Chars

A **char** stores a character, if you want to store an **'a'**, that's what you will use. To assign a character to a char, you do `char ch = 'a';`.

## Arrays, Bools, Strings, and some more things

### Arrays

Arrays are a fundamental concept to programming, you can assign to a variable multiple values, and each can be acessed by its position on the array. And what more is a string if not an array of **chars**? 
To create an array, you define the variable type, and then use **[ ]** to define it as an array.
```c++
int array[10]; // an int array with 10 positions
int array[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9}; // another 10 position array - now initialized to these values
int array[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9}; // in C++ this is also a valid declaration
float matrix[5][5]; // A 5x5 floating point matrix
```
To acess an array, you have to specify which element you are trying to acess within the brackets.
```c++
int array[3]; // an int array that stores 3 values

array[0] = 1; // the first element of the array starts at 0!!!
array[1] = 5; 
array[3] = array[0]+array[1]; // store the sum of the 1st element with the 2nd

```

### Bools

**bool** is another data type that C++ offers. Named after *George Boole*, a boolean can be either true or false. You can use it, for example, like
```c++
/*
Don't worry if you don't understand all of this!
This is just an example
*/
#include <iostream>

bool running == true; // initialize the boolean to true

int main(){
 while (running == true){ // running == true to check if our boolean is true
 if (ESC KEY pressed) // the player wants to quit the game!
  running == false; // make our bool false -- in the next iteration we leave the while() block
}
 return 0;
}
```
On a side note, in C++ every **non-zero** value is considered true!

### Strings

As I said before, a **string** is just a array of characters, so it is perfectly valid to do something like
``` char str[5] = {'H','e','l','l','o'};```. But, altought it's sometimes usefull to treat strings as arrays, a lot of times it's just easier to treat the string as a whole element and not character by character. To use strings we need to ```#include <string>``` header.

```c++
#include <iostream>
#include <string>

int main ()
{
  std::string str;
  str = "This is a string";
  std::cout << str << std::endl;
  str =  str + " that is now bigger";
  std::cout << str << std::endl;
  
  return 0;
}

```

### More things

Every variable comes with a size. That means that it can only hold values between a certain range. Compile and run the following code:
```c++
#include <iostream>

using namespace std;

int main(){

cout << "Size of int: " << sizeof(int) << " bytes" << endl;
cout << "Size of float: " << sizeof(float) << " bytes" << endl;
cout << "Size of char: " << sizeof(char) << " bytes" << endl;

}

```
You can use certain **keywords** to extend or shorten the variable types or to make them signed or unsigned.

```c++
short int n; // a shorter int
unsigned int k; // doesn't hold the sign of the number. Be carefull!
unsigned lont int j; // you can mix keywords
double m; // more size than a normal float
long double x; // Even bigger!

```

