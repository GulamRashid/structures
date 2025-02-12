#include <iostream>
using namespace std;

class fun{
    public:
    void print();
};
void fun :: print()
    {
        cout<<"Divas and Rashid";
    }
int main()  // YE CLASS ME FUNCTION KA EXAMPLE HAI.
{
    fun majk;
    majk.print(); // FUNCTION ACCESSING
    return 0;
}