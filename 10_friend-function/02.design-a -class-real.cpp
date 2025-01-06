/* Design a class named Real with Private attribute number. Now initialize the attribute and print it using a display() function.
Design another class named Imaginary with private attribute number, initialize and display number using the display() function. */ 

#include<iostream>
using namespace std;

class Real
{
    int number;
public:
    void display();
};

class Imaginary
{
    int number;
    friend void Real::display();
};

void  Real::display()
{
    cout<<"Enter number: ";
    cin>>number;
    Imaginary obj;
    cout<<"Enter obj.number: ";
    cin>>obj.number;
    cout<<"number "<< number <<endl<<"obj.number "<< obj.number <<endl;
}

int main()
{
    Real obj;
    obj.display();
}
