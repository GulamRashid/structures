#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Student {
private:
    string name;
    string address;
    int prn;
    int rollNo;
    string facility;
    vector<float> marks;
    float average;

public:
    Student() : prn(0), rollNo(0), average(0.0) {}

    bool validatePRN(int p) {
        return (p > 0 && p < 10000);
    }

    void setStudentInfo(int p, int r, string f, string n, string a) {
        if (!validatePRN(p)) {
            cout << "Invalid PRN!" << endl;
            return;
        }
        if (r <= 0) {
            cout << "Invalid Roll Number!" << endl;
            return;
        }
        prn = p;
        rollNo = r;
        facility = f;
        name = n;
        address = a;
    }

    void addMarks(float mark) {
        if (mark >= 0 && mark <= 100) {
            marks.push_back(mark);
            calculateAverage();
        } else {
            cout << "Invalid marks! Must be between 0 and 100" << endl;
        }
    }

    void calculateAverage() {
        if (marks.empty()) return;
        float sum = 0;
        for (float mark : marks) {
            sum += mark;
        }
        average = sum / marks.size();
    }

    string getGrade() const {
        if (average >= 90) return "A+";
        if (average >= 80) return "A";
        if (average >= 70) return "B";
        if (average >= 60) return "C";
        return "F";
    }

    void display() const {
        cout << "PRN      : " << prn << endl;
        cout << "Roll No  : " << rollNo << endl;
        cout << "Facility : " << facility << endl;
        cout << "Name     : " << name << endl;
        cout << "Address  : " << address << endl;
        cout << "Average  : " << average << endl;
        cout << "Grade    : " << getGrade() << endl;
    }
};

int main() {
    Student student;
    int choice;
    int p, r;
    string f, n, a;
    float mark;
    
    do {
        cout << "\n=== Student Management System ===";
        cout << "\n1. Add new student";
        cout << "\n2. Add marks";
        cout << "\n3. Display information";
        cout << "\n4. Exit";
        cout << "\n==============================";
        cout << "\nEnter choice: ";
        
        if (!(cin >> choice)) {
            cin.clear();
            cin.ignore(10000, '\n');
            cout << "Invalid input!\n";
            continue;
        }

        switch(choice) {
            case 1:
                cout << "Enter PRN: ";
                cin >> p;
                cout << "Enter Roll No: ";
                cin >> r;
                cout << "Enter Facility: ";
                cin.ignore();
                getline(cin, f);
                cout << "Enter Name: ";
                getline(cin, n);
                cout << "Enter Address: ";
                getline(cin, a);
                student.setStudentInfo(p, r, f, n, a);
                break;
            case 2:
                cout << "Enter mark (0-100): ";
                if (cin >> mark) {
                    student.addMarks(mark);
                } else {
                    cout << "Invalid mark input!\n";
                    cin.clear();
                    cin.ignore(10000, '\n');
                }
                break;
            case 3:
                student.display();
                break;
            case 4:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice!\n";
        }
    } while (choice != 4);

    return 0;
}
