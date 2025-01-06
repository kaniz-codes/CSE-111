#include <iostream>
using namespace std;

template<typename K>
K sum(K a, K b)
{
    return a+b;
}
int main()
{
    cout<< sum <int>(4,6)<<endl;
    cout<< sum <float>(6.8, 9.5)<<endl;
    return 0;
}
