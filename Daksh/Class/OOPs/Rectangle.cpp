#include <iostream>

class Rectangle {
public:
    int length;
    int width;

    // Constructor that initializes the rectangle with length and width
    Rectangle(int l, int w) : length(l), width(w) {}

    // Method to display the rectangle dimensions
    void display() {
        std::cout << "Length: " << length << ", Width: " << width << std::endl;
    }
};

int main() {
    Rectangle rect(10, 5); // Create an object of Rectangle
    Rectangle &refRect = rect;  // Reference variable referring to the object 'rect'
    
    refRect.display();  // Accessing the object through the reference variable

    // Modifying the original object through the reference variable
    refRect.length = 20;
    refRect.width = 10;
    
    refRect.display();  // Display updated dimensions through the reference

    return 0;
}
