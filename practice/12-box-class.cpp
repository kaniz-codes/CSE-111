/* Define a class “Box” with three attributes length, width and area. Initialize them with a parameterized constructor and print “Box created”. Calculate the area of the Box and print. Lastly, use a destructor to print “Box destroyed”. */

#include <iostream>
using namespace std;
class Box{
    public:
    int length,width,area;
    Box(int l, int w);
   ~Box();
};
Box :: Box(int l, int w)
{
    length=l;
    width=w;
    area= length*width;
    cout<<"Box created"<<endl<<"area: "<<area<<endl;
}
Box :: ~Box()
{
    cout<<"Box destroyed"<<endl;
}

int main() 
{
    Box obj(17,12);
    return 0;
}
