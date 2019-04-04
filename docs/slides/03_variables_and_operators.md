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
