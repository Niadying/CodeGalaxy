#include<iostream>
#include<vector>
using namespace std;

int main (){

        vector<int>v; 
        vector<int>a(5,12);  // VECTOR a SIZE 5 AND INITIALIZED BY 12..
        for(int i : a){
                cout<<i<<" ";
        }
        cout<<endl;
        // IT IS A DYNAMC ARRAY. THAT MEANS IT CAN INCREASE ITS SIZE IF THE ARRAY IF FULL. IT CREATES ANOTHES VECTOR OF DOUBLE SIZE AND COPY EVERYTHING AT IT AND OLD ONE IS DEAD..
        v.push_back(1);
        cout<<"Capacity -> "<<v.capacity()<<endl;
        v.push_back(766);
        cout<<"Capacity -> "<<v.capacity()<<endl;
        v.push_back(86);
        cout<<"Capacity -> "<<v.capacity()<<endl; // PEHLE VECTOR 2 KA HUA FIR 3RD DALNE GYE TOH SIZE DOUBLE HO GYA.

        vector<int>b(v); // VECTOR b AND IT IS COPY  OF VECTOR v..
        vector<int>c(a);  // VECTOR c AND IT IS COPY OF  VECTOR a..
        for(int i : b){
                cout<<i<<" ";
        }
        cout<<endl;

        for(int i:c){
                cout<<i<<" ";
        }
        cout<<endl;
        cout<<"Size -> "<<v.size()<<endl;

        cout<<"Front -> "<<v.front()<<endl;
        cout<<"Back -> "<<v.back()<<endl;

        v.pop_back();
        for(int i : v){
                cout<<i<<" ";
        }

        v.clear();  // WHILE CLEARING ONLY SIZE BECOMES ZERO, CAPACITY REMAINS SAME..

        
}
