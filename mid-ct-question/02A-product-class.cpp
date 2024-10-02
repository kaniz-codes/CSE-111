/* 2.a) Design a Product class. The product class should have attributes for its name, price, and quantity.
Implement a function called setProduct() within the class to input the product details from the user. Additionally, create a function named printProduct() to display the product details. Ensure that setProduct() is not directly called in the main() function.
Add a destructor to print "Product object destroyed" when an object is destroyed. */

#include <iostream>
using namespace std;

class product
{
public:
    string name;
    int price, quantity;

    void setProduct()
    {
        cin >> name >> price >> quantity;
    }

    void printProduct()
    {
        cout << name << endl
             << price << endl
             << quantity << endl;
    }

    void callProduct()
    {
        setProduct();
    }

    ~product()
    {
        cout << "product object destroyed" << endl;
    }
};

int main()
{
    product p1;

    p1.callProduct();
    p1.printProduct();

    return 0;
}
