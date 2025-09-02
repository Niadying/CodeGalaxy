#include<bits/stdc++.h>
using namespace std;

// LOGIC

/*
    -> GET A PAIR OF WORDS AND START COMPARING SO THAT WE WILL GET TO KNOW WHICH WILL COME BEFORE.
    -> WE WILL MAKE A DIRECTED GRAPH AND THEN FIND IT'S TOPOLOGICAL SORT TO DO SO.  

*/


// 2 CASES WHERE DICTIONARY WILL BE WRONG ARE :-

/*
    -> WHEN THERE IS CYCLIC DEPENDENCY.
    -> WHEN ALL THE ELEMENTS OF SUBSTRING MATCHES EACH OTHER, AND SIZE OF 1ST STRING IS GREATER THAN 2ND STRING.
*/


vector<int> topoSort(int V, vector<vector<int>>& edges){
    vector<int> topo;
    queue<int>q;
    vector<int>indegree(V,0);
    for(int i = 0; i<V; i++){
        for(auto it:edges[i]){
            indegree[it]++;
        }
    }
    for(int i = 0; i<V; i++){
        if(indegree[i]==0)q.push(i);
    }

    while(!q.empty()){
        int node = q.front();
        q.pop();
        topo.push_back(node);
        for(auto it:edges[node]){
            indegree[it]--;
            if(indegree[it]==0) q.push(it);
        }
    }
    return topo;
}

string findOrder(vector<string> &words) {
    // COUNTING NUMBER OF DIFFERENT WORDS
    set<char>s;
    for(auto &it:words){
        for(auto c:it){
            s.insert(c);
        }
    }
    // MAPPING ID'S SO THAT WE CAN CONVERT IT IN INT AND BACK TO CHAR AFTER SORTING.
    map<char,int>mpp;
    map<int,char>Reversempp;
    int id = 0;
    for(auto c:s){
        Reversempp[id] = c;
        mpp[c] = id++;
    }
    int n = s.size();

    // TRYING TO MAKE A DIRECTED GRAPH

    vector<vector<int>>adj(n,vector<int>(0,0));
    for(int j = 0; j<words.size()-1; j++){
        string word1 = words[j];
        string word2 = words[j+1];
        char from = '#', to = '#';
        bool poss = false;
        for(int i = 0; i<min(word1.length(),word2.length()); i++){
            if(word1[i]!=word2[i]){
                poss = true;
                from = word1[i];
                to = word2[i];
                break;
            }
        }
        if(poss==false && word1.size()>word2.size()){
            return {"DICTIONARY IS WRONG"};
        }

        if(from != '#' && to != '#')
        adj[mpp[from]].push_back(mpp[to]);
    }
    
    // SORTING
    vector<int>topo = topoSort(n,adj);
    string order = "";

    // CHECKING FOR CYCLES AND CONVERTING VECTOR TO STRING..
    if(topo.size()==n)
    for(auto it:topo){
        order += (Reversempp[it]);
    }
    
    return order;
    
}

int main (){
    vector<string>words = {"abc","ab"};
    int k = 2;
    cout<<findOrder(words)<<endl;
}