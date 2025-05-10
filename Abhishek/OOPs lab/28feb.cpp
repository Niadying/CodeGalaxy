#include <iostream>
using namespace std;

class SimpleInterest {
private:
    float principal, time, rate, interest;

public:
    SimpleInterest(float p, float t) {
        principal = p;
        time = t;
        rate = 10.0;
        interest = (principal * time * rate) / 100;
    }

    SimpleInterest(float p, float t, int r) {
        principal = p;
        time = t;
        rate = r;
        interest = (principal * time * rate) / 100;
    }

    SimpleInterest(float p, float t, float r) {
        principal = p;
        time = t;
        rate = r;
        interest = (principal * time * rate) / 100;
    }

    void display() {
        cout << "Simple Interest: " << interest << endl;
    }
};

int main() {
    float p, t;
    int ri;
    float rf;
    
    cout << "Enter Principal amount and Time: ";
    cin >> p >> t;
    SimpleInterest si1(p, t);
    si1.display();
    
    cout << "Enter Principal amount, Time and Interest (int): ";
    cin >> p >> t >> ri;
    SimpleInterest si2(p, t, ri);
    si2.display();
    
    cout << "Enter Principal amount, Time and Interest (float): ";
    cin >> p >> t >> rf;
    SimpleInterest si3(p, t, rf);
    si3.display();
    
    return 0;
}
