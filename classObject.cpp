#include <iostream> 
#include <string>
#include <iomanip>

using namespace std;

class Student {
private:
    string name;
    string address;
    int prn;
    int rollNo;
    string facility;

public:
    // Constructor
    Student() : prn(0), rollNo(0) {}

    bool validatePRN(int p) {
        return (p > 0 && p < 10000);
    }

    // Initialize student data
    void setStudentInfo(int p, int r, string f, string n, string a) {
        if (!validatePRN(p)) {
            cout << "Invalid PRN!" << endl;
            return;
        }
        name = n;
        address = a;
        prn = p;
        rollNo = r;
        facility = f;
    }

    // Display student information
    void display() const {
        cout << "\nStudent Details:\n";
        cout << "---------------\n";
        cout << "Name     : " << name << endl;
        cout << "Address  : " << address << endl;
        cout << "PRN      : " << prn << endl;
        cout << "Roll No. : " << rollNo << endl;
        cout << "Facility : " << facility << endl;
    }
};

int main() {
    Student student1;
    int p, r;
    string f, n, a;
    
    cout << "Enter PRN, Roll No, Facility, Name, Address: ";
    cin >> p >> r >> f >> n >> a;
    
    student1.setStudentInfo(p, r, f, n, a);
    student1.display();
    return 0;
}