#include<bits/stdc++.h>
using namespace std;

// LOGIC

/*
    -> PUSH INDEX OF ZERO IN QUEUE.
    -> NOW PUSH ALL THE NEIGHBOURS OF ZERO INDEX IN QUEUE AND DELETE AND UPDATE VALUE OF DISTANCE TO 1
    -> NOW ITERATE ALL THE NODES LEVEL WISE AND INCREASE THE CNT IF ONE LEVEL IS DOEN AND KEEP UPDATING VALUE IN DISTANCE
*/

vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
    int n = mat.size(), m = mat[0].size();
    vector<vector<int>> distance(n,vector<int>(m,0));
    vector<vector<int>> vis(n,vector<int>(m,0));
    queue<pair<int,int>>q;

    // PUSHING 0'S
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            if(mat[i][j]==0 && vis[i][j]==0){
                q.push({i,j});
                vis[i][j]=1;
            }
        }
    }

    // DELETING 0'S AND PUSHING IT NEIGHBOURS..
    int size = q.size();
    int cnt = 1;
    for(int i = 0; i<size; i++){
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        int dx[]={0,1,0,-1};
        int dy[]={1,0,-1,-0};
        for(int j = 0; j<4; j++){
            int newx = dx[j]+x;
            int newy = dy[j]+y;
            if(newx >= 0 && newx < n && newy >= 0 && newy < m && vis[newx][newy]==0
                && mat[newx][newy]==1){
                q.push({newx,newy});
                vis[newx][newy]=1;
                distance[newx][newy]=cnt;
            }
        }
    }
    cnt++;

    // ITERATING ALL VALUES LEVEL WISE AND INCREASING THE CNT AND UPDATING DISTANCE

    while(!q.empty()){
        int size = q.size();
        for(int i = 0; i<size; i++){
            int x = q.front().first;
            int y = q.front().second;
            q.pop();
            int dx[]={0,1,0,-1};
            int dy[]={1,0,-1,-0};
            for(int j = 0; j<4; j++){
                int newx = dx[j]+x;
                int newy = dy[j]+y;
                if(newx >= 0 && newx < n && newy >= 0 && newy < m && vis[newx][newy]==0
                && mat[newx][newy]==1){
                    q.push({newx,newy});
                    vis[newx][newy]=1;
                    distance[newx][newy]=cnt;
                }
            }
        }
        cnt++;
    }
    return distance;

}

int main (){

}