/*  Create a class circle with an attribute Radius. Set the value to radius using constructor. Create a non-member function called  “area()” to calculate area. Define the area() function inline. */

#include <iostream>
using namespace std;
class circle{
    public:
    float radius, area1;
    circle( float r)
    {
        radius=r;
    }
};
inline void area(float radius)
{
    float area1= 3.1416*radius*radius;
    cout<<area1<<endl;
}

int main() 
{
    float r;
    cin>>r;
    circle obj(r);
    area(r);
    return 0;
}
