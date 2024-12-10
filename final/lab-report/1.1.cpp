#include <iostream>
using namespace std;
class Company
{
protected:
    int no_of_employee, no_of_dept, employee_id;
    string employee_name;
public:
    void set_value(int num, int dept, int id, string name)
    {
        no_of_employee = num;
        no_of_dept = dept;
        employee_id = id;
        employee_name = name;
    }
};
class HR
{
protected:
    string address, contact;
    float salary;
public:
    void set_value(string a, float s, string c)
    {
        address = a;
        salary = s;
        contact = c;
    }
    
};
class Employee : public Company, public HR
{
public:
     void display_value()
    {
        cout <<endl<< "HR Information: "<< endl;
        cout << "Address: " << address << endl;
        cout << "Salary: " << salary << endl;
        cout << "Contact: " << contact << endl;
        
        cout << "Company Information: "<< endl<<endl;
        cout << "Number of Employees: " << no_of_employee << endl;
        cout << "Number of Departments: " << no_of_dept << endl;
        cout << "Employee ID: " << employee_id << endl;
        cout << "Employee Name: " << employee_name << endl;
    }
};
int main()
{
    Employee obj;
    obj.Company::set_value(154, 10, 101, "Kaniz");
    obj.HR::set_value("Dhaka", 9134.45, "1341352352446");
    obj.display_value();
    cout<<endl<<"Name: Kaniz Fatema"<<endl<<"ID: 20245103154"<<endl;
    return 0;
}

