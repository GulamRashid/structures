#include <iostream>
#include <string>
using namespace std;
int main (){
    struct districts{
        string name;
        int num;
        string femous;
    }state1, state2;
    state1.name="siwan";
    state1.num=1;
    state1.femous="hathua";
    state2.num=2;
    state2.name="gopalganj";
    state2.femous="thawe";
    cout<<state1.femous;
    return 0;
}