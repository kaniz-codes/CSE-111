/* Develop a class TimeManipulator with overloaded functions to add and subtract time intervals from a given time.
Provide versions that work with hours, minutes, and seconds. */

#include <iostream>
using namespace std;

class TimeManipulator
{
private:
    int hours, minutes, seconds;

    void normalizeTime()
    {
        if (seconds >= 60)
        {
            minutes += seconds / 60;
            seconds = seconds % 60;
        }
        else if (seconds < 0)
        {
            minutes -= (seconds / -60) + 1;
            seconds = 60 + (seconds % 60);
        }

        if (minutes >= 60)
        {
            hours += minutes / 60;
            minutes = minutes % 60;
        }
        else if (minutes < 0)
        {
            hours -= (minutes / -60) + 1;
            minutes = 60 + (minutes % 60);
        }

        if (hours < 0) hours = 0;
    }

public:

    TimeManipulator(int h, int m, int s) : hours(h), minutes(m), seconds(s)
    {
        normalizeTime();
    }

    void add(int h, int m, int s)
    {
        hours += h;
        minutes += m;
        seconds += s;
        normalizeTime();
    }

    void subtract(int h, int m, int s)
    {
        hours -= h;
        minutes -= m;
        seconds -= s;
        normalizeTime();
    }

    void displayTime() const
    {
        cout << (hours < 10 ? "0" : "") << hours << ":"
             << (minutes < 10 ? "0" : "") << minutes << ":"
             << (seconds < 10 ? "0" : "") << seconds << endl;
    }
};

int main()
{
    int h, m, s, h1, m1, s1;
    cout << "Enter Initial hour: ";
    cin >> h;
    cout << "Enter Initial minute: ";
    cin >> m;
    cout << "Enter Initial second: ";
    cin >> s;

    TimeManipulator time(h, m, s);
    cout << "Initial Time: ";
    time.displayTime();

    cout << "Enter hour to add: ";
    cin >> h1;
    cout << "Enter minute to add: ";
    cin >> m1;
    cout << "Enter second to add: ";
    cin >> s1;

    time.add(h1, m1, s1);
    cout << "After adding time: ";
    time.displayTime();

    cout << "Enter hour to subtract: ";
    cin >> h1;
    cout << "Enter minute to subtract: ";
    cin >> m1;
    cout << "Enter second to subtract: ";
    cin >> s1;

    time.subtract(h1, m1, s1);
    cout << "After subtracting time: ";
    time.displayTime();

    return 0;
}
