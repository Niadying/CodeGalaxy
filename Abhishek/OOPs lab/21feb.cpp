#include<bits/stdc++.h>
using namespace std;

class student{
    private:
        int maths_m;
        int phy_m;
        int chem_m;
    public :
        student(int marks1,int marks2){
            maths_m=marks1;
            phy_m=marks2;
            cout<<"this is a parametarized constructor "<<maths_m<<" "<<phy_m<<endl;
            
        };
        student(){
            maths_m=0;
            phy_m=0;
            cout<<"this is a default constructor"<<endl<<maths_m<<" "<<phy_m<<endl;
        };
        student(const student &obj){
            maths_m=obj.maths_m;
            phy_m=obj.phy_m;
            cout<<"This is a copy costructor"<<endl;
            cout<<"maths: "<<maths_m<<" physics : "<<phy_m<<endl;
        };
        ~student(){
            cout<<"the destructor is called"<<endl;
        }
        
};
int main(){
    student Sarthak(67,69);
    student abhishek;
    student copy=abhishek;
    
    return 0;
}