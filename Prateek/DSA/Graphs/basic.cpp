#include<bits/stdc++.h>
using namespace std;

void takingInput_Optimal(){
    int n,m;
    cin>>n>>m;

    vector<int>graph[n+1];
    for(int i = 0; i<m; i++){
        int u,v;
        cin>>u>>v;

        // STORING DATA IN GRAPH
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    // IF IT IS DIRECTED GRAPH WE CAN REMOVE THE LAST LINE..
    // IF IT IS A WEIGHTED GRAPH IN BRUTE STORE VAL INSTEAD OF 1
    // IN OPTIMAL STORE VALUES IN PAIR OF INTEGERS...

}


void takingInput_Brute(){
    int n,m;
    cin>>n>>m;

    // GRAPH IS STORED HERE...
    int graph[n+1][n+1];

    for(int i = 0; i<m; i++){
        int u,v;
        cin>>u>>v;
        graph[u][v]=1;
        graph[v][u]=1;
    }
}

int main (){

}