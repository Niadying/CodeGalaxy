#include <iostream>
using namespace std;

class Room {
private:
    double length, breadth, height;

public:
    
    Room(double len, double brd, double hgt) {
        length = len;
        breadth = brd;
        height = hgt;
    }

    
    double Area() {
        return length * breadth;
    }

    
    double Vol() {
        return length * breadth * height;
    }
};

int main() {
    double length, breadth, height;

    // Get user input for room dimensions
    cout << "Enter the length of the room: ";
    cin >> length;
    cout << "Enter the breadth of the room: ";
    cin >> breadth;
    cout << "Enter the height of the room: ";
    cin >> height;

    Room Room1(length,breadth,height);

    cout<<"the area of room1 is : "<<Room1.Area<<endl;
    cout<<"the volume of room1 is : "<<Room1.Vol<<endl;
}    

