#include<bits/stdc++.h>
using namespace std;

int orangesRotting(vector<vector<int>>& grid) {

    // MY LOGIC
    /*
    
    -> WE WILL FIND THE INDEX OF 2 AND STORE IN A QUEUE,
    -> IF CNT1 == 0, RETURN 0 & IF CNT2 == 0, RETURN -1.
    -> NOW WE WILL ITERATE QUEUE TILL ITS INITIAL SIZE, IF WE FOUND NEIGHBOUR AS 1, WE WILL MARK IT'S VALUE AS 2, AND PUSH IN QUEUE.
    -> AGTER ITERATING QUEUE TILL ITS INITIAL SIZE, IF WE FOUND A NEIGHBOUR AS 1, WE WILL INCREASE CNT,
    -> WHEN QUEUE IS EMPTY WE WILL RETURN CNT..
    
    */


    int n = grid.size(), m = grid[0].size();
    vector<vector<int>>vis(n,vector<int>(m,0));
    queue<pair<int,int>>q;
    vector<pair<int,int>>rotten;
    int cnt1  = 0 ;

    // FINDING NUMBER OF 1 AND INDEXES OF 2..

    for(int i = 0; i<grid.size(); i++){
        for(int j = 0; j<m; j++){
            if(grid[i][j]==2){
                q.push({i,j});
                vis[i][j]=1;
            }
            if(grid[i][j]==1){
                cnt1++;
            }
        }
    }
    int cnt = 0;

    // EDGE CASES..

    if(cnt1==0)return 0;
    if(q.size()==0)return -1;


    // ITERATING THE QUEUE.
    while(!q.empty()){
        int size = q.size();
        bool changeHappened = false;
        // ITERATING INITIAL SIZE OF QUEUE..
        for(int i = 0; i<size; i++){
            auto node = q.front();q.pop();
            int x = node.first;
            int y = node.second;
            int dx[]={1,0,-1,0};
            int dy[]={0,1,0,-1};
            for(int j = 0; j<4; j++){
                int newX = dx[j]+x;
                int newY = dy[j]+y;
                if(newX >= 0 && newX<n && newY>=0 && newY<m &&
                    grid[newX][newY]==1 && !vis[newX][newY]){
                    changeHappened = true;
                    q.push({newX,newY});
                    grid[newX][newY]=2;
                }
            }
        }
        // IF 1 IS FOUND IN ANY NEIGHBOURHOOD ADDING 1 IN CNT.
        if(changeHappened)cnt++;
    }

    // RECHECKING IF 1 IS PRESENT OR NOT, IF YES RETURN -1 ELSE RETURN CNT..
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            if(grid[i][j]==1)return -1;
        }
    }
    return cnt;
}

int main (){

}