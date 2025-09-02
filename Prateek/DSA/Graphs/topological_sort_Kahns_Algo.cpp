#include<bits/stdc++.h>
using namespace std;

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

int main (){

}