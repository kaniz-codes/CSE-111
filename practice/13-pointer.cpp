#include <iostream>
using namespace std;

class Product
{
public:
    string product_Name, product_Code;

private:
    float product_price;

public:
    Product(string name, string code, float price) : product_Name(name), product_Code(code), product_price(price) {}

    void apply_discount(float percentage)
    {
        product_price -= product_price * (percentage / 100);
    }

    void display()
    {
        cout << "Product: " << product_Name << "\nCode: " << product_Code << "\nPrice: $" << product_price << endl;
    }
};

int main()
{
    Product *ptr = new Product("Laptop", "P1234", 1000.0f);
    ptr->display();
    ptr->apply_discount(10.0f);
    cout << "\nAfter 10% discount:\n";
    ptr->display();
    delete ptr;
    return 0;
}
