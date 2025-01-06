/* Create a class Time that stores hours and minutes. Overload the prefix -- operator to decrement the time by 1 minute.
Example Code:
int main() {
    Time T1(2, 59);
    T1--;
    T1.display();
    return 0;
}
*/

#include<iostream>
using namespace std;
class Time
{
    public:
    int hour, minute;

    Time(int h, int m)
    {
        hour=h;
        minute=m;
    }

    void operator --(int)
    {
        minute = minute-1;

    }

    void display()
    {
        cout<<hour<<"."<<minute<<endl;
    }
};

int main()
{

    Time T1(2,59);
    T1--;
    T1.display();
    return 0;
}
