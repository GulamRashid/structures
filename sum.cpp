#include <iostream>
using namespace std;

int sumN(int a){
    int sum=0;
    for(int i = 1; i <= a; i++){
        sum += i;  // Changed from sum += a to sum += i
    }
    return sum;
}

int main(){
    cout<<sumN(5)<<endl;
    cout<<sumN(10)<<endl;
    return 0;
}