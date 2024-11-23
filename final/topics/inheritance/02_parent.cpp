/* Create a class called Parent with a private attribute p and another class called Child with a private attribute called c.
Now write a function in the Child class to multiply the attributes and print them. */
#include<iostream>
using namespace std;

class parent
{
 int p;
 public:
    parent(int x)
    {
        p=x;
    }
    int ret_p()
    {
        return p;
    }
};

class child: public parent
{
    int c;
public:
    child(int y, int z) : parent(z)
    {
        c=y;
    }
    void multiply()
    {
        cout<<"Ans: "<<c*ret_p()<<endl;
    }
};

int main()
{
    child obj(3, 9);
    obj.multiply();
}
