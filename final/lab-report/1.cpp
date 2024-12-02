#include <iostream>
using namespace std;

class Company
{
protected:
    int no_of_employee, no_of_dept, employee_id;
    string employee_name;

public:
    void set_com_value(int num, int dept, int id, string name)
    {
        no_of_employee = num;
        no_of_dept = dept;
        employee_id = id;
        employee_name = name;
    }

    void display_com_value()
    {
        cout << "Number of Employees: " << no_of_employee << endl;
        cout << "Number of Departments: " << no_of_dept << endl;
        cout << "Employee ID: " << employee_id << endl;
        cout << "Employee Name: " << employee_name << endl;
    }
};

class HR
{
protected:
    string address, contact;
    float salary;

public:
    void set_hr_value(string a, float s, string c)
    {
        address = a;
        salary = s;
        contact = c;
    }

    void display_hr_value()
    {
        cout << "Address: " << address << endl;
        cout << "Salary: " << salary << endl;
        cout << "Contact: " << contact << endl;
    }
};

class Employee : public Company, public HR
{

};

int main()
{
    Employee obj;
   obj.set_com_value(154, 10, 101, "Kaniz");
   obj.set_hr_value("Dhaka", 1234134.245, "1341352352446");
   obj.display_com_value();
   obj.display_hr_value();
   cout<<"Kaniz Fatema"<<endl<<"20245103154"<<endl;

  return 0;
}
