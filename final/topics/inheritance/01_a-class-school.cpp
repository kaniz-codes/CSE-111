/* Design a class School with attribute Department (Public). Create another class Teacher with attribute name, short_code, Teacher class inherits school in private mode.
Now initialize all the attributes using teacher class object. */

#include <iostream>
using namespace std;
class school
{
  public:
  string Department;
};
class Teacher: private school
{
    public:
    string name, short_code;
    void show(string a)
    {
        Department= a;
        cout<<"Department: "<<Department<<endl;
    }
};
int main() 
{
    Teacher obj;
    obj.name= "kaniz";
    obj.short_code= "knz";
    obj.show("CSE");
    
    cout<<"Name: "<<obj.name<<endl<<"short_code: "<<obj.short_code<<endl;
    return 0;
}
