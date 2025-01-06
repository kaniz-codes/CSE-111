/* Develop a class TimeManipulator with overloaded functions to add and subtract time intervals from a given time.
Provide versions that work with hours, minutes, and seconds. */

#include <iostream>
using namespace std;

struct Time
{
    int hours;
    int minutes;
    int seconds;
};

class TimeManipulator
{
public:
    Time addTime(int h1, int h2)
    {
        Time result;
        result.hours = h1 + h2;
        result.minutes = 0;
        result.seconds = 0;
        return result;
    }

    Time addTime(int h1, int h2, int m1, int m2)
    {
        Time result;
        result.hours = h1 + h2;
        result.minutes = m1 + m2;
        result.seconds = 0;
        if (result.minutes >= 60)
        {
            result.minutes -= 60;
            result.hours++;
        }
        return result;
    }

    Time addTime(int h1, int h2, int m1, int m2, int s1, int s2)
    {
        Time result;
        result.hours = h1 + h2;
        result.minutes = m1 + m2;
        result.seconds = s1 + s2;
        if (result.seconds >= 60)
        {
            result.seconds -= 60;
            result.minutes++;
        }
        if (result.minutes >= 60)
        {
            result.minutes -= 60;
            result.hours++;
        }
        return result;
    }

    Time subTime(int h1, int h2)
    {
        Time result;
        result.hours = abs(h1 - h2);
        result.minutes = 0;
        result.seconds = 0;
        return result;
    }

    Time subTime(int h1, int h2, int m1, int m2)
    {
        Time result;
        if (h1 > h2 || (h1 == h2 && m1 >= m2))
        {
            result.hours = h1 - h2;
            result.minutes = m1 - m2;
        }
        else
        {
            result.hours = h2 - h1;
            result.minutes = m2 - m1;
        }
        result.seconds = 0;

        if (result.minutes < 0)
        {
            result.minutes += 60;
            result.hours--;
        }
        return result;
    }

    Time subTime(int h1, int h2, int m1, int m2, int s1, int s2)
    {
        Time result;
        if (h1 > h2 || (h1 == h2 && m1 > m2) || (h1 == h2 && m1 == m2 && s1 >= s2))
        {
            result.hours = h1 - h2;
            result.minutes = m1 - m2;
            result.seconds = s1 - s2;
        }
        else
        {
            result.hours = h2 - h1;
            result.minutes = m2 - m1;
            result.seconds = s2 - s1;
        }

        if (result.seconds < 0)
        {
            result.seconds += 60;
            result.minutes--;
        }
        if (result.minutes < 0)
        {
            result.minutes += 60;
            result.hours--;
        }

        // Ensure no negative time values in the result
        if (result.hours < 0) result.hours = 0;
        if (result.minutes < 0) result.minutes = 0;
        if (result.seconds < 0) result.seconds = 0;

        return result;
    }
};

int main()
{
    TimeManipulator t;
    int h1, h2, m1, m2, s1, s2;
    int format;
    cout << "What do you want to do?\n";
    cout << "1. Add time\n2. Subtract time\n";
    int type;
    cin >> type;
    cout << "Select the time format:\n";
    cout << "1. In hours\n2. In hours and minutes\n3. In hours, minutes, and seconds\n";
    cin >> format;

    Time result;

    switch (format)
    {
    case 1:
        cout << "Provide given time and current time: ";
        cin >> h1 >> h2;
        if (type == 1)
        {
            result = t.addTime(h1, h2);
        }
        else
        {
            result = t.subTime(h1, h2);
        }
        break;

    case 2:
        cout << "Provide given time and current time: ";
        cin >> h1 >> m1 >> h2 >> m2;
        if (type == 1)
        {
            result = t.addTime(h1, h2, m1, m2);
        }
        else
        {
            result = t.subTime(h1, h2, m1, m2);
        }
        break;

    case 3:
        cout << "Provide given time and current time: ";
        cin >> h1 >> m1 >> s1 >> h2 >> m2 >> s2;
        if (type == 1)
        {
            result = t.addTime(h1, h2, m1, m2, s1, s2);
        }
        else
        {
            result = t.subTime(h1, h2, m1, m2, s1, s2);
        }
        break;

    default:
        cout << "Wrong input." << endl;
        return 1;
    }

    cout << "Resulting Time: " << result.hours << " Hours, " << result.minutes << " Minutes, " << result.seconds << " Seconds\n";
    cout << endl << "Kaniz Fatema" << endl;
    cout << "Thanks for running the code!" << endl;
    cout << "Follow for more!!" << endl;
    return 0;
}
