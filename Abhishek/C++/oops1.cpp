#include <iostream>
#include <string>
using namespace std;

class students
{
    public:
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



int main()
{
    students s007;
    s007.name="abhishek singh";
    s007.department= "CSE Core I";
    s007.councellor= "rahul chaurasia";
    s007.dues=0000;

    cout<< "the name of the student is "<<s007.name<< " adn the deaprt is "<< s007.department<<endl;


    return 0;
}