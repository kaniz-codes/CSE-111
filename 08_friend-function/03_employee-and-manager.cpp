/* You have two classes, Employee and Manager. The Employee class has attributes for name and salary that are private.
The Manager class has the same attributes as the Employee class and an additional attribute called department.
Implement a mechanism to pass an Employee object to the Manager class to assign the same attribute values.*/

#include<iostream>
using namespace std;
class Employee{
string name;
int salary;
public:
    void display();
//friend void Employee::display();
};
class Manager{
string name,department;
int salary;
friend void Employee::display();
};

void Employee::display()
{
    cout<<"Name: "<<endl;
    cin>>name;
    cout<<"salary: "<<endl;
    cin>>salary;
    cout<<"salary: "<<endl;

    Manager obj;

    obj.name= name;
    obj.salary= salary;

    cout<<"result: "<<obj.name<<endl<<obj.salary<<endl;
    cout<<endl<<"Kaniz Fatema"<<endl;
    cout<<"Thanks for running the code!"<<endl;
    cout<<"Follow for more!!"<<endl;
}

int main()
{

    Employee ob;
    ob.display();
}
