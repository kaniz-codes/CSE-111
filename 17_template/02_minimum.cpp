#include <iostream>
using namespace std;

template<typename K>
K minimum(K a, K b)
{
    if(a>b)
    {
        cout<<"B is minimum"<<endl;
    }
    else
    {
        cout<<"A is minimum"<<endl;
    }
    return a;
}
int main()
{
    minimum<int>(4,6);
    minimum<float>(6.8, 9.5);
    return 0;
}
