/* Create a class called “Person” with two attributes: 
(name, address). Initialize the attributes with a parameterized constructor. Print the values with a display function. Define all the methods outside the class. */

#include <iostream>
using namespace std;
class Person{
    public:
    string Name, Address;
    Person(string n, string a);
    void display();
};
Person :: Person(string n, string a)
{
    Name=n;
    Address= a;
}
void Person :: display()
{
    cout<<Name<<endl<<Address<<endl;
}
int main() 
{
    Person obj("Kaniz", "Dhaka");
    obj.display();
    return 0;
}
