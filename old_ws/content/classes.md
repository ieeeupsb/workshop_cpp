# Object Oriented Programming
C++ main purpose was to add object oriented programming concepts to C. While this change in paradigm is not easy and this is an introduction workshop were we have a lot of things to cover, this section tries to give an introduction to OOP and how do it looks on C++


## Classes

A class is used to specify the form of an object and it combines data and methods ( basically, functions) for manipulating that data into one neat package. When you define a **class** you are defining a blueprint.
```c++
class Box {
   private:
      float length;   // Length of a box
      float breadth;  // Breadth of a box
      float height;   // Height of a box
   public:
       void setHeight( float hei) {
          if(hei > 0)
          height = hei;
       }
       void setBreadth( float bre) {
          if(bre > 0) 
          breadth = bre;
       }
       void setLenght( float len) {
          if(len > 0)
          lenght = len;
       }
       void getHeight() {
          return height;
       }
       void getLenght() {
          return lenght;
       }  
       void getBreadth() {
          return breadth;
       }
       float getVolume(void) {
         return length * breadth * height;
       }
  
};
```
We defined the **class Box** and defined some characteristics every *Box* that belongs to that class as (lenght, breadth,height). Also, we defined a *method* to calculate the volume of each box. There's also methods called **setters and getters**. They are used because we don't want anything outside the class to be able to change the contents of the object without using the proper methods to do so. In our case, it doesn't make sense for a box to have negative dimensions. This way, we create a method that sets the dimensions for our object but makes sure only positive dimentions are assigned. That's why we use **private**. Only methods that belong to the class are able to access that variables. Then, we create **public** methods that can be called outside the class to be able to set the box dimentions or to see which dimentions the box has.

## Objects

Objects are instances of classes. Let's define one object of the class *Box*
```c++
Box box;          // Declare Box1 of type Box

```
And then define the dimensions for each box.
```c++
   box.setHeight(5.0); 
   box.setLength(6.0); 
   box.setBreadth(7.0);
```
We can then calculate the volume for the box and print it.
```c++

float volume = box.getVolume();
cout << "The box volume is " << volume << endl;
```


```c++
/*
The complete program and using some different ways to define the class
*/

#include <iostream>

using namespace std;

class Box {
   private:
      float length;   // Length of a box
      float breadth;  // Breadth of a box
      float height;   // Height of a box
   public:
       void setHeight( float hei) {
          if(hei > 0)
          height = hei;
       }
       void setBreadth( float bre) {
          if(bre > 0) 
          breadth = bre;
       }
       void setLength(float len) {
          if(len > 0)
          length = len;
       }
       float getHeight() {
          return height;
       }
       float getLength() {
          return length;
       }  
       float getBreadth() {
          return breadth;
       }
       float getVolume(void) {
         return length * breadth * height;
       }
  
};

int main(){

Box box; 

 box.setHeight(5.0); 
 box.setLength(6.0); 
 box.setBreadth(7.0);
  
 float volume = box.getVolume();
 cout << "The box volume is " << volume << endl;
}
```

## Constructors and Destructors
A **constructor** is a method that's executed whenever you create an object, whereas a **destructor** is a method that is executed when the object is deleted.
Let's see how we do it with the class box.
```c++
class Box {
   private:
      float length;   // Length of a box
      float breadth;  // Breadth of a box
      float height;   // Height of a box
   public:
        Box(); // constructor
       ~Box(); // destructor
};

Box::Box(int len, hei, bre) {
   length = len;
   height = hei;
   breadth = bre;
}
Box::~Box(){
   std::cout << "The box was destroyed!" << std::endl;
}

```
Now, when you create an object of the class Box, you have to pass as parameters the dimensions of the box.
