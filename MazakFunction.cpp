#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

// Student information functions
void displayStudent1() {
    cout << "Divas Anand Shaligrami" << endl;
}

void displayStudent2() {
    cout << "Rashid singh" << endl;
}

// Teacher information functions
void displayTeacher1() {
    cout << "Shri Ram Sir" << endl;
}

void displayTeacher2() {
    cout << "Praphull Raghav sir" << endl;
}

// Calculator functions
int add(int a, int b) {
    int result = a + b;
    cout << "Addition of " << a << " + " << b << " = " << result << endl;
    return result;
}

int multiply(int a, int b) {
    int result = a * b;
    cout << "Multiplication of " << a << " × " << b << " = " << result << endl;
    return result;
}

// Main student function that demonstrates all functionality
void student() {
    cout << "\n=== Student Management System ===\n";
    cout << "\nStudent Information:\n";
    displayStudent1();
    displayStudent2();
    
    cout << "\nTeacher Information:\n";
    displayTeacher1();
    displayTeacher2();
    
    cout << "\nCalculations:\n";
    int num1 = 5, num2 = 10;
    cout << "Addition: " << add(num1, num2) << endl;
    cout << "Multiplication: " << multiply(5, 2) << endl;
}

int main() {
    student();
    return 0;
}