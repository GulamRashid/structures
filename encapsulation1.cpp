#include <iostream>
#include <string>
using namespace std;
class rs{
    private:
    string name;
    int age;
    long int pin_code;
    
    public:
    void rr(string n, int a, long int p){
        age=a;
        name=n;
        pin_code=p;
        
        cout<< a <<endl << n << endl << p;
    }
};
int main(){
    rs gr;
    gr.rr("rashid", 26, 841416 );
    return 0;

}