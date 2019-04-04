template: slide_section

# Control Flow
## conditional statements

Sometimes you want to run a block of statements only if one or more conditions are verified.

---
template: slide_section

# if

---
layout: false

# if statement

You already know logical and relational operators which are useful to make those conditions into an expression. Now let's explore the `if` statement and its different variants.

```C++
if(expression) {
   /* statements go here */
}
```

This is the most basic version of the `if` statement. How does it work? The *expression* between paranthesis is evaluated as a `bool` value.

---

# if ... else 

The second variant of the `if` statement ensures that something is done, following a reasoning like: `if expressionA is true, do statementA, otherwise do statementB`.

```C++
if(expression) {
	/* statementA; */
}
else {
	/* statementB; */
}
```

---

# if ... else if ... else

`if...else if...else` let's you test several conditions. The conditions are evaluated downwards, starting at the `if` statement, followed by `else if` statement, moving to the second `else if`, and so on.

```C
if (expression1) {
    /* do this */
} else if (expression2) {
    /* do that */
} else if (expression3){
    /* do something else */
} else { /* optional */
    /* if all else fails */
}
```

---
template: slide_section

# switch

---
layout: false

# switch statement

The `switch` statement is useful when you are checking the value of a single variable.

```C++
switch(integer_expression)
{
    case integer_constant1:
        // statements
        break;
    case integer_constant2:
        // statements
        break;
    default:
        // statements
        // break statement is not needed because this is the last case
}
```

---

# Why do we need the `break` statement?

On every `case` there's a `break` statement, expect for the `default`. The break statements are optional, but they are used because of the way switch works.

Imagine that a certain expression is valid for more than one case, we only want one case to execute and that's why we use `break`.

if we don't use `break` then all cases will be verified and some might be true, and unwanted code will be executed.

---

```C++
char op;
cout << "Operation? (+,-,*,/) ";
cin >> op;
switch(op) {
    case '+':
        cout << "Addition!" << endl; 
        break;
    case '-':
        cout << "Subtraction!" << endl; 
        break;
    case '*':
        cout << "Multiplication!" << endl; 
        break;
    case '/':
        cout << "Division!" << endl; 
        break;
    default:
        cout << "Unknown Operation!" << endl; 
}
```

---
template: slide_section

# Control Flow
## loops

Loops are useful to **repeat a specific block of code until some condition is reached**. There are different types of loops, as you will see.

---
template: slide_section

# for

---
layout: false

# for loop

This loop is a good choice when the number of repetitions is known, or can be supplied by the user.

```C++
for(initialization statement; test expression; update statement) {
   // do something
}
```

* The `initialization statement` only runs once, when the loop starts.
* The `test expression` is evaluated at the beginning of every loop cycle. If it evaluates true (1), the statements of the `for` body are executed. Otherwise, the loop ends.
* At the end of each loop cycle, the `update statement` it's executed.

---

# Example

```C++
#include <iostream>

using namespace std;

int main()
{
    for(int i = 1; i <= 10; i++)
    {
        cout << i << " ";
    }
}
```
The output will be:
```
1 2 3 4 5 6 7 8 9 10 
```
---
template: slide_section

# while

---

# while

A `while` loop is a mechanism for repeating a set of statements as long as a specified logical expression evaluates to true. The while loop syntax in general is:

```C
while(test expression)
{
   // do something
}
```

The test expression is evaluated at the beginning of every loop cycle. If it evaluates true, the statements of the `while` body are executed. Otherwise, the loop ends.

---

# Example

```C++
#include <iostream>

using namespace std;

int a = 10;
while(a > 0) {
	cout << "Hello darkness my old friend!" << endl;
}
```
Output:
```
Hello darkness my old friend!
Hello darkness my old friend!
Hello darkness my old friend!
...
```

---
template: slide_section

# do ... while

---

# while

The `do ... while` loop is similar to `while`. The difference is that `do ... while` loops always run at least once. First, the statements inside `do` body are executed, and then test expression inside `while` is evaluated before the next loop. In a pure `while` loop, the test statement is evaluated first, therefore the statements inside `while` might never run.

```C++
do {
   // statements
} while (test_expression); // notice the semicolon
```

---

# Example

```C++
#include <iostream>

using namespace std;

int main() {
    int sum = 0, n;
    cout << "Insert numbers to sum (insert 0 to show the result)" << endl;
    do {
        cout << "Enter a number: ";
        cin >> n;
        sum += n;
    } while(n != 0);

    cout << "Total: " << sum;
}
```

---

# The `continue` and `break` keywords

In this section we will cover two special keywords to be used in loops: `break` and `continue`.

# continue

Sometimes you don’t want to end a loop, but you want to skip the current iteration and continue with the next. That's possible with the `continue` statement. This can be used on three types of loops, `for`, `while` and `do ... while`.

---

# Example

Remember the example for the `for` loop where the program displayed numbers from 1 to 10? Imagine that this time you want to display only the odd numbers. A possible solution is to use the `continue` statement (though, it's not the best solution).

```C++
#include <iostream>
using namespace std;

int main() {
    for(int i = 1; i <= 10; i++) {
        if (i % 2 == 0)
            continue;
        cout << i << " ";
    }
}
```
---
The following image illustrates how `continue` affects the different loops:

![img](https://cdn.programiz.com/sites/tutorial2program/files/c-continue-statement-works.jpg)

---

# break

You can also use the `break` statement inside loops. This instruction stops the loop immediatly. 

**Note:** `break` and `continue` statements only affect the loop they belong to.

---

# Example

```C++
int n;    
cout << "Insert a number: ";
cin >> n;
// A number is prime if it's divisible only by itself and 1
// for the numbers i, between 2 and 'n'
for(int i = 2; i <= n; i++) // loop A {
    // ... see if there's some 'j', between 2 and 'i'/2 that it's factor of 'i'
    int j;
    for(j = 2; j <= i/2; j++) { // loop B 
        if(i % j == 0) 
            break; // this break only affects the loop B. The loop A will continue
    }

    if(j > (i/j))
        cout << n << " is prime! << endl;
}
```
