template: slide_section

# Hello World

---
layout: false

# My First C++ Program

```C++
#include <iostream> // allows program to output data to the screen

// function main begins program execution
int main()
{
    std::cout << "Hello World!" << std::endl; // display message

    return 0; // indicate that program ended successfully
} // end function main
```
Output:
```
Hello World

``` 
---
template: slide_section

# C++ Basic Syntax

---
layout: false

# #include

Line 1
```C++
#include <iostream> // allows program to output data to the screen
```
is a **preprocessor directive**, which is a message to the C++ preprocessor. Lines that begin with # are processed by the preprocessor before the program is compiled. **This line notifies the preprocessor to include in the program the contents of the input/output stream header file `<iostream>`**. This file must be included for any program that outputs data to the screen or inputs data from the keyboard using C++ style stream input/output.

---

# int main()

Line 4
```C++
int main()
```
**is a part of every C/C++ program**. The parentheses after `main` indicate that `main` is a **program building block** called a **function**. C++ programs typically consist of one or more functions and classes. **Exactly one function** in **every program** must be named `main`. C++ programs **begin executing at function `main`**, even if main is not the first function in the program. The keyword `int` to the left of main indicates that main “returns” an integer (whole number) value.

---

# Input/Output
Line 6
```C++
std::cout << "Hello World!" << std::endl; // display message
```