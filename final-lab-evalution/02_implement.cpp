/* Implement code for the statement: ob1 = (10 + ob3) * ob2 to compile correctly. */

#include<iostream>
using namespace std;
class calculate
{
public:
    int value;

    calculate()
    {

    }
    calculate(int x)
    {
         value= x;
    }

    friend calculate operator +(int x, calculate o);

    calculate operator * (calculate obj1)
    {
        calculate op;
        op.value= value * obj1.value ;
        return op;
    }
};
    calculate operator + (int x, calculate o)
    {
        calculate o1;
        o1.value= x+o.value;
        return o1;

    }

int main()
{
     calculate ob,ob1(0),obj(0),ob2(50),ob3(90);
     obj=(10+ob3)*ob2;
     //cout<<"output "<<obj.value<<endl;
     //ob1=(10+ob3)*ob2
      cout<<"output1 "<<obj.value<<endl;
}
