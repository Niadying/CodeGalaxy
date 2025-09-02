#include<bits/stdc++.h>
using namespace std;

// LOGIC (WHILE TRAVERSING, WE SHOULD GET A SAME NODE IN THE SAME PATH)

/*
    -> CREATE A VIS ARRAY AND PATHVIS ARRAY.
    -> WHILE VISITING NEW NODE, MARK IT AS VIS AND MARK IT IN PATH VIS.
    -> IF NODE IS IN VIS AS WELL AS IN PATH VIS, RETURN TRUE.
    -> ELSE IF IT ISN'T VISITED, GO AND VISITED IT.
    -> NOW IF WE ARE GOING TO BACKTRACK IT, REMOVE THE CURRENT NODE FROM THE PATHVIS ARRAY.
*/

bool dfs(int node, vector<vector<int>> &edges, vector<int> &vis, vector<int> &pathVis){
    vis[node]=1;
    pathVis[node] = 1;
    for(auto it:edges[node]){
        if(pathVis[it] == 1 && vis[it] == 1) return true;
        if(!vis[it]){
            if(dfs(it,edges,vis,pathVis))return true;
        }
    }
    pathVis[node] = 0;
    return false;
}

bool isCyclic(int V, vector<vector<int>> &edges) {
    vector<vector<int>>edge(V,vector<int>(0));
    for(int i = 0; i<edges.size(); i++){
        edge[edges[i][0]].push_back(edges[i][1]);
    }
    vector<int>vis(V,0);
    vector<int>pathVis(V,0);
    for(int i = 0; i<V; i++){
        if(vis[i]==0){
            if(dfs(i,edge,vis,pathVis)) return true;
        }
    }
    return false;
}




// USING TOPOLOGICAL SORT

/*
    -> Perform Kanh's algorithm and if at last there is a node whose indegree is not '0', hence graph contains a cycle..
*/
bool isCyclic(int V, vector<vector<int>> &edges) {
    
    // USING TOPO SORT..
    
    vector<vector<int>>edge(V,vector<int>(0));
    for(int i = 0; i<edges.size(); i++){
        edge[edges[i][0]].push_back(edges[i][1]);
    }
    vector<int>indegree(V,0);
    for(int i = 0; i<edge.size(); i++){
        for(auto it:edge[i]){
            indegree[it]++;
        }
    }
    queue<int>q;
    for(int i = 0; i<V; i++) if(indegree[i]==0)q.push(i);
    
    while(!q.empty()){
        int node = q.front();
        q.pop();
        for(auto it:edge[node]){
            indegree[it]--;
            if(indegree[it]==0) q.push(it);
        }
    }
    
    for(auto it:indegree){
        if(it!=0) return true;
    }
    return false;
}


int main (){

}