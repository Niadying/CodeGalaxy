#include <iostream>
#include <string>
using namespace std;

class strudents
{

    // these are the properties
    string name;
    string department;
    string councellor;
    double dues;

    // now these are the methods
    void changeDept(string newDept)
    {
        department = newDept;
    }

    void changedues(double a)
    {
        dues = a;
    }

};


/// @brief 
/// @return 
int main()
{

    return 0;
}