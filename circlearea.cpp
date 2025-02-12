#include <iostream>
#include <cmath>
#include <iomanip>
#include <limits>

using namespace std;

// Constants
const double PI = M_PI;

/**
 * Calculates the area of a circle
 * @param radius The radius of the circle
 * @return The area of the circle
 */
double calculateArea(double radius) {
    return PI * radius * radius;
}

int main() {
    double radius;
    
    cout << "\n=== Circle Area Calculator ===\n";
    cout << "Enter the radius of circle (in units): ";
    while (!(cin >> radius) || radius <= 0) {
        cout << "Invalid input. Please enter a positive number: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    double area = calculateArea(radius);
    cout << "Area of circle: " << fixed << setprecision(2) << area << " square units\n";

    return 0;
}