#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    double balance;
    string pin;
    double overdraftLimit;

public:
    // Constructor
    BankAccount(double b, string Pin, double overdraft) {
        balance =b;
        pin = Pin;
        overdraftLimit = overdraft;
    }

    // Method 1: Withdraw a specific amount
    void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
            cout << "Withdrawal successful! Remaining balance: " << balance << endl;
        } else {
            cout << "Insufficient balance for this withdrawal." << endl;
        }
    }

    // Method 2: Withdraw a specific amount after confirming PIN
    void withdraw(double amount, string enteredPin) {
        if (enteredPin == pin) {
            withdraw(amount); // Call the first withdraw method
        } else {
            cout << "Incorrect PIN. Withdrawal denied." << endl;
        }
    }

    // Method 3: Withdraw a specific amount while checking overdraft limits
    void withdraw(double amount, bool checkOverdraft) {
        if (checkOverdraft) {
            if (amount <= balance + overdraftLimit) {
                balance -= amount;
                cout << "Withdrawal successful (with overdraft)! Remaining balance: " << balance << endl;
            } else {
                cout << "Overdraft limit exceeded. Withdrawal denied." << endl;
            }
        } else {
            withdraw(amount); // Call the first withdraw method
        }
    }

    // Display current balance
    void displayBalance() {
        cout << "Current balance: " << balance << endl;
    }
};

int main() {
    // Create a BankAccount object
    BankAccount account(5000.0, "1234", 1000.0);

    // Display initial balance
    account.displayBalance();

    // Case 1: Withdraw a specific amount
    cout << "\nCase 1: Withdraw 2000" << endl;
    account.withdraw(2000);

    // Case 2: Withdraw with PIN confirmation
    cout << "\nCase 2: Withdraw 2000 with PIN" << endl;
    account.withdraw(2000, "1234"); // Correct PIN
    account.withdraw(2000, "4321"); // Incorrect PIN

    // Case 3: Withdraw with overdraft limit check
    cout << "\nCase 3: Withdraw 2500 with overdraft check" << endl;
    account.withdraw(2500, true);

    // Display final balance
    account.displayBalance();

    return 0;
}
