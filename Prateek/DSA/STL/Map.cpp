#include<iostream>
#include<map>
using namespace std;

int main (){
    // TYPE OF DATA STRUCTURE WHIC STORES DATA IN THE FORM OF KEYS..
    // ONE KEY WILL POINT TOWARDS A SINGLE VALUE, 2 KEYS EK HI VALUE KO POINT KR SKTI HAI BUT 1 KEY 2 VLAUE KO POINT NHI KR SKTI.
    // IN CASE OF MAP OUTPUT WOULD BE SORTD BUT IN CASE OF UNORDERED MAP, OUTPUT IS RANDOM..

    map<int,string> m;
    m[1]="Prateek";
    m[13]="IIIT Bhopal";  
    m[2]="Sahu";
    m.insert({5,"Coumpter Science Engineer"});
    cout<<"Before erasing anything "<<endl;
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }

    cout<<"Finding 45 -> "<<m.count(45)<<endl<<endl;

    m.erase(13);
    cout<<"After erasing 13 "<<endl;
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl; // COMPLEXITY OF EVERYTHING IS O(log(n)),,
    }

    auto it = m.find(5);
    for(auto i  = it; i!=m.end() ; i++){
        cout<<(*i).first<<endl;
    }

}