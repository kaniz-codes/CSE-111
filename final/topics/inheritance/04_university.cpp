/* Create a class University with attributes (public: name, Id, private: Address, Dept). Create another class called Student with a private attribute cgpa that inherits University in protected mode.
Create another class called Teacher with private attributes called short_code and salary. Now initialize the attributes for a teacher and a student. */

#include<iostream>
using namespace std;

class University
{
    string address, dept;
public:
    string name;
    int ID;
    University(string a, string d,string n, int i)
    {
        address= a;
        dept= d;
        name= n;
        ID= i;
    }

    void show()
    {
        cout<<address<<endl<<dept<<endl;
    }
    string ret_a()
    {
        return address;
    }
    string ret_d()
    {
        return dept;
    }
    string ret_n()
    {
        return name;
    }
    int ret_i()
    {
        return ID;
    }
};
class Student: protected University
{
    float cgpa;
public:
    Student(float c,string a, string d,string n, int i) : University(a,d,n,i)
    {
        cgpa= c;
    }
    void display()
    {
        cout<<cgpa<<endl<<name<<endl<<ID<<endl;
    }

};
class Teacher
{
    string short_code;
    float salary;

public:
    Teacher(string s, float sal)
    {
        short_code= s;
        salary=sal;
    }
    void display()
    {
        cout<<"short_code: "<<short_code<<endl<<"salary: "<<salary<<endl;
    }
};
int main()
{
    Student obj(3.99,"Dhaka", "CSE", "kaniz", 12341);
    Teacher T("knz", 143435);
    University U("Dhaka","CSE", "Kaniz", 154);
    U.show();
    obj.display();
    T.display();
}
