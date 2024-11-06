/* Create a class called Manager with the following attributes, name,dept,unique_ID.Overload the constructors (default,parameterized and copy constructor).
Create three objects of the manager class to invoke three constructors. */

#include<iostream>
using namespace std;

class Manager
{
public:
    string name,dept;
    int unique_ID;

    Manager()
    {

    }

    Manager(string n, string d,int i)
    {
        name= n;
        dept=d;
        unique_ID=i;
    }

    Manager(Manager &M)
    {
        name= M.name;
        dept= M.dept;
        unique_ID= M.unique_ID;
    }
};

int main()
{
     Manager obj,obj1("Kaniz", "CSE", 154), obj3(obj1);

     cout<<"Name: "<<obj3.name<<endl<<"Dept: "<<obj3.dept<<endl<<"ID: "<<obj3.unique_ID<<endl;

}
