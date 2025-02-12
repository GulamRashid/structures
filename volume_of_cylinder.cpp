#include <iostream>
#include <cmath>
#include <iomanip>
#include <limits>

using namespace std;

// Constants
const double PI = M_PI;

/**
 * Calculates the volume of a cylinder
 * @param radius The radius of the cylinder's base
 * @param height The height of the cylinder
 * @return The volume of the cylinder
 */
double calculateVolume(double radius, double height) {
    return PI * radius * radius * height;
}

int main() {
    double radius, height;
    
    cout << "\n=== Cylinder Volume Calculator ===\n\n";

    // Get and validate radius input
    cout << "Enter the radius of cylinder (in units): ";
    while (!(cin >> radius) || radius <= 0) {
        cout << "Invalid input. Please enter a positive number: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    // Get and validate height input
    cout << "Enter the height of cylinder (in units): ";
    while (!(cin >> height) || height <= 0) {
        cout << "Invalid input. Please enter a positive number: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    double volume = calculateVolume(radius, height);
    cout << "\nResults:\n";
    cout << "--------\n";
    cout << "Volume of cylinder: " << fixed << setprecision(2) 
         << volume << " cubic units\n";

    return 0;
}