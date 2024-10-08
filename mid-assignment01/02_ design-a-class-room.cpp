#include <iostream>
using namespace std;
class room{
    int length, width, height;
    
    public:
    room()
    {
        length= 12;
        width= 8;
        height= 10;
    }
    
    room(int l, int w, int h)
    {
        length= l;
        width= w;
        height= h;
    }
    
    int floorArea()
    {
        return length*width;
    }
    
    int floorVolume()
    {
        return length*width*height;
    }
};
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    room obj, obj1(a,b,c), obj2(11,22,33);
    room* roomPtr = new room(10, 20,30); //create new obj with pointer
    
    cout << "Room1 floor area: " << obj.floorArea() << endl;
    cout << "Room1 volume: " << obj.floorVolume() << endl;
    
    cout << "Room2 floor area: " << obj1.floorArea() << endl;
    cout << "Room2 volume: " << obj1.floorVolume() << endl;
    
    cout << "Room3 floor area: " << obj2.floorArea() << endl;
    cout << "Room3 volume: " << obj2.floorVolume() << endl;
    
    cout << "Pointer Room floor area: " << roomPtr->floorArea() << endl;
    cout << "Pointer Room volume: " << roomPtr->floorVolume() << endl;
    
    return 0;
}
