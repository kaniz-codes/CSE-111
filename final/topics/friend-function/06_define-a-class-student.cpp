/* Define a class named Student that has private members name (a string) and grade (a float). Write a friend function named calculateAverageGrade that takes an array of Student objects and returns the average grade of all students in the array.
*/
#include<iostream>
using namespace std;

class Student{
    string name;
    float grade;
    friend float calculateAvarageGrade(Student obj[3]);

};

float calculateAvarageGrade(Student obj[3])
{
    int i;
    float sum=0,avg=0;
    for(i=0; i<3;i++)
    {
        cout<<"Name: ";
        cin>>obj[i].name;
        cout<<"Grade: ";
        cin>>obj[i].grade;

        sum += obj[i].grade;
    }

    avg=sum/3;

    return avg;
}

int main()
{
    Student obj[3];

    float x= calculateAvarageGrade(obj);

    cout<<"Avarage: "<<x<<endl;
    cout<<endl<<"Kaniz Fatema"<<endl;
    cout<<"Thanks for running the code!"<<endl;
    cout<<"Follow for more!!"<<endl;

}

