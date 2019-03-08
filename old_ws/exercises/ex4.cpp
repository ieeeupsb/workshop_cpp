#include <iostream>
 
using namespace std;

// Base class
class Shape {
   public:
      void setWidth(int w) {
         width = w;
      }
      void setHeight(int h) {
         height = h;
      }
      
   protected:
      int width;
      int height;
};

// Derived class
class Rectangle: public Shape {
   public:
      int getArea() { 
         return (width * height); 
      }
};

class Square: public Shape {
    protected:
      int side;
    public:
      int getArea() { 
         return (side * side); 
      }
       void setSide(int s) { 
         side = s; 
      }
      
};

int main(void) {
   Rectangle Rect;
   Square Sqr;
 
   Rect.setWidth(5);
   Rect.setHeight(7);
   Sqr.setSide(5);
   
   // Print the area of the object.
   cout << "Total area: " << Rect.getArea() << endl;
    cout << "Total area of square: " << Sqr.getArea() << endl;
   return 0;
}
