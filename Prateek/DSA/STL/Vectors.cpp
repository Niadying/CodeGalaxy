#include<iostream>
#include<vector>
using namespace std;

int main (){

        vector<int>v; 
        vector<int>a(5,12);  // VECTOR a SIZE 5 AND INITIALIZED BY 12..
        for(int i : a){
                cout<<i<<" ";
        }

        vector<pair<int,int>>vec;
        vec.push_back({1,2});
        vec.emplace_back(2,3);  // pair in a vector

        cout<<vec[0].first;
        v.emplace_back(4);  // IT IS FASTER THAN PUSH BACK
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




        // ITERATORS 

        vector<int>::iterator ite = v.begin();
        // datatype :: iterator_name = iterator initialize
        // v.begin is pointing towards memory location on 1st element in vector b
        // ite++ ---> 2nd location and same 

        // vector<int>::iterator ite = v.end();  // end --> points toward location after the last part so ite-- is necessary to get to last location 
        // vector<int>::iterator ite = v.rend(); // reverse end not used 
        // vector<int>::iterator ite = v.rbegin();  // reverse begin

        v.erase(v.begin(),v.begin()+3); // (start,end)  end location should be one more than till where you want to erase..

        v.insert(v.begin(),3,5);
        // (location , number of element, value of the element)

        vector<int>h={12,12,1};
        vector<int>copy(h);
        cout<<endl<<endl;

        h.insert(v.begin()+1, copy.begin(),copy.end());
        for(int i:h){
                cout<<i<<" ";
        }
        vector<int>v1={2};
        vector<int>v2={1};
        v1.swap(v2); //-->  VECTOR V1 IS SWAPPED BY V2(v1 = 1, v2 = 2)
}
