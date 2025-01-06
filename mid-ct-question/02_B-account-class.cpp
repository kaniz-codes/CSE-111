/* 2b) Implement a class called Account with attributes like account holder name, account number, account type, and balance. Use a parameterized constructor to set these attributes when a new account is created. If attributes are not provided, use the default constructor to set the values:
account holder name = "Not Assigned"
account number = 0
account type = "Savings"
balance = 0.0 */

#include <iostream>
using namespace std;

class Account
{
	string holderName;
	int accountNumber;
	string accountType;
	float balance;

public:
	Account(string n, int a, string t, float b)
	{
		holderName = n;
		accountNumber = a;
		accountType = t;
		balance = b;
	}
	Account()
	{
		holderName = "Not Assigned";
		accountNumber = 0;
		accountType = "Savings";
		balance = 0.0;
	}
	void displayAccount()
	{
		cout << "Holder Name: " << holderName << endl;
		cout << "Account Number: " << accountNumber << endl;
		cout << "Account Type: " << accountType << endl;
		cout << "Balance: " << balance << endl;
	}
};

int main()
{
	Account acc1("John Doe", 123456, "Current", 5000.00);
	acc1.displayAccount();
	Account acc2;
	acc2.displayAccount();
	return 0;
}
