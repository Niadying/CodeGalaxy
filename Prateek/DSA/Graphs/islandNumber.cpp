#include<bits/stdc++.h>
using namespace std;

void bfs(int i, int j, vector<vector<char>>&grid, vector<vector<int>>&vis){
    queue<pair<int,int>>q;
    q.push({i,j});
    vis[i][j]=1;
    while(!q.empty()){
        auto node = q.front();
        q.pop();
        int x = node.first;
        int y = node.second;

        for(int k = -1; k<=1; k++){
            for(int l = -1; l<=1; l++){
                int newx = x+k;
                int newy = y+l;
                if(newx < grid.size() && newx>=0 && newy < grid[0].size() && newy >= 0 && vis[newx][newy]==0 && grid[newx][newy]=='1'){
                    vis[newx][newy] = 1;
                    q.push({newx,newy});
                }
            }
        }
    }
}

int numberOfIsland(vector<vector<char>>&grid){
    vector<vector<int>>vis(grid.size(),vector<int>(grid[0].size(),0));
    int cnt = 0;
    for(int i = 0; i<grid.size(); i++){
        for(int j = 0; j<grid[i].size(); j++){
            if(!vis[i][j] && grid[i][j]=='1'){
                cnt++;
                bfs(i,j,grid,vis);
            }
        }
    }
    return cnt;
}

int main (){

}