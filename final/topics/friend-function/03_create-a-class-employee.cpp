/* Create a class Employee with private members Employee_id and salary.
Write a friend function named displayEmployeeInfo (outside the class) that can access these private members and print out the employee's information.*/

#include<iostream>
using namespace std;

class Employee
{
    int Employee_id, salary;

public:
    Employee(int i, int s)
    {
        Employee_id=  i;
        salary= s;
    }

    friend void displayEmployeeInfo(Employee obj);
};

void displayEmployeeInfo(Employee obj)
{
    cout<<"Employee_id: "<<obj.Employee_id<<endl<<"salary: "<<obj.salary<<endl;
    cout<<endl<<"Kaniz Fatema"<<endl<<"Thanks for running the code!"<<endl;
    cout<<"Follow for more!!"<<endl;
}

int main()
{
    int i,s;
    cout<<"Employee ID: ";
    cin>>i;
    cout<<"salary: ";
    cin>>s;
    Employee obj(i,s);
    displayEmployeeInfo(obj);

}

