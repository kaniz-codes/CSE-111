/* Overload the functions to calculate the area of a circle, rectangle, and triangle.
When you pass the radius, the area of the circle will be calculated. When you pass the length and width,
the area of the rectangle will be calculated. When you pass the base and height,
the area of the triangle will be calculated. (Area of triangle: base×height/2) */

#include<iostream>
using namespace std;
float calculate(float r)
{
    cout<<"Area of circle= "<<3.1416*r*r<<endl;
}
float calculate(int length, int width)
{
   cout<<"Area of Rectangle= "<< length*width <<endl;
}
float calculate(float base, float hight)
{
   cout<<"Area of Triangle= "<< 0.5*base*hight <<endl;
}

int main()
{
    int x;
    cout<<"Enter 1 for circle"<<endl<<"Enter 2 for Rectangle"<<endl<<"Enter 3 for Triangle"<<endl;
    cin>>x;

    if(x==1)
    {
        float r;
        cout<<"Enter Radius: ";
        cin>>r;
        calculate(r);
    }
    else if(x==2)
    {
        int length, width;
        cout<<"Enter base: "<<endl;
        cin>>length;
        cout<<"Enter width: "<<endl;
        cin>>width;
        calculate(length,width);
        cout << endl << "Kaniz Fatema" << endl;
        cout << "Thanks for running the code!" << endl;
        cout << "Follow for more!!" << endl;
    }
    else if(x==3)
     {
        float base, hight;
        cout<<"Enter base: "<<endl;
        cin>>base;
        cout<<"Enter hight: "<<endl;
        cin>>hight;
        calculate(base,hight);
    }
}
