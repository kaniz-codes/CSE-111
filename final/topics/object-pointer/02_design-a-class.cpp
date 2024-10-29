#include<iostream>
using namespace std;

class product{
    int product_price;
public:
    string product_Name;
    int product_code;
    product(string n,int i, float p)
    {
        product_Name= n;
        product_code= i;
        product_price= p;
    }
    void apply_discount(float x)
    {
        product_price= product_price-(product_price*x/100);
        cout<<product_price<< endl;
    }

};

int main()
{
    product obj("Kaniz", 154, 324154);
    float x;
    cout<<"Enter percentage: ";
    cin>>x;
    product *ptr;
    ptr= &obj;
    ptr ->apply_discount(x);

}
