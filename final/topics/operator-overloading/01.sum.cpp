#include<iostream>
using namespace std;

class A
{
public:
    int x;
    A()
    {
        x=2+3;
    }
    A(int a)
    {
      x=a;
    }
    A operator + (A obj)
    {
        A ab;
        ab.x= x+obj.x;
        return ab;
    }

    A operator - (A obj)
    {
        A ab;
        ab.x= x-obj.x;
        return ab;
    }
};

int main()
{
    A ob(6), ob1(12),ob2;
    ob2= ob+ob1;
    cout<<"Sum: "<<ob2.x<<endl;
    ob2= ob-ob1;
    cout<<"Minus: "<<ob2.x<<endl;
}
