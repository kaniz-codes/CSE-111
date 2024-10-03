/*  =====
 * There is a class Student that illustrates some students where each student has a name, an id number, and marks. Implement a function to set students name, id number, and another function to show the students name, id number, and marks. Now consider the above scenario and demonstrate a C++ program to set and show the average mark of 20 students using array of objects.
 ** ====
 */

#include <iostream>
#include <string>
using namespace std;

class Student
{
public:
    string name;
    int id;
    float marks;

    // function to set student details
    void setDetails(string n, int i, float m)
    {
        name = n;
        id = i;
        marks = m;
    }

    // display student details
    void showDetails()
    {
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "Marks: " << marks << endl;
    }

    // function to get marks (used for calculating average)
    float getMarks()
    {
        return marks;
    }
};

int main()
{
    const int NUM_STUDENTS = 20;
    Student students[NUM_STUDENTS]; // Array of 20 Student objects
    string name;
    int id;
    float marks, totalMarks = 0;

    // input student details
    for (int i = 0; i < NUM_STUDENTS; i++)
    {
        cout << "Enter details for student " << i + 1 << endl;
        cout << "Name: ";
        cin >> name;
        cout << "ID: ";
        cin >> id;
        cout << "Marks: ";
        cin >> marks;

        // set the details for the current student
        students[i].setDetails(name, id, marks);

        // accumulate marks to calculate the average later
        totalMarks += marks;
    }

    // display student details
    cout << "\nDetails of all students:\n";
    for (int i = 0; i < NUM_STUDENTS; i++)
    {
        cout << "\nStudent " << i + 1 << ":\n";
        students[i].showDetails();
    }

    // calculate and display the average marks
    float averageMarks = totalMarks / NUM_STUDENTS;
    cout << "\nAverage Marks of 20 students: " << averageMarks << endl;

    cout << endl;
    cout << "Kaniz Fatema" << endl;
    cout << "20245103154";
    return 0;
}
