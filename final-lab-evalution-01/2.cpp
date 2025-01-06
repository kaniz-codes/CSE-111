#include <iostream>
using namespace std;
class Employee
{
    public:
    int Working_hour;
    virtual float getSalary()
    {
        
    }
};
class Manager : public Employee
{
    int h1;
    public:
    Manager(int h1) 
    {
        Working_hour = h1;
    }
    
    float getSalary()
    {
       return Working_hour * 400;
    }
};
class Developer : public Employee
{
    int h2;
    public:
    Developer(int h2) 
    {
        Working_hour = h2;
    }
    
    float getSalary()
    {
       return Working_hour * 500;
    }
};
int main() 
{
    Manager obj1(20);
    Developer obj2(10);

    Employee *p = &obj1;
    float result1 = p->getSalary();
    cout << "Manager Salary: " << result1 << endl;

    p = &obj2;
    float result2 = p->getSalary();
    cout << "Developer Salary: " << result2 << endl;


    return 0;
}
