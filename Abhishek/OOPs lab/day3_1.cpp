#include<bits/stdc++.h>
using namespace std;

void vol(int r){
    cout<<"the vol of sphere is "<<r*r*r*1.3333*3.14;
    
}
void vol(int r,int h){
    cout<<"the vol of cylinder is "<<r*r*3.14*h;
    
}
void vol(int l,int b,int h){
    cout<<"the vol of the cuboid is "<<l*b*h;
    
}
int main(){

    cout<<"What do you find the volume of? "<<endl<<"1.Sphere"<<endl<<"2.Cylinder"<<endl<<"3.Cuboid"<<endl<<"Enter the designated number for the shape"<<endl;
    int a ;
    cin>>a;

    switch (a){
        case 1:
            cout<<"enter the radius: "<<endl;
            int r;
            cin>>r;
            cout<<"the vol of sphere is : ";
            vol(r);
            break;
        
        case 2:
            cout<<"enter the radius and the height: "<<endl;
            int y,h;
            cin>>y>>h;
            cout<<"the vol of sphere is : ";
            vol(y,h);
            break;
        case 3:
            cout<<"enter the length ,breadth and the height "<<endl;
            int x,b,c;
            cin>>x>>b>>c;
            cout<<"the vol of the cuboid is: ";
            vol(x,b,c);
            break;
    }


}