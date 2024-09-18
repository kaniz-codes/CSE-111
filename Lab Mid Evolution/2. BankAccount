/* Define a class BankAccount with private attributes accountNumber and balance.
Include a constructor that initializes both attributes.
Implement getter methods for both accountNumber and balance, and a setter method for balance.
Write a code snippet to create an instance of BankAccount with an accountNumber of "your_ID" and an initial balance of 1000. Use the setter method to deposit 500 into the account.
Then, retrieve and print the balance and accountNumber using the getter methods. */

#include <iostream>
using namespace std;

class BankAccount {
    string account_number;
    float balance;
    public:
    BankAccount(string n, float b) 
    {
        account_number = n;
        balance = b;
    }
    
    string getNumber() 
    {
        return account_number;
    }
    
    float getBalance() 
    {
        return balance;
    }
    
    void deposit(float amount) 
    {
        balance += amount;
    }
};

int main() {
    BankAccount obj("20245103154", 1000);
    obj.deposit(500);
    cout << "Account Number: " << obj.getNumber() << endl;
    cout << "Balance: " << obj.getBalance() << endl;
    return 0;
}
