#include <iostream>
using namespace std;

int main()
{
    int age;
    cin >> age;

    try
    {
       if(age<18)
        {
            throw age;
        }
        cout<<"You're eligible: "<<age;
    }
    catch(int x)
    {
        cout<<"Age can't be less than "<<age<<endl;
    }
    
}
