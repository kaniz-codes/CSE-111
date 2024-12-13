/* Create a class called Square with two attributes length and width. Now calculate the area using a function. Find which object is smaller. */

#include <iostream>
using namespace std;
class Square{
    public:
    int length, width;
    
    int area()
    {
        return length*width;
    }
};
int main() 
{
    Square obj,obj1;
    obj.length=10;
    obj.width=20;
    obj1.length=30;
    obj1.width=50;
    int area2=obj.area();
    int area3=obj1.area();
    if(area2<area3)
    {
        cout<<"Obj is smaller"<<endl;
    }
    else
    {
        cout<<"Obj1 is smaller"<<endl;
    }
    return 0;
}
