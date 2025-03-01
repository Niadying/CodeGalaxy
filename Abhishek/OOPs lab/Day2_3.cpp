#include<bits/stdc++.h>
using namespace std;

int vol(int r){
    cout<<"the vol of sphere is "<<float(r)*float(r)*float(r)*1.3333*3.14;
    return 0;
}
int vol(int r,int h){
    cout<<"the vol of cylinder is "<<float(r)*float(r)*3.14*h;
    return 0;
}
int vol(int l,int b,int h){
    cout<<"the vol of the cuboid is "<<l*b*h;
}
int main(){

    cout<<"Press 1 for computing volume of sphere ,2 for cylinder  ,and 3 for cuboid ";
    int a ;
    cin>>a;

    switch (a);
    case(1):
        cout<<"enter the readius: "<<endl;
        int r;
        cin<<r;
        cout<<"the vol of sphere is : "<<vol(r)<<endl;
        break;
    
    case(2):
        cout<<"enter the redius and the height: "<<endl;
        int y,h;
        cin>>r>>h;
        cout<<"the vol of sphere is : "<<vol(y,h)<<endl;
        break;
    case(3):
        cout<<"enter the length ,breadth and the height "<<endl;
        int x,b,c;
        cin>>a>>b>>c;
        cout<<"the vol of the cuboid is: "<<vol(x,b,c)<<endl;



}