/* 
Write a Statistics class with overloaded mean functions:
- Mean function that calculates the mean of an array of integers.
- Mean function that calculates the mean of an array of floating-point numbers.
- Mean function that calculates the mean of two integers.
- Mean function that calculates the mean of two floating-point numbers.
*/

#include<iostream>
#include <iomanip>
using namespace std;
class statistics
{
public:
    void mean(int x[3])
    {
        int i;
        int sum=0;
        for(i=0; i<3; i++)
        {
            sum = sum + x[i];
        }
        float avg=0;
        avg=sum/3;
        cout<<"ans: "<< avg<<endl;
    }

    void mean(float x[3])
    {
        int i;
        float sum=0;
        for(i=0; i<3; i++)
        {
            sum = sum + x[i];
        }
        float avg=0;
        avg=sum/3;
        cout<<fixed<<setprecision(4)<<"ans: "<< avg<<endl;
    }
    void mean(int x, int y)
    {

        float sum=0;
        sum = x+y;
        float avg=0;
        avg=sum/2;
        cout<<"ans: "<<avg  <<endl;
    }

    void mean(float x, float y)
    {

        float sum=0;
        sum = x+y;
        float avg=0;
        avg=sum/2;
        cout<<"ans: "<< avg<<endl;
    }

};

int main()
{
    statistics s;

    int a[3]= {1,2,3};
    float b[3]= {7.6f,8.9f,9.7f};

    int a1[2]= {9,2};
    float b1[2]= {7.6f,8.9f};

    cout<<"mean1: "<<endl;
    s.mean(a);
    cout<<"mean2: "<<endl;
    s.mean(b);
    cout<<"mean3: "<<endl;
    s.mean(a1);
    cout<<"mean4: "<<endl;
    s.mean(b1);

}


