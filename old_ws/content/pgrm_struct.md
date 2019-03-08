# Your first C++ program

Usually when starting to learn a new language you will write a programm called **Hello World**. This practice started with the book *The C Programming Language* from *Brian Kernighan and Dennis Ritchie*. In most languages, it's one of the smallest program you can write that actually does something. So let's write one and see how it works.
```c++
/*
This is how you write 
multi-line comments

*/

#include <iostream> // this is how you write one line comments

using namespace std;

int main() 
{
    cout << "Hello, World!";
    return 0;
}

```

First, you have the `#include <iostream>.` Lines beginning with a # are directives to the [preprocessor](https://en.wikipedia.org/wiki/C_preprocessor). They are special lines interpreted before the compilation of the program. The directive #include <iostream>, tells the preprocessor to include a library of C++ code that allows to perform standard input and output operations, such as writing to the screen.
  
After that, you have `using namespace std;`. All the C++ instructions need to be ended with a **;**! You could omit this line and instead use ` std::cout << "Hello World!";`. Go over to [Tutorials Point](https://www.tutorialspoint.com/cplusplus/cpp_namespaces.htm) to get a grip of what a namespace is.

Then, the core of your program. Every program needs to have a **main()** function. This function is a **int** and that means it returns an integer, which can be used to return different values when the program end - if the program ends normally, it usually **returns a 0**. Every block of code - whether it is a  **function, loop, if...else statements** needs to be contained in **{ }**.
Finally, you have the line that prints something to the screen. This line really is **std::cout << "Hello World!";**, but because we used the **using namespace std;**, we already defined we are using the standard namespace. Because **cout** is a function from the C++ Standard Library, we have to define we are using the **std namespace**. We'll dive more depply in the [Input/Output](./content/io.md) section.
To terminate your program, you **return 0**. And there you have, you know now how to make a basic C++ program!
