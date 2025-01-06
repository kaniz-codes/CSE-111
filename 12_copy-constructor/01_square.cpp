/* Design a class called square with width as attribute. Now define a copy constructor to decrease the width of an object with another object by 50. Create three objects to invoke the constructors. */
#include <iostream>
using namespace std;
class square
{
    public:
    int width;
    square()
    {
        
    }
    
    square(int x)
    {
        width= x;
    }
    
    square(square &s)
    {
        width= s.width-50;
    }
    
};
int main() 
{
    square s1,s2(95), s3(s2);
    cout<<s3.width;
    return 0;
}
