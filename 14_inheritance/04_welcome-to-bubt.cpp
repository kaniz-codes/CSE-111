/* Create a class called BUBT with a default constructor that prints "Welcome to BUBT". Now inherit the BUBT class with Student class and Staff class. Both classes have id, address, and name as attributes.
Initialize them using their constructors. */

#include<iostream>
using namespace std;
class BUBT
{
public:
    BUBT()
    {
        cout<<"Welcome to BUBT"<<endl;
    }
};
class Student: public BUBT
{
    public:
int ID;
string address, name;
Student(int i, string a, string n)
{
    ID= i;
    address= a;
    name=n;
}
void display()
{
    cout<<"ID: "<<ID<<endl<<"address: "<<address<<endl<<"name: "<<name<<endl;
}
};
class Staff: public BUBT
{
    public:
int ID;
string address, name;
Staff(int i, string a, string n)
{
    ID= i;
    address= a;
    name=n;
}
void display()
{
    cout<<"ID: "<<ID<<endl<<"address: "<<address<<endl<<"name: "<<name<<endl;
}
};

int main()
{
    Student obj(1567, "Dhaka", "Kaniz");
    obj.display();
    Staff obj1(156557, "Mirpur", "Fatema");
    obj1.display();
}
