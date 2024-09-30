/* Create a class called person. It has two attributes called Name, contact. Initialize the attributes with two objects. */

#include <iostream>
using namespace std;
class person{
    public:
    string Name;
    int Contact;
};
int main() 
{
    person p1, p2;
    p1.Name="Kaniz";
    p1.Contact=15325;
    p2.Name="Fatema";
    p2.Contact=457;
    cout<<p1.Name<<endl<<p1.Contact<<endl;
    cout<<p2.Name<<endl<<p2.Contact<<endl;
    return 0;
}
