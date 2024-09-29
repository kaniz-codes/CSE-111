/* 1.Create a class called person. It has two attributes called Name, contact. Initializr the attributes with two objects. */

#include <iostream>
using namespace std;
class person
{
    public:
    string Name;
    int contact;
};
int main() 
{
    person p1;
    p1.Name="Kaniz";
    p1.contact= 30154;
    cout<<p1.Name<<endl<<p1.contact<<endl;
    return 0;
}
