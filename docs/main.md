name: slide_title
class: slide_title, center, middle
layout: true

{{content}}

<div class="slide_logos">
<img alt="nuieee-logo" src="res/NuIEEE_logo.png" width=500 height=157>
<img alt="cs-logo" src="res/computer-society-logo.svg">
</div>

---

name: slide_section
class: slide_section, center, middle
layout: true

{{content}}
---

template: slide_title
layout: false

# Workshop Introduction to C++

---

template: slide_section

# Why Learn C++

---

layout: false

# A bit of history

 - C++, an extension of C, was developed by Bjarne Stroustrup in the early 1980s at Bell Laboratories.
 - It provides a number of features that "spruce up" the C language
 - But more importantly, it provides capabilities for **Object-Oriented Programming**.
 - It's an imperative programming language, which means it uses statements to change the programs state.
 - It's also a procedural programming language because the program is built from one or more functions (a function is the same as a procedure, it executes commands, but in addition, it returns a value).

---

# Object-Oriented Programming

- Objects are essentially reusable software components that model items in the real world.
<br><img src="res/cpp_oop.png" width="700" align="center"><br>

---

# What C++ can do

 - C++'s greatest strength is how **scalable** it could be, so apps that are very resource intensive are usually built with it, like **3D Games**.
 - As a **statically typed** language, C++ is generally **more performant** than dynamically typed languages because the code is type-checked before it is executed.
 - Since you have **a lot of control over how your app uses resources**, your app can take up very little resource.
<br><img src="res/what_cpp_can_do.png" width="500" style="margin-left: auto;"><br>

---

template: slide_section

# Setting up a development environment

---

layout: false

# Stages of C++ Program Development

1. **Creating a Program:** Editing a file with an editor program (referred to as **source code**).
2. **Preprocessing:** The preprocessor obeys commands (**preprocessor directives**)
3. **Compiling:** The compiler translates the C++ program into machine-language code or **object code**.
4. **Linking:** C++ programs contain references to functions and data defined elsewhere so the **Linker links the object code with the code from the missing functions to produce an executable program**.
5. **Loading:** Before a program can be executed, it must first be **placed in memory**, and this is done by the **loader**, which **takes the executable image from disk and transfers it to memory**.
6. **Execution:** Finally, the computer, under the control of its CPU, **executes the program** one instruction at a time.

---

# What do you need to develop a program in C++?

 - **Compiler + Text Editor**
    - Visual Studio Code
    - Atom
    - Sublime Text
    - ...


 - **IDE**
    - Codeblocks (Lightweight)
    - Visual Studio (User friendly but very heavy)
    - CLion
    - Eclipse
    - ...

---

# Installing Compilers

Probably the most well-known C++ compilers are g++ (GNU C++ Compiler) and CLang which has support for C++, however, there are many more.

Below you can find instructions to install a C++ compiler on Windows and some Linux distros. MacOS seems to have CLang installed.

1. [Setup on linux](section02_setup_linux)
2. [Setup on windows](section02_setup_windows)
3. [Setup on MacOS](section02_setup_macos)


---

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

---

template: slide_section

# Variables and Operators
## Variable Types

---
template: slide_section

# Numbers

---
layout: false

# Integers

An **int** is a type of variable that stores, guess what, an integer. That means if you try to do an assignment like `int i=3.14;` and then do `cout << i;`, the number that is going to be printed is just **3** because C++ converts the number you assign to the int variable to the integer below

| Variable Type   |           Value Range          | Storage Size |
|-----------------|--------------------------------|--------------|
| int             | -2147483648 to 2147483647      |   4 bytes    |
| unsigned int    | 0 to 4294967295                |   4 bytes    |
| short           | -32768 to 32767                |   2 bytes    |
| unsigned short  | 0 to 65,535                    |   2 bytes    |

---

# Floats and Doubles

If we want to use **simple precision** we use the `float` type of variable, but if we want to use **double precision** we use like the name says, the `double` type of variable. You can do just this:

```C++
float simp_prec_num = 3.5;
double doub_prec_num = 3.5;
```

**Simple precision** uses *32 bits* (4 bytes) and **double precision** uses *64 bits* (8 bytes).

---
template: slide_section

# Characters

---
layout: false

# Characters

A `char` variable stores a character. In C++ and almost every language, a character is represented between two '. If you try to assign to a char a character between two ", the compiler will throw an error.
```C++
char a = 'a';
char b = "b"; //error: invalid conversion from 'const char*' to 'char'
```

---
# Strings

C++ provides the **two** following types of string representation:
 * The C-style character string
 * The **string class** type introduced with Standard C++

---

# The C-Style Character String

This string is actually a **one-dimensional array** of characters which is terminated by a `null` character `'\0'`. Thus a null-terminated string contains the characters that comprise the string followed by a `null`.

```C++
char greetings[6] = {'H', 'e', 'l', 'l', 'o', '\0'};
// or
char greetings[] = "Hello";
```

