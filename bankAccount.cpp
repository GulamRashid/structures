#include <iostream>
#include <string>
using namespace std;

class bank{
    private:
    int accountNumber;
    string accountHolderName;
    int balance=500;

    public:


    void Activity(){
        int a;
        cout<<"want to deposit? press 1 : "<<endl<<"want to check withdraw? press 2 : "<<endl<<"want to check balance? press : 3"<<endl<<"want to exit? press 4 :"<<endl;
        cin>>a;
        if(a==1){
                int deposit;
                cout<<"enter deposit balance: ";
                cin>>deposit;
                balance +=deposit;
                cout << "Deposit successful. Current balance: " << balance << endl;
        }
        else if(a==2){
            int withdraw;
            cout<<"enter withdraw balance: ";
            cin>>withdraw;
                if(balance>=withdraw){
                balance -=withdraw;
                cout << "Withdrawal successful. Current balance: " << balance << endl;
                }
                else{
                cout << "Insufficient balance. Current balance: " << balance << endl;
                };
        }
        else if(a==3){
                int displayBalance;
                cout<<"current balance: "<<balance<<endl;
            }
        else{
            cout<<"thank you";
        };
     };
        
        
        
};

int main(){
    bank account;
    account.Activity();

    return 0;
}