#include <iostream>
using namespace std;

class Room {
public:
    // Room properties
    float length, breadth, height;

    // Constructor to initialize the room dimensions
    Room(float l, float b, float h) {
        length = l;
        breadth = b;
        height = h;
    }

    // Function to calculate the area
    float calculateArea() {
        return length * breadth;
    }

    // Function to calculate the volume
    float calculateVolume() {
        return length * breadth * height;
    }
};

int main() {
    float length, breadth, height;

    // Ask user for room dimensions
    cout << "Enter the length of the room: \n";
    cin >> length;
    cout << "Enter the breadth of the room: \n";
    cin >> breadth;
    cout << "Enter the height of the room: \n";
    cin >> height;

    // Create a Room object
    Room Lab(length, breadth, height);

    // Calculate and display the area and volume
    float area = Lab.calculateArea();
    float volume = Lab.calculateVolume();

    cout << "The area of the room is " << area << " square units." << endl;
    cout << "The volume of the room is " << volume << " cubic units." << endl;

    return 0;
}
