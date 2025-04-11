#include <iostream>
using namespace std;

class Complex {
    private:
        double real, imag;
    public:
        Complex() : real(0), imag(0) {}
        Complex(double r, double i) : real(r), imag(i) {}
        
        void input() {
            cout << "Enter real and imaginary parts: ";
            cin >> real >> imag;
        }
        
        void display() const {
            cout << real << " + " << imag << "i" << endl;
        }
        
        friend Complex operator+(const Complex& c1, const Complex& c2);
        friend Complex operator-(const Complex& c1, const Complex& c2);
        friend Complex operator*(const Complex& c1, const Complex& c2);
};

Complex operator+(const Complex& c1, const Complex& c2) {
    return Complex(c1.real + c2.real, c1.imag + c2.imag);
}

Complex operator-(const Complex& c1, const Complex& c2) {
    return Complex(c1.real - c2.real, c1.imag - c2.imag);
}

Complex operator*(const Complex& c1, const Complex& c2) {
    return Complex(c1.real * c2.real - c1.imag * c2.imag, c1.real * c2.imag + c1.imag * c2.real);
}

int main() {
    Complex c1, c2, result;
    int choice;
    
    cout << "Complex Number Operations using Operator Overloading\n";
    c1.input();
    c2.input();
    
    cout << "Choose operation:\n1. Addition\n2. Subtraction\n3. Multiplication\n";
    cin >> choice;
    
    switch (choice) {
        case 1:
            result = c1 + c2;
            cout << "Result: ";
            result.display();
            break;
        case 2:
            result = c1 - c2;
            cout << "Result: ";
            result.display();
            break;
        case 3:
            result = c1 * c2;
            cout << "Result: ";
            result.display();
            break;
        default:
            cout << "Invalid choice!";
    }
    
    return 0;
}