/* Implement a BankAccount class where each account has a balance. Overload + and - operators to deposit and withdraw money.*/

#include<iostream>
using namespace std;
class BankAccount
{
public:
    int balance;

    BankAccount()
    {

    }
    BankAccount(int x)
    {
        balance=x;

    }
    BankAccount operator+(int x)
    {
        BankAccount op;
        op.balance= balance+x;
        return op;
    }

    BankAccount operator - (int x)
    {
        BankAccount op;
        op.balance= balance-x;
        return op;
    }
};

int main()
{
    BankAccount obj(430),obj1(52),obj3(0);
    int a;
    cout<<"enter 1 for diposit or 2 for withdraw: ";
    cin>>a;

    if(a==1)
    {
        cout<<"Enter number to  diposit: ";
        cin>>a;
        obj3= obj+a;
        cout<<"Diposit: "<<obj3.balance<<endl;
    }
    else if(a==2)
    {
        cout<<"Enter number to withdraw: ";
        cin>>a;
        obj3= obj-a;
        cout<<"withdraw: "<<obj3.balance<<endl;
    }
}