![](https://www.tutorialspoint.com/cplusplus/images/string_representation.jpg "Pay attention :(")<br>

---

# The String Class in C++

The standard C++ library provides a `string` class type that supports all the operations a C-Style string does, additionally much more functionality.

We just need to include the string library:
```C++
#include <string>
```

String manipulation in C++ is much more intuitive and you don't have to worry about pointers(for now) and declaring string size.

Let's see some functions to manipulate `strings`...

---

```C++
string str1 = "Hello";
string str2 = "World";
string str3;
int len ;

// copy str1 into str3
str3 = str1;
cout << "str3 : " << str3 << endl;

// concatenates str1 and str2
str3 = str1 + str2;
cout << "str1 + str2 : " << str3 << endl;
// total length of str3 after concatenation
len = str3.size();
cout << "str3.size() :  " << len << endl;
```

---

# Bool

```C++
bool im_tired = false;

if(im_tired)
   sleep();
else
   learn_cpp();
```

We can also make a condition the opposite boolean value of what it is supposed to be using the `!` operator as we will see. But it looks something like this:

```C++
bool notTrue = false;

if(!notTrue)
   cout << "Not not true is true!" << endl;
```

---

# void

Another primitive data type is void. This means nothing or can be used as a generic data type in more advanced use cases. A function that produces no value can have a void return type. It means the function doesn't return any value.

```C++
void foo() {
    
}
```

---
template: slide_section

# Variables and Operators
## Operator Types

---
layout: false

# Simple Operator Logic

* When the `=` operator is detected, what is on the right-side is seen as an expression that must be evaluated. Instead of `sum = a + b + c`, let's see it as `sum = expression1`. We don't know what *expression1* is, we must evaluate it.
* So, let's look inside *expression1* and we get `a+b+c`. We detect a variable, `a`, followed by an operator, `+`. The operator `+`, just like the assign operator (=), is binary, hence it expects two operands. So let's say we have `a + expression2`. We don't know yet what that *expression2* is, we need to evaluate it.
* *expression2* is `b + c`. Another `+` operator is detected after the variable `b`, so what's on the right side needs to be evaluated. We now have `b + expression3`.
* The *expression3* is easy to evaluate because it's just the variable `c`, so we only need to load it's value.

---

# Operator Example

```C++
using namespace std;

int main() {
    int a = 1, b = 4, c = 0, sum1, sum2;
    // sum2 is initialized to the same value as sum1
    sum2 = (sum1 = a+b+c);
    cout << "Sum 2 = " << sum2 << endl;
    cout << "Sum 1 = " << sum1 << endl;
}
```
Output:
```
Sum 2 = 5
Sum 1 = 5
```

---

# Arithmetic Operators

These operators are used to perform basic math operations.

* `+`
    * Addition (binary) : sums two numbers.
    * Unary plus (unary) : It performs a conversion. If you are curious, see this thread. https://stackoverflow.com/a/3903114
* `-`
    * Subtraction (binary) : subtracts two numbers.
    * Unary minus (Unary) : changes the signal of the operand.
    * `int a = 10; b = -a; c = -(10+a); // a=10, b=-10, c=-20`
* `*` : Multiplication
* `/` : Division
* `%` : Reminder after division

---

# Arithmetic Operators

**The result of an arithmetic expression depends on the operands data types.** For example, if you add two integer numbers, the result is an integer number. If you sum two operands of mixed data types, like a integer and a double, the compiler will cast the operands till they all have the same data type. In this case, it doesn't make sense to convert the double operand to integer, that would lead to lost of the decimal part.

```C++
int main() {
    float a = 5/2;              // 2.0000
    float b = 5.0/2;            // 2.5000
    float c = (float) 5/2;      // 2.5000
    float d = (float) (5/2);    // 2
    int e = 5.0/2;              // 2.0000
}
```

---

# Relational operators

Relational operators check the relation between two operands. These operators introduce the notion of **true** and **false**, known as boolean in other languages. We can also use numbers. **In relations, a `0` means false and any other value means true.** This is important to keep in mind!

However, an expression with one relational operator will either evaluate to zero (false) or one (true).

| Operator  | Meaning | Example |
|-----| ------------------------ | --------------------- |
| ==  | Equal to                 | 5=5 evaluates to 1    |
| >   | Greater than             | 5 > 55 evaluates to 0 |
| <   | Less than                | 0 < 1 evaluates to 1  |
| !=  | Not equal to             | 0 != 1 evaluates to 1 |
| >=  | Greater than or equal to | 5 >= 5 evaluates to 1 |
| <=  | Less than or equal to    | 3 <= 6 evaluates to 1 |

---

# Logical operators

Logical operators are very important to make decisions, as you will see later. Like **Relational Operators**, the logical operators also evaluate to 0 (false) or 1 (true).

| Operator  | Meaning |
|-----|-----------------------------------------------------------------|
| &&  | AND. Returns true if all operands are true.                     |
| \\\ | OR. Returns true if at least one operand is true.               |
| !   | NOT. True if the operand is false (0), otherwise returns false. |

```C++
(10 > 1) && (0 == 0) // evaluates to true
10 > 1 || 0 == 1 // evaluates to true because 10 > 1 is true.
!0 // evaluates to true
```
