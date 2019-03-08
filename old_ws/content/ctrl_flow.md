# Control Flow

Most of the times, you will need to be able to execute something **for** a certain amounts of times, or **while** a variable doesn't reach 0. Or maybe  **if** a number is negative, you make it positive **else** just keep it that way to make a program that calculates the absolute. **For**, **while** and **if...else** are the major flow control statements you will need to use!

## If... else

Take the example of the absolute program. You want to turn a negative number positive if it is negative, otherwise, just print it that way. Let's code it!


 ![If scheme](if.jpg)

```c++
#include <iostream>

using namespace std;

int main(){

int n, abs;

cout << "Give me a number!" << endl;
cin >> n;

if( n < 0){
  abs = -n;
}
else{
  abs = n; 
}

cout << "The absolute of " << n << " is " << abs << endl;

return 0;

}
```

## For loop
 Whenever you want to do something for a certain numbers of times, you can use a **for** loop. The syntax is ```for(initialization; condition; action)```. For example, if we want to do something for 10 times, we could use ```for(int n = 0; n < 10; n++)```. It works the following way:
- Initialization is executed. Generally, this declares a counter variable and sets it to some initial value.
- Condition is checked. If it is true, the loop continues, otherwise, the loop ends.
- The statement is executed.The action is executed, and the loop gets back to step 2.
 ![For scheme](for.jpg)
```c++
#include <iostream>
using namespace std;

int main (){
  int n;
  for (n=10; n>0; n--){
    cout << n << ", ";
  }
  cout << "Liftoff!\n"; // you can put a '\n' character instead of << endl to end the line
}
```

## While loop

A **while** loop repeatedly executes a target statement as long as a given condition is true. It can go on forever if you do something like `while(1)` or go as long as x < 10 `while(x < 10).`


 ![While scheme](while.jpg)

```c++
#include <iostream>

using namespace std;
 
int main () {
  
   int a = 10;

   // while loop execution
   while( a < 20 ) {
      cout << "value of a: " << a << endl;
      a++;
   }
 
   return 0;
}
```


## How to loop through arrays

Usually when we are looping through an array, we use the **for** statement. You can do something like 
```c++
#include <iostream>

int main(){

int array[] = {4,6,7,4,2,9};

/*
If you divide the size of the array by the size of an element of the array, you get the number of elements
*/
for(int n=0; n < sizeof(array)/sizeof(array[0]) ;n++){
    std::cout << array[n] << " ";
}

return 0;
}


```
