/* You are a bank manager now. Define a class Branch with 3 attributes: branch_name, branch_location, and employee[30] (array of objects).
Use the get and set methods to set the values of the objects and print them.
Take a user input of branch_location (string type).
Now match which object matches with the new branch name and print all the attributes related to that object. */

#include <iostream>
using namespace std;

class Branch {
public:
    string branch_name, branch_location, employee;

    void get_data() {
        cout << "branch_name: ";
        cin >> branch_name;
        cout << "branch_location: ";
        cin >> branch_location;
        cout << "Employee Name: ";
        cin >> employee;
    }

    void set_data() {
        cout << "Damn Output!" << endl;
        cout << "branch_name: " << branch_name << endl
             << "branch_location: " << branch_location << endl
             << "Employee Name: " << employee << endl;
    }
};

int main() {
    Branch obj[2];  // Array of 2 Branch objects

    // Loop to get data for each branch
    for (int i = 0; i < 2; i++) {
        obj[i].get_data();  // Call get_data() for each Branch object
    }

    // Loop to display data for each branch
    for (int i = 0; i < 2; i++) {
        obj[i].set_data();  // Call set_data() for each Branch object
    }
    cout<< " Good job kaniz!!!"
    return 0;
}
