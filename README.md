# What do you need?

C++ is a compiled language, the code you write is then compiled to machine code. What does that mean, you ask. Basically, a program converts your code to assembly (which is for the most part just machine code that is human readable) and then another program, called the Assembler, translates this to machine code that is understanded by your particular machine. To be able to run the programs in your machine, you need to have this tools that convert the source code into machine code for your computer architecure.

## Windows

On Windows, you will have to install the compiler. This can be done by installing the [Microsoft Windows SDK](https://developer.microsoft.com/pt-pt/windows/downloads/windows-10-sdk) or [MingW](http://www.mingw.org/), both of which come with a C++ compiler. Also, some IDEs install the required tools. You can use [Visual Studio](https://www.visualstudio.com/), [NetBeans](https://netbeans.org/features/cpp/), [Eclipse](http://www.eclipse.org/downloads/packages/eclipse-ide-cc-developers/oxygen1a), [CodeBlocks](http://www.codeblocks.org/), there are a plentitude of choices. And of course, you can also develop in a text editor and then compile the code on the command line.

## Mac

On a Mac, the best way to program C++ is just to install [Xcode](https://developer.apple.com/xcode/), which is totally free. This will make sure all your compilers are installed correctly and you get a nice IDE to write your code. If, however, you prefer to program in another text editor and then compile on the command line, you can opt by just installing [gcc](https://gcc.gnu.org/) and then using your favourite text editor.

## Linux & BSD

If you run Linux or BSD in your machine, you probably have everything you need. Most Linux and BSD distros come with a C/C++ compiler out of the box, *gcc*, probably. So you can just write your code in a text editor (can be a terminal based text editor - *Nano*, *VIM*,... - or something like [Sublime Text](https://www.sublimetext.com/), *gedit*,...) and then compile it at the command line with *gcc* or *Clang*.
This said, you might want to use an IDE to help the development of your programs. You can use something like [CLion](https://www.jetbrains.com/clion/), [Visual Studio Code](https://code.visualstudio.com/) or [Eclipse](ttp://www.eclipse.org/downloads/packages/eclipse-ide-cc-developers/oxygen1a). Finally, if your OS doesn't come with a C++ compiler, you probably can install it using your package manager, something like `sudo apt install gcc` on distros using the Aptitude package manager.

## On the cloud

If you want to save some space in your disk or if you don't want to install anything at all, you can go to a site like [C++ Shell](http://cpp.sh/).

# Test your setup

Once you have configured everything, you need to see if the setup is running as it should. To do that, you are going to compile and run the following program, which will also be your introduction to C++. Hello World!

```c++

#include <iostream>
using namespace std;

int main() 
{
    cout << "Hello, World!";
    return 0;
}

```
Don't worry if you don't understand anything, this is going to be an entry level workshop!
If you are using an IDE, just create a new project, create a *.cpp* file and then copy and run the code.
If you are using the command line, after creating a *.cpp* file and copying the code, run the command ` g++ -o <program_name> <file_name> ` and run it by typing `./program_name`
If you have any problem installing anything or need help in any way, send an e-mail to *franciscofernandespimenta@gmail.com*
