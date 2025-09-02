#include<bits/stdc++.h>
using namespace std;

// LOGIC (ONLY POSSIBLE IN DAG(directed acyclic graph))..

/*
    -> DO SIMPLE DFS TRAVERSAL AND WHEN DFS IS DONE FOR PARTICULAR NODE,
     PUSH IT IN STACK

    -> AT LAST GET ALL ELEMENTS FROM THE STACK AND THAT IS THE TOPOLOGIAL SORTED ORDERING OF A GRAPH..
*/

void dfs(int node, vector<vector<int>> &edges, vector<int> &vis, vector<int> &ans){
    vis[node] = 1;
    for(auto it:edges[node]){
        if(!vis[it]) dfs(it,edges,vis,ans);
    }
    ans.push_back(node);
}

vector<int> topoSort(int V, vector<vector<int>>& edges) {
    vector<int> vis(V,0);
    vector<int>ans;
    for(int i = 0; i<V; i++){
        if(!vis[i]) dfs(i,edges,vis,ans);
    }
    reverse(ans.begin(),ans.end());
    return ans;
}

int main (){

}