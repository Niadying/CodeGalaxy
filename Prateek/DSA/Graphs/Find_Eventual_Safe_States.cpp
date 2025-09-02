#include<bits/stdc++.h>
using namespace std;


// LOGIC 2 (TOPOLOGICAL SORT)

/*
    -> REVERSE THE EDGES OF THE GRAPH AND THEN PERFORM SIMPLE TOPOLOGICAL SORT...
*/


// LOGIC

// PART OF CYCLES AND NODES LEADING TO CYCLES ARE NOT THE SAFE NODE, OTHER THEN THAT ARE SAFE NODES...

/*
    -> MAKE 3 ARRAYS, VISITED, PATHVISITED AND CHECKSAFE.
    -> DO DFS AND MARK NODE AS VIS AND PATHVIS.
    -> IF NODE ISN'T VISITED, GO AND VISIT IT.
    -> IF IT IS PATH VISITED AND YOU ARE GOING THERE AGAIN, HENCE CYCLE IS DETECTED, RETURN TRUE.
    -> AFTER TRAVERSALS, IF NO CYCLE IS DETECED, MARK PATHVIS AS 0 AND CHECK SAFE AS 1.
    -> IF THERE IS NO CYCLE THEN ONLY PATHVIS IS BECOMING ZERO, ELSE IT WILL BE ONE.
*/

bool dfs(int node, vector<int> &vis, vector<int> &pathVis, vector<int> &check, vector<vector<int>> &graph){
    vis[node] = 1;
    pathVis[node] = 1;
    for(auto it:graph[node]){
        if(!vis[it]){
            if(dfs(it,vis,pathVis,check,graph))return true;
        }else if (pathVis[it]) return true;
    }
    check[node] = 1;
    pathVis[node] = 0;
    return false;
}

vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
    vector<int>pathVis(graph.size(),0);
    vector<int>vis(graph.size(),0);
    vector<int>checkSafe(graph.size(),0);
    vector<int>safeNodes;
    int n = graph.size();
    for(int i = 0; i<n; i++){
        if(!vis[i]){
            dfs(i,vis,pathVis,checkSafe,graph);
        }
    }
    for(int i = 0; i<graph.size(); i++){
        if(checkSafe[i]) safeNodes.push_back(i);
    }
    return safeNodes;
}


int main (){

}