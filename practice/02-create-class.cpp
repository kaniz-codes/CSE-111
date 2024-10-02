/* 1.Create a class called person. It has two attributes called Name, contact. Initializr the attributes with two objects. */

#include <iostream>
using namespace std;
class person
{
public:
    string Name;
    int Contact;
};

int main()
{
    person p1, p2;
    p1.Name = "Kaniz";
    p2.Name = "Fatema";
    p1.Contact = 12334;
    p2.Contact = 54747;
    cout << p1.Name << endl
         << p1.Contact << endl;
    cout << p2.Name << endl
         << p2.Contact << endl;
    return 0;
}
