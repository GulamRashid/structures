#include <iostream>
using namespace std;

class MyClass {
  public:    // Public access specifier
    int x;   // Public attribute
    int y;   // Private attribute
};

int main() {
  MyClass myObj;
  myObj.x = 25;  // Allowed (x is public)
  myObj.y = 50;  // Not allowed (y is private)
  return 0;
}