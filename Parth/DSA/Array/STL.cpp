// #include <iostream>
// #include<utility>

// using namespace std;

// void explainpair()
// {
//     pair<int,int> p = {1,3};

//     cout << p.first<< "   "<<p.second;

//     pair<int, pair<int, int>> q= {1, {3, 4}};

//    cout << q.first << " " << q.second.second<<" "<< q.second.first<<endl;
    
// }


// int main()
// {
    
// explainpair();


//     return 0; 
// }


// void explainpair() {
//     pair<int, int> p = make_pair(1, 3); // Correct initialization
//     cout << p.first << "   " << p.second << endl;

//     pair<int, pair<int, int> > q = make_pair(1, make_pair(3, 4)); // Nested pair with make_pair
//     cout << q.first << " " << q.second.second << " " << q.second.first << endl;
//     pair<int, int> arr[] =  make_pair{{1,2},{2,5},{5,1}} ;
// }

// int main() {
//     explainpair();
//     return 0;
// }


#include <iostream>
#include <utility>
#include<vector>
#include<list>
#include<deque>
#include<stack>
#include<queue>

using namespace std;

// void explainvector()
// {
//       vector<int> v;

//       v.push_back(1);
//       v.emplace_back(2);
//       v.emplace_back(5);

//       cout<< v[1]<< endl;

//       for(auto it : v){
//         cout<<it<<" ";

       
//       }
//       cout<<endl;
//        v.erase(v.begin()+1);
//        for(auto it : v){
//         cout<<it<<" ";

       
//       }

// }

// void explainlist()
// {
//     list<int> ls;
//     ls.push_back(1);
//     ls.emplace_back(5);
//     ls.push_front(3);
    
// }
// void explaindeque()
// {
//     deque<int> dq;
//     //rest are same as vector
// }
// void explainstack(){
//     stack<int> st;
//     st.push(1);
//     st.push(2);
//     st.push(3);

//     cout << st.top()<<endl;;
//     st.pop();
//     cout <<st.top();

void explainqueue(){
    queue<int> q;
    q.push(1);
    q.push(2);
    q.emplace(4);

    q.back() +=5;
    cout<<q.back();

}

void explainPQ()
{
    priority_queue<int> pq;

}




int main()
{
    explainqueue(); 
    return 0;
}