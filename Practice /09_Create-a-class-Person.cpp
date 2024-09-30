/*  Create a class “Person”. Which has two public attributes 
(Name, Address) and a private attribute contact. Initialize the attributes using constructor and print the values using a function display(). */

#include <iostream>
using namespace std;
class Person{
    int contact;
    public:
    string Name, Address;
    
    Person()
    {
        Name= "Kaniz";
        Address="Dhaka";
        contact= 112413;
    }
    void display()
    {
        cout<<Name<<endl<<Address<<endl<<contact<<endl;
    }
};
int main() 
{
    Person obj;
    obj.display();
    return 0;
}
