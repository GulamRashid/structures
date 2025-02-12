/**
 * @brief Program to demonstrate basic class implementation in C++
 * @file oopsClass.cpp
 */
#include <iostream>
#include <string>
using namespace std;

/**
 * @class student
 * @brief Class to manage student information and operations
 */
class student{
    private:
    /** Student's personal and academic information */
    string name;    ///< Full name of the student
    int rollNo;     ///< Unique roll number identifier
    int marks;      ///< Academic marks obtained
    
    public:
    /**
     * @brief Collects student details from user input
     */
    void inputDetails(){
        cout<<"Enter student's Name: ";
        cin>>name;
        cout<<"Enter student's Roll No: ";
        cin>>rollNo;
        cout<<"Enter student's Marks: ";
        cin>>marks;
    }
    
    /**
     * @brief Displays formatted student information to console
     */
    void displayDetails(){
        cout<<"Name     : "<<name<<endl;
        cout<<"Roll No  : "<<rollNo<<endl;
        cout<<"Marks    : "<<marks<<endl;
    }
};

/**
 * @brief Main function demonstrates student class usage
 * @return int Returns 0 on successful execution
 */
int main(){
    // Create a student object and collect information
    student s1;
    // Display the stored student information
    s1.inputDetails();
    s1.displayDetails();
    return 0;
}