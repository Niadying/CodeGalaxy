#include<bits/stdc++.h>
using namespace std;

void bfs(int i, int j, vector<vector<int>>& vis, vector<vector<int>>& grid,set<vector<pair<int,int>>> &shapes){
    
    int n = grid.size(), m = grid[0].size();
    queue<pair<int,int>>q;
    q.push({i,j});
    vis[i][j]=1;
    vector<pair<int,int>>points;
    points.push_back({0,0});
    while(!q.empty()){
        int size = q.size();
        // for(int k = 0; k<size; k++){
            int x = q.front().first, y = q.front().second;
            q.pop();
            int dx[]={0,1,0,-1};
            int dy[]={1,0,-1,0};
            for(int p = 0; p<4; p++){
                int newx = dx[p]+x;
                int newy = dy[p]+y;
                if(newx>=0 && newy>=0 && newx<n && newy<m && 
                    vis[newx][newy]==0 && grid[newx][newy]==1){
                    vis[newx][newy]=1;
                    points.push_back({(newx-i),(newy-j)});
                    q.push({newx,newy});
                    
                }
            }
        // }
    }
    // sort(points.begin(),points.end());
    shapes.insert(points);
    for(auto i:shapes){
        for(auto it:i){
            cout<<it.first<<" "<<it.second<<" ";
            cout<<endl;
        }
    }
    
}

int countDistinctIslands(vector<vector<int>>& grid) {
    // code here
    set<vector<pair<int,int>>>shapes;
    int n = grid.size(), m = grid[0].size();
    vector<vector<int>>vis(n,vector<int>(m,0));
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            if(grid[i][j]==1 && !vis[i][j]){
                bfs(i,j,vis,grid,shapes);
            }
        }
    }
    // for(auto i:shapes){
    //     for(auto it:i){
    //         cout<<it.first<<" "<<it.second<<" ";
    //         cout<<endl;
    //     }
    // }
    return shapes.size();
    
}

int main (){
    vector<vector<int>>grid = {
            {1, 1, 0, 0, 0},
            {1, 1, 0, 0, 0},
            {0, 0, 0, 1, 1},
            {0, 0, 0, 1, 1}
    };
    cout<<countDistinctIslands(grid)<<endl;
}