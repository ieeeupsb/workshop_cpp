# Functions

A function is a block of organized, reusable code that is used to perform a single, related action. Functions provide better modularity for your application and a high degree of code reusing. First, take a look at an example of a function.

```c++
#include <iostream>

using namespace std;

int sum(int a, int b)
{
  int sum;
  sum = a+b;
  return sum;
}

int main ()
{
  int res;
  res = sum(5,3);
  cout << "The result is " << res << endl;
}

```

To define a function you need to speficy it's **type (int,float,void)**, **name** and which parameters it receives. 
The syntax is as follows `type name ( parameter1, parameter2, ...) { statements }`, where **type** it's the type of value returned by the function, **name** is the identifier by which the function can be called, **parameters** that consist of a type followed by an identifier, with each parameter being separated from the next by a comma. They act within the function as a regular variable which is local to the function.They allow passing arguments to the function from the location where it is called from. And **statements** that specify what the function actually does.

**Note:** A **void** functions is just a function that doesn't return anything.
## Passing elements by value or by reference

When you pass an argument by **value**, what you are really giving the function is a *copy* of the variable you are passing. That means that whatever you do on the variable, it won't have any effect outside the scope of the function. This can be usefull some times ( if you just want to return some value that you get by action on the parameters - sum, product - for example) but others you will want to act on the variables itself. That's when you pass by **reference**. You do that by putting a **&** after the variable type, just like ```int sum(int &a, int &b)```. Now, if you access the variables, you are acting on the same ones that you used on the function call.
