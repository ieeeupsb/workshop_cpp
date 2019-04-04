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
instructs the computer to print the **string** of characters contained between the double quotation marks. A string is sometimes called a character string or a string literal. We refer to characters between double quotation marks (`""`) simply as strings.

Output and input in C++ are accomplished with streams of characters. Thus, when the preceding statement is executed, it sends the stream of characters `Hello World!` to the standard output stream object—`cout`—which is normally “connected” to the screen.

---

# Output:
```C++
int x = 2;
std::cout << x;
```

The `<<` operator is referred to as **the stream insertion operator**. When this program executes, the value to the operator’s right, the right operand, is inserted in the output stream. Notice that the operator points in the direction of where the data goes. The right operand’s characters normally print exactly as they appear between the double quotes.

---

# Input:
```C++
int x;
std::cin >> x;
```

When this program executes, because of `>>` a value is read from the input stream (written by the user) and stored in the right operand.

`endl` inserts a new-line character and flushes the stream.

---

# return
Line 8:
```C++
return 0; // indicate that program ended successfully
```
is one of several means we’ll use to exit a function. When the return statement is used at the end of main, as shown here, the value 0 indicates that the program has terminated successfully. According to the C++ standard, if program execution reaches the end of main without encountering a return statement, it’s assumed that the program terminated successfully.

---

We can use `return` so that a function might return a value, such as:

```C++
int main() {
    int five = getFive(); // calls function getFive()
    std::cout << five; // displays content stored in variable five
    return 0;
}

int getFive() {
    return 5;
}
```

Output:
```
5
```

---

# Brackets

```C++
{ // begins body of function
    ...
} // ends body of function
```

The **left brace**, `{`, (line 5) must begin the body of every function. A corresponding **right brace**, `}`, (line 9) must end each function’s body.

---

# Semicolons

When dealing with a C/C++ program, **the semicolon is a statement terminator**, i.e., each individual statement must be ended with a semicolon. It indicates the end of one logical entity.

---

# Comments

Comments are an essential part of any program and you should always include them whenever. **They’re ignored by the C++ compiler and do not cause any machine-language object code to be generated**.

```C++
// This is a one line commment
```
```C++
/* This is a
multi line
comment */
```

**Comments can be a very useful way of explaining what’s going on in the program.**

---

# Namespaces

In C++, sometimes we want to create two functions or objects with the same name (we will talk about this later).
In the Hello World example you saw the using of namespaces:
```C++
std::cout << "Hello World!" << std::endl; // display message
```
In this example we use two objects of a standard namespace called `std`. This means that you can create a `cout` object with other meaning in other namespace.

---

To create a namespace you have to use the following syntax:
```C++
namespace namespace_name {
  //Code
}
```

Now you can acess your namespace by just doing what we have done in the previous code:
```C++
namespace_name::func();
```

---

To decrease the code you have to write, C++ also includes a keyword *using* that makes the code inside the namespace you specify available. In the Hello World program we could just do:
```C++
using namespace std;
cout << "Hello World!" << endl;
```
You can also make only a function available - 
```C++
using namespace std::cout;
cout << "Hello World!" << std::endl;
```
\- but this is not the best way to use this syntax.
