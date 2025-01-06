// Difference between pass value and pass by reference with coding example.

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
        width=x;
    }
    square(square &s)
    {
        width = s.width-5;
    }
};
int main()
{
    square s1, s2(8), s3(s2);
    cout<<"Pass value: "<<s2.width<<endl;
    cout<<"Pass : "<<s3.width<<endl;
    
    return 0;
}
