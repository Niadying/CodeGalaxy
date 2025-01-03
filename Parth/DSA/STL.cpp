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

using namespace std;

void explainvector()
{
      vector<int> v;

      v.push_back(1);
      v.push_back(2);

      cout<< v[1]<< endl;
}

int main()
{
    explainvector();
}