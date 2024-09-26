/* 2.a) Design a Product class. The product class should have attributes for its name, price, and quantity.
Implement a function called setProduct() within the class to input the product details from the user. Additionally, create a function named printProduct() to display the product details. Ensure that setProduct() is not directly called in the main() function.
Add a destructor to print "Product object destroyed" when an object is destroyed. */

#include <iostream>
using namespace std;
class Product 
{
    string name;
    float price;
    int quantity;
public:
    void setProduct() 
    {
        cout << "Enter product name: ";
        cin >> name;
        cout << "Enter product price: ";
        cin >> price;
        cout << "Enter product quantity: ";
        cin >> quantity;
    }
    void printProduct() 
    {
        cout << "Product Name: " << name << endl;
        cout << "Product Price: " << price << endl;
        cout << "Product Quantity: " << quantity << endl;
    }
    ~Product() {
        cout << "Product object destroyed." << endl;
    }
};
int main() 
{
    Product p;
    p.setProduct();
    p.printProduct();
    return 0;
}
