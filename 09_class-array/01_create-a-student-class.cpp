/*  Create a Student class with public attributes name, id, and cgpa. Initialize the values with a set_data() method and print the attributes with a get_data() method.
Write a program that creates an array of students, sets their data, and prints the name of the student with the highest CGPA. */

#include<iostream>
using namespace std;

class Student
{
public:
    string Name;
    int ID;
    float CGPA;

    void set_data()
    {
        cout<<"Name: ";
        cin>>Name;
        cout<<"ID: ";
        cin>>ID;
        cout<<"CGPA: ";
        cin>>CGPA;
    }
    void get_data()
    {
        cout<<"Name: ";
        cout<<Name<<endl;
        cout<<"ID: ";
        cout<<ID<<endl;
        cout<<"CGPA: ";
        cout<<CGPA<<endl;
        cout<<endl<<"Kaniz Fatema"<<endl;
        cout<<"Thanks for running the code!"<<endl;
        cout<<"Follow for more!!"<<endl;
    }
};

int main()
{
    Student obj[3];
    int i;
    float maximum= 0;
    for(i=0; i<3; i++)
    {
        obj[i].set_data();
    }

    for(i=0; i<3; i++)
    {
        if(obj[i].CGPA>maximum)
        {
            maximum=obj[i].CGPA;
        }
        // obj[i].get_data();

    }

    for(i=0; i<3; i++)
    {
        if(maximum ==obj[i].CGPA)
        {
            obj[i].get_data();
        }


    }


}

