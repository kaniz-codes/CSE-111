/* Create an Employee class with public attributes: Name, address, and private attributes: salary and working_hours. Another class called HR with public attributes name, address, and salary.
Initialize the attributes with parameterized constructors.
Now, a function called calculateBonus() in HR class will calculate the bonus of employees based on their salary and working hours. 5% bonus if working hours > 40 hr, 20% bonus if working hours > 30 hr, 10% bonus if working hours > 20 hr, otherwise no bonus is allocated.
Implement the program to show the bonus amount to employees. */


#include <iostream>
using namespace std;

class Employee {
    int salary, working_hours;

public:
    string name, address;

    Employee(string n, string a, int s, int h) {
        salary = s;
        working_hours = h;
        name = n;
        address = a;
    }

    friend float calculateBonus(Employee emp);
};

class HR {
public:
    string name, address;
    int salary;

    HR(string n, int s, string a) {
        salary = s;
        name = n;
        address = a;
    }
};

float calculateBonus(Employee emp) {
    float bonus = 0;

    if (emp.working_hours > 40) {
        bonus = emp.salary * 0.05;
    } else if (emp.working_hours > 30) {
        bonus = emp.salary * 0.20;
    } else if (emp.working_hours > 20) {
        bonus = emp.salary * 0.10;
    }

    return bonus;
}

int main() {
    Employee emp("Kaniz", "Dhaka", 5000, 35);
    HR hr("Fatema", 7000, "Bangladesh");

    float bonus = calculateBonus(emp);
    cout << emp.name << " got bonus: Tk " << bonus << endl;

    return 0;
}
