#include <iostream>
using namespace std;

template<typename kaniz>

class Test
{
    public:
    kaniz a,b;
    Test(kaniz x, kaniz y)
    {
        a=x;
        b=y;
    }
    void display()
    {
        cout<<"A: "<<a<<endl<<"B: "<<b<<endl;
    }
};
int main()
{
    Test <int> obj(3,4);
    Test <float> obj1(2.4,8.5);

    obj.display();
    obj1.display();
}