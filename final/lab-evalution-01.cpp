#include <iostream>
using namespace std;
class Distance
{
    int width, height;
public:
    // Constructor
    Distance(int w, int h)
    {
        width= w;
        height=h;
    }

    // Overload the < operator
    bool operator<(Distance d)
    {
        if(height<d.height)
        return true;
        else
        return false;
    }
};
int main() {
    Distance D1(11, 10), D2(5, 11); 

    if (D1 < D2) {
        cout << "Height of D1 is less than D2" << endl;
    } else {
        cout << "Height of D2 is less than D1" << endl;
    }

    return 0;
}
