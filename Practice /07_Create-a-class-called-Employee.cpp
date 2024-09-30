/* Create a class called Employee which has two public attributes Name and Address. A private attribute salary to store the salary. Now create an object of the class to initialize the attributes and display the public attributes. */

#include <iostream>
using namespace std;
class Employee{
    int salary=12415;
    public:
    string Name, Address;
    void display()
    {
        cout<<salary<<endl;
    }
};
int main() 
{
    Employee obj;
    obj.Name="Kaniz";
    obj.Address="Dhaka";
    cout<<obj.Name<<endl<<obj.Address<<endl;
    obj.display();
    return 0;
}
