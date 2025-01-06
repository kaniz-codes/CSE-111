/* Overload the + operator to increase the attribute length of square class by 10.

Class square
{
Public:
float length;
};
int main()
 {
    square s1(5.3), s2(2.4), s3;
    s3 = s1 + 10;
    s3 = 10 + s1;
    cout<< s3.length << endl;
    return 0;
}
*/

#include <iostream>
using namespace std;

class square {
public:
    float length;

    square() {} 

    square(float x) 
    {
        length = x;
    }

    square operator + (int e) 
    {
        square s;
        s.length = length + e;
        return s;
    }

    friend square operator + (int e, square obj);
};

square operator + (int e, square obj) 
{ 
    square k;
    k.length = e + obj.length;
    return k;
}

int main() {
    square s1(5.3), s2(2.4), s3;
    s3 = s1 + 10;
    cout<< s3.length << endl;
    s3 = 10 + s1;
    cout<< s3.length << endl;

    return 0;
}
