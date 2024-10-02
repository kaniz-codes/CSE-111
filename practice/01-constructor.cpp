#include <iostream>
using namespace std;

class Room {
    float length, height, width;
    
public:
    // Parameterized constructor
    Room(float l, float h, float w) : length(l), height(h), width(w) {}

    // Copy constructor
    Room(const Room &r) {
        length = r.length;
        width = r.width;
        height = r.height;
    }

    // Method to calculate volume
    float calculateVolume() {
        return length * width * height; // Correctly returning the calculated volume
    }

    // Method to display the volume
    void displayVolume() {
        cout << "Volume: " << calculateVolume() << endl;
    }
};

int main() {
    // Create an object of Room with specific dimensions
    Room room1(10, 8, 12);
    
    // Display the volume of the first room
    cout << "Room 1:" << endl;
    room1.displayVolume();

    // Create a second object by copying the first object
    Room room2 = room1;
    
    // Display the volume of the second room
    cout << "Room 2 (Copy of Room 1):" << endl;
    room2.displayVolume();

    return 0;
}
