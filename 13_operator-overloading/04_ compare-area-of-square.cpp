/*Overload the > operator to compare the attribute area of square class for two objects.

Class square
{
Public:
float length;
-  -

};
int main()
 {
    square l1(5.3), l2(2.4), l3;
if( l1>l2)
{ cout<<”area of l1 is greater”; }
    return 0;
}
*/

#include <iostream>
using namespace std;

class square 
{
public:
    float length,area;

    square() {} 

    square(float x) 
    {
        length = x;
        area= length*length;
    }
};

bool operator >(square obj, square obj1 )
{
    if(obj.area>obj1.area)
    return true;
    else
    return false;
}

int main() {
    square l1(5.3), l2(2.4), l3;
    if(l1>l2)
    {
        cout<<"l1 is greater"<<endl;
    }
    else
    {
        cout<<"l2 is greater"<<endl;
    }
    
    return 0;
}
