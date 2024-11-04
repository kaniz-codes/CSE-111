/* Create a Teacher class with public attributes Name, Short_code, Address, and a private attribute salary.
Initialize the attributes for 10 objects of the Teacher class.
Now, find a specific teacher based on the short code (given by user) and
print the details of that teacher using a pointer. Also, find the average salary of the teachers. */

#include<iostream>
using namespace std;

class Teacher{
int salary;
public:
    string name, short_code,address;

    void get_data()
    {
        cout<<"Name: ";
        cin>>name;
        cout<<"short_code: ";
        cin>>short_code;
        cout<<"Address: ";
        cin>>address;
    }

    void display_data()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"short_code: "<<short_code<<endl;
        cout<<"Address: "<<address<<endl;
    }
};

int main()
{

    Teacher obj[2];
    int i;
    string x;
    cout<<"Search code: ";
    cin>> x;
    Teacher *P = obj;
    for(i=0; i<2; i++)
    {
        obj[i].get_data();
    }

    for(i=0; i<2; i++)
    {
        if(obj[i].short_code==x)
        {
            cout<<"Found Information"<<endl;
            obj[i].display_data();
            break;
        }
    }
}
