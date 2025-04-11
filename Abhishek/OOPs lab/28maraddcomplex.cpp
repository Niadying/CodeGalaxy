#include <iostream>
using namespace std;

class Complex {
private:
    int real, imag;

public:
    Complex(int r = 0, int i = 0) : real(r), imag(i) {}

    Complex operator+(const Complex& obj) {
        return Complex(real + obj.real, imag + obj.imag);
    }

    void display() {
        cout<<real<<"+i"<<imag<< endl;
    }
};

int main() {
    Complex c1(3,4), c2(1,2);
    Complex c3 = c1 + c2;
    cout << "Sum: ";
    c3.display();
    return 0;
}
