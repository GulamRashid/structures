#include <iostream>
#include <string>
using namespace std;

void rashid(){
    string a;
    cout << "Enter your name: ";
    getline(cin, a);
    cout << "Hello, " << a << "!" << endl;
}

int main(){
    rashid();
    return 0;
}
