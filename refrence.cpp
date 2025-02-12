#include <iostream>
#include <string>
using namespace std;

int main(){
    string food="rice";
    string &veg=food;
    cout<<food<<endl;
    cout<<&veg<<endl;
    return 0;
}