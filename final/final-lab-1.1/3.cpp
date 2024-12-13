#include<iostream>
#include<cmath>
using namespace std;
template <typename T>
T gcd(T a, T b)
{
    if (b == 0)
       return a;
    else
       return gcd(b, a % b);
}
template<>
double gcd(double x, double y)
{
  if(fabs(y) < 1e-9)
    return x;
  return gcd(y, fmod(x,y));
}

int main()
{

    cout<<gcd<int>(24,36)<<endl;
    cout<<gcd<double>(45.00,60.00)<<endl;
}


