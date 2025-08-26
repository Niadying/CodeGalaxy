#include<bits/stdc++.h>
using namespace std;

void traversal(vector<int>graph[],int n, int startingNode){
    vector<int>visited(n+1,0);
    visited[startingNode] = 1;
    queue<int>q;
    q.push(startingNode);

    while(!q.empty()){
        int val = q.front();q.pop();
        cout<<(val);
        for(int i = 0; i<graph[val].size(); i++){
            if(!visited[i]){
                q.push(graph[val][i]);
                visited[val] = 1;
            }
        }
    }
}

int main (){

}