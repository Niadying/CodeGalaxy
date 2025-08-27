#include<bits/stdc++.h>
using namespace std;

void traverse(vector<vector<int>> &adj, vector<int>&vis, int node){
    vis[node] = 1;
    for(auto it:adj[node]){
        if(vis[it]==0) traverse(adj,vis,it);
    }
}

int numberOfProvinces(vector<vector<int>> &adj){
    vector<int>vis(adj.size(),0);
    int cnt = 0;
    for(int i = 0; i<vis.size();i++){
        if(vis[i]==0){
            traverse(adj,vis,i);
            cnt++;
        }
    }
    return cnt;
}

int main(){


}