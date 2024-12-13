/* Create a class “Distance” which has two attributes (length,width). Initialize the attributes using a parameterized constructor and display the attributes. */

#include <iostream>
using namespace std;
class Distance{
    public:
    int length, width;
    
    Distance(int l,int w)
    {
        length=l;
        width=w;
    }
    void display()
    {
        cout<<length<<endl<<width<<endl;
    }
    
};
int main() 
{
    Distance d1(12,15);
    d1.display();
    return 0;
}
