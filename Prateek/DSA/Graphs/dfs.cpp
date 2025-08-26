#include<bits/stdc++.h>
using namespace std;

void dfs_traversal(vector<int> &dfs, vector<int> &vis, int node ,vector<vector<int>>&adj){
    vis[node]=1;
    dfs.push_back(node);

    for(auto it:adj[node]){
        if(!vis[it]) dfs_traversal(dfs,vis,it,adj);
    }

}

vector<int> dfs(vector<vector<int>>& adj) {
        vector<int>dfs;
        vector<int>vis(adj.size(),0);
        dfs_traversal(dfs,vis,0,adj);
        return dfs;
    }

int main (){


}