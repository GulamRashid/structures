#include <iostream>
#include <string>
using namespace std;

int main(){
    int ram=12;
    int* mohan =&ram;
    int** sita=&mohan;
    cout<<"value  : "<<ram<<endl;
    cout<<"address: "<<mohan<<endl;
    cout<<"address: "<<&ram<<endl;
    cout<<"value  : "<<*mohan<<endl;
    cout<<"value  : "<<*sita<<endl;
    cout<<"value  : "<<sita;
    return 0;
}
