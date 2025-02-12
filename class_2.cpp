#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

/**
 * Class representing a student with their basic information
 */
class Student {
private:
    string name;
    long long prn;
    int age;
    long long contact;
    char grade;
    string branch;

public:
    // Constructor
    Student(string n = "", long long p = 0, int a = 0, 
           long long c = 0, char g = 'N', string b = "") 
        : name(n), prn(p), age(a), contact(c), grade(g), branch(b) {}

    // Setters
    void setName(string n) { name = n; }
    void setPRN(long long p) { prn = p; }
    void setAge(int a) { age = a; }
    void setContact(long long c) { contact = c; }
    void setGrade(char g) { grade = g; }
    void setBranch(string b) { branch = b; }

    // Display method
    void displayInfo() const {
        cout << "\nStudent Information:\n";
        cout << "-------------------\n";
        cout << "Name   : " << name << endl;
        cout << "PRN    : " << prn << endl;
        cout << "Age    : " << age << endl;
        cout << "Grade  : " << grade << endl;
        cout << "Branch : " << branch << endl;
        cout << "Contact: " << contact << endl;
    }
};

int main() {
    Student student;
    
    student.setName("Rashid Kumar");
    student.setPRN(240205221004);
    student.setAge(26);
    student.setContact(9304937446);
    student.setGrade('A');
    student.setBranch("MCA");
    
    student.displayInfo();
    return 0;
}