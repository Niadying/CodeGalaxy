#include<bits/stdc++.h>
using namespace std;

// LOGIC 2
/*
    -> PUSH ALL THE 1 WHICH ARE ON BOUNDARY AND THEN CNT THE CONNECTED NODES TO IT.
    -> NOW SUBTRACT THE BOUNDARY NODES FROM TOTAL NODES.
*/

int bfs2(vector<vector<int>>&vis, vector<vector<int>>&grid){
    int n = grid.size(), m = grid[0].size();
    queue<pair<int,int>>q;
    int cntTotal = 0;
    int cntBoundary = 0 ;
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            if(i==0 || i==n-1 || j==0 || j==m-1){
                if(grid[i][j]==1){
                    q.push({i,j});
                    cntBoundary++;
                    vis[i][j]=1;
                }
            }
            if(grid[i][j]==1)cntTotal++;
        }
    }
    while(!q.empty()){
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        int dx[]={0,1,0,-1};
        int dy[]={1,0,-1,0};
        for(int i = 0; i<4; i++){
            int newx = dx[i]+x;
            int newy = dy[i]+y;
            if(newx>=0 && newx<n && newy>=0 && newy<m && !vis[newx][newy]
            && grid[newx][newy]==1){
                q.push({newx,newy});
                vis[newx][newy]=1;
                cntBoundary++;
            }
        }
    }
    return cntTotal-cntBoundary;
}


// LOGIC1
/*
    -> TRAVERSE THE NODE AND IF ANY COMPONENT ISN'T CONNECTED ON BOUNDARY, 
            CNT THE NUMBER OR NODES
*/
int bfs1(int i, int j, vector<vector<int>>&grid,vector<vector<int>>&vis,bool &onBorder){

    vis[i][j] = 1;
    int n = grid.size(), m = grid[0].size();
    if(i==0 || i==n-1 || j==0 || j==m-1)onBorder = true;
    int cnt = 1;
    queue<pair<int,int>>q;
    q.push({i,j});
    while(!q.empty()){
        auto node = q.front();q.pop();
        int x = node.first, y = node.second;
        int dx[]={0,1,0,-1};
        int dy[]={1,0,-1,0};
        for(int k = 0; k<4; k++){
            int nx = dx[k]+x;
            int ny = dy[k]+y;
            if(nx>=0 && nx<n && ny>=0 && ny<m){
                if(grid[nx][ny]==1){
                    if(nx==0 || ny == 0 || nx == n-1 || ny == m-1){
                        onBorder = true;
                    }
                    if(!vis[nx][ny]){
                        vis[nx][ny]=1;
                        q.push({nx,ny});
                        cnt++;
                    }
                }
            }
        }
    }
    return cnt;
}
int numEnclaves(vector<vector<int>>& grid) {
    int cntTotal = 0;
    int cntNotBorder = 0;
    int n = grid.size(), m = grid[0].size();
    vector<vector<int>>vis(n,vector<int>(m,0));
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            bool onBorder = false;
            if(grid[i][j]==1){
                cntTotal++;
                if(!vis[i][j]){
                    int cnt = bfs1(i,j,grid,vis,onBorder);
                    if(!onBorder) cntNotBorder+=cnt;
                }
            }
        }
    }
    return cntNotBorder; // USING LOGIC 1

    return bfs2(vis,grid); // USING LOGIC 2
}