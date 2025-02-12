#include <iostream>
#include <string>
using namespace std;

int hero(int a, string name="rashid") {
    cout << "Number: " << a << endl;
    cout << "Name: " << name << endl;
    return a;
}

int main() {
    // Test the function
    hero(1);  // using default name
    hero(10, "John");  // providing both parameters
    return 0;
}