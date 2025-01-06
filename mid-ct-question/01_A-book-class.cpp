/* 1. a) Define the class Book for the given code:
int main() {
	Book b1;
	b1.readBook();
	b1.displayBook();
	return 0;
*/

#include <iostream>
using namespace std;

class Book
{
public:
	void readBook()
	{
		cout << "Reading Book" << endl;
	}
	void displayBook()
	{
		cout << "Displaying Book" << endl;
	}
};

int main()
{
	Book b1;
	b1.readBook();
	b1.displayBook();
	return 0;
}
