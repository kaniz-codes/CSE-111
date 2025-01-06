/* Write a program in C++ that converts temperature values between Celsius, Fahrenheit, and Kelvin using function overloading. Implement an overloaded function convertTemperature() with the following variations:
convertTemperature(double celsius): Accepts a temperature in Celsius and returns its equivalent in Fahrenheit.
convertTemperature(double fahrenheit, char fToC): Accepts a temperature in Fahrenheit and a character to specify that it should be converted to Celsius, returning the result.
convertTemperature(double kelvin, bool isKelvin): Accepts a temperature in Kelvin and a boolean isKelvin to indicate conversion to Celsius, returning the result.
Conversions:
Celsius to Fahrenheit: F=C×9/5+32
Fahrenheit to Celsius: C=(F−32)×5/9
Kelvin to Celsius: C=K−273.15
*/

#include<iostream>
using namespace std;

void convertTemperature(double celsius)
{
    cout<<"Farhenheit: "<<celsius*95+32<<endl;
}
void convertTemperature(double Farhenheit, char fToC)
{
    cout<<"Celsius: "<<(Farhenheit-32)*59<<endl;
}
void convertTemperature(double kelvin, bool isKelvin)
{
    cout<<"Celsius: "<<(kelvin-273.15)<<endl;
}

int main()
{
    int x;
    cout<<"Enter 1 for celsius"<<endl<<"Enter 2 for Farhenheit"<<endl<<"Enter 3 for kelvin"<<endl;
    cin>>x;

    if(x==1)
    {
        double celsius;
        cout<<"Enter celsius: ";
        cin>>celsius;
        convertTemperature(celsius);
    }
    else if(x==2)
    {
        double Farhenheit;
        char fToC('k');
        cout<<"Enter Farhenheit: ";
        cin>>Farhenheit;
        convertTemperature(Farhenheit,fToC);
    }
    else if(x==3)
    {
        double kelvin;
        bool isKelvin(true);
        cout<<"Enter kelvin: ";
        cin>>kelvin;
        convertTemperature(kelvin,isKelvin);
    }
    else
    {
        cout<<"Error"<<endl;
    }
}
