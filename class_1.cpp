#include <iostream>
#include <string>
using namespace std;
class divas{
    public:
    int age;
    string  name;
    float hight;
};
int main()
{
    divas rs;
    rs.age = 28; 
    rs.name = "Rashid";
    rs.hight = 5.7;
    cout<<rs.age<<endl <<rs.name<<endl <<rs.hight <<endl;
    return 0;
}