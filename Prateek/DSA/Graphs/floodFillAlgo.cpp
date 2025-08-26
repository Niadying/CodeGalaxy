#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor){
    queue<pair<int,int>>q;
    q.push({sr,sc});
    int initClr = image[sr][sc];
    image[sr][sc]=newColor;
    if(initClr==newColor)return image;
    while(!q.empty()){
        auto node = q.front();q.pop();
        int x = node.first;
        int y = node.second;
        int dx[] = {1,0,-1,0};
        int dy[] = {0,1,0,-1};
        for(int i = 0; i<4; i++){
            int newx = dx[i]+x;
            int newy = dy[i]+y;
            if(newx>=0 && newx < image.size() && newy >= 0 && newy < image[0].size() && image[newx][newy]==initClr){
                q.push({newx,newy});
                image[newx][newy]=newColor;
            }
        }
    }
    return image;
}

int main (){

}