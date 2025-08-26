#include<bits/stdc++.h>
using namespace std;


bool dfs(int node, vector<int>&vis, vector<vector<int>>&adj,int parent){
    vis[node]=1;
    bool traverse = false;
    for(auto it:adj[node]){
        if(!vis[it]) {
            traverse = dfs(it,vis,adj,node);
            if(traverse)return true;
            
        }
        else if (parent!=it)return true;
    }
    return traverse;
}

bool isCycle_UsingDFS(int V, vector<vector<int>>& edges) {

    vector<vector<int>>adj(V);
    for(int i = 0; i<edges.size(); i++){
        adj[edges[i][0]].push_back(edges[i][1]);
        adj[edges[i][1]].push_back(edges[i][0]);
    }
    
    vector<int>vis(V,0);
    for(int i = 0 ;i<V; i++){
        if(!vis[i]){
            if(dfs(i,vis,adj,-1))return true;
        }
    }
    return false;
}




bool isCycle_UsingBFS(int V, vector<vector<int>>& edges) {

    // LOGIC
    /*
        -> WE WILL CREATE AN ADJENCY MATRIX.
        -> WE WILL RUN A OUTER LOOP FROM 0 TO V AS THERE MAY BE DIFFERENT COMPONENTS OF GRAPH.
        -> IF VERTEX IS ALREADY VISITED IN LOOP, WE WILL SKIP THE ITERATION
        -> NOW WE WILL CREATE A QUEUE WITH CURRENT VAL AND ITS PARENT
        -> WE WILL ITERATE THE ADJENCY LIST WHILE ITERATING QUEUE.
        -> IF NODE ISN'T VISITED AND IT ISN'T IT'S PARENT WE WILL PUSH IT IN QUEUE.
        -> ELSE IF IT IS ALREADY VISITED AND IT'S NOT EQUAL TO IS'T PARENT, WE WILL RETURN TRUE
        -> AFTER WHOLE ITERATIONS WE WILL RETURN FALSE.
    */

    // CREATING ADJENCY MATRIX
    vector<vector<int>>adj(V);
    for(int i = 0; i<edges.size(); i++){
        adj[edges[i][0]].push_back(edges[i][1]);
        adj[edges[i][1]].push_back(edges[i][0]);
    }
    vector<int>vis(V,0);
    queue<pair<int,int>>q;
    // OUTER LOOP TO AVOID COMPONENTS OF GRAPH
    for(int i = 0; i<V; i++){
        if(vis[i]) continue;
        q.push({i,-1});
        vis[i]=1;
        // ITERATING QUEUE
        while(!q.empty()){
            int node = q.front().first;
            int parent = q.front().second;
            q.pop();
            
            for(auto it:adj[node]){
                // IF NODE ISN'T VISITED AND NOT THE NODE FROM WHERE IT CAME (PARENT) PUSH IN QUEUE AND MARK AS VISITED
                if(!vis[it]&&parent!=it){
                    q.push({it,node});
                    vis[it]=1;
                // IF NODE IS VISITED AND NOT THE NODE FROM WHERE IT CAME (PARENT) RETURN TRUE
                }else if (vis[it] && parent!=it) return true;
            }
        }
    }
    return false;
}


int main (){
    vector<vector<int>> edges ={
        {0,1},
        {0,2},
        {1,2},
        {2,3}
    };

    int V = 4;
}