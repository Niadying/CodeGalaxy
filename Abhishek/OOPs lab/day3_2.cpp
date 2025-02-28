#include <bits/stdc++.h>
using namespace std;

class shape {
private:
    int radius;
    int height;
    int length;
    int breadth;

public:
    
    void set_datasphere(int radius) {
        this->radius = radius;
    }
    void set_datacylinder(int radius, int height) {
        this->radius = radius;
        this->height = height;
    }
    void set_datacuboid(int length, int breadth, int height) {
        this->length = length;
        this->breadth = breadth;
        this->height = height;
    }

    
    void vol(int r) {
        cout << "The volume of sphere is " << r * r * r * 1.3333 * 3.14 << endl;
    }

    void vol(int r, int h) {
        cout << "The volume of cylinder is " << r * r * 3.14 * h << endl;
    }

    void vol(int l, int b, int h) {
        cout << "The volume of the cuboid is " << l * b * h << endl;
    }
};

int main() {
    shape obj;

    cout<< "What do you want to find the volume of?" << endl
        << "1. Sphere" << endl
        << "2. Cylinder" << endl
        << "3. Cuboid" << endl
        << "Enter the designated number for the shape: ";
    int a;
    cin >> a;

    switch (a) {
        case 1:
            cout << "Enter the radius: ";
            int r;
            cin >> r;
            obj.vol(r);
            break;

        case 2:
            cout << "Enter the radius and the height: ";
            int y, h;
            cin >> y >> h;
            obj.vol(y, h);
            break;

        case 3:
            cout << "Enter the length, breadth, and height: ";
            int x, b, c;
            cin >> x >> b >> c;
            obj.vol(x, b, c);
            break;

        default:
            cout << "Invalid input. Please enter 1, 2, or 3." << endl;
            break;
    }

    return 0;
}
