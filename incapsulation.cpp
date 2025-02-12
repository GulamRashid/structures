#include <iostream>
#include <string>
using namespace std;

class en{
    private:
    int no, age;
    char grade;
    public:
    void rs(int n, int a, char g){
        no=n;
        age=a;
        grade=g;
    }
    void display(){
        cout<< no << endl << age << endl << grade << endl;
    }
};
int main(){
    en rr;
    rr.rs(04, 26, 'A');
    rr.display();
    return 0;
}