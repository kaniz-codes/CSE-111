/* A class named Teacher has three attributes
  (Name, short code, Dept). Initialize the attributes using a member function called set_value() and display them using get_value(). Create one object of the Teacher class. */
#include <iostream>
using namespace std;

class Teacher
{
public:
    string Name, shortcode, Dept;

    void set_value()
    {
        cin >> Name >> shortcode >> Dept;
    }
    void get_value()
    {
        cout << Name << endl
             << shortcode << endl
             << Dept << endl;
    }
};
int main()
{
    Teacher T1;
    T1.set_value();
    T1.get_value();
    return 0;
}
