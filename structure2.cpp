#include <iostream>
#include <string>
using namespace std;
int main ()
{
    struct student
    {
        string name;
        int roll_no;
        string branch;
    };
    //assigning value student in student1
    student student1;
    student1.name="gulam rashid";
    student1.roll_no=04;
    student1.branch="MCA";

    //assigning value student in student2
    student student2;
    student2.name="Divas";
    student2.roll_no=02;
    student2.branch="BCA";

    //now giving output
    cout<<student1.branch<<endl<<student1.name<<endl;
    cout<<student2.name;
    return 0;
}