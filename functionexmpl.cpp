#include <iostream>
using namespace std;
int r(int a){
    int sum = 0;
    cout<<"enter the number: ";
    cin>>a;
    for(int i=1; i<=a; i++){
        sum += i;
    }
    return sum;
}
int main(){
    int result = r(5);
    cout << result;
    return 0;
}