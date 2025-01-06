#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    try
    {
        if (b == 0)
        {
            throw 0; 
        }
        float result = a / (float)b; 
        cout << result << endl;
    }
    catch (int x)
    {
        cout << "Error: Division by " << x << " is not allowed." << endl;
    }

    return 0;
}
