/* Create a class called square1 and square2. Now calculate their are (private attribute). And find which class’s area is greater.  */
#include <iostream>
using namespace std;
class square2;
class square1 {
    int area;
public:
    void calculate() {
        int length;
        cin >> length;
        area = length * length;
        cout << "Area of square1: " << area << endl;
    }
    friend void func(square1 obj1, square2 obj2);
};
class square2 {
    int area1;
public:
    void calculate() {
        int length1;
        cin >> length1;
        area1 = length1 * length1;
        cout << "Area of square2: " << area1 << endl;
    }
    friend void func(square1 obj1, square2 obj2);
};
void func(square1 obj1, square2 obj2)
{
    if (obj1.area > obj2.area1) {
        cout << "Square1 has greater area" << endl;
    } else {
        cout << "Square2 has greater area" << endl;
    }
}
int main() {
    square1 obj1;
    square2 obj2;
    obj1.calculate();
    obj2.calculate();
    func(obj1, obj2);

    return 0;
}

