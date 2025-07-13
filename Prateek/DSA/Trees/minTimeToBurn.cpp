#include<bits/stdc++.h>  // TREES
using namespace std;
using ll = long long;

class TreeNode{
    public:
    int data;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int data){
        this->data = data;
        left=right=NULL;
    }
};
 
int minTimeToBurn(TreeNode* root,TreeNode* node){
    if(!root)return 0;
    map<TreeNode*,TreeNode*>parent;
    parent[root]=NULL;
    queue<TreeNode*>q;
    q.push(root);
    while(!q.empty()){
        int n = q.size();
        for(int i = 0; i<n; i++){
            TreeNode* temp = q.front();
            q.pop();
            if(temp->left){
                parent[temp->left]=temp;
                q.push(temp->left);
            } 
            if(temp->right){
                parent[temp->right] = temp;
                q.push(temp->right);
            }
        }
    }
    int time = -1;
    map<TreeNode*,bool>visited;
    visited[node]=true;
    q.push(node);
    while(!q.empty()){
        time++;
        int n = q.size();
        for(int i = 0; i<n; i++){
            TreeNode* temp = q.front();
            if(temp->left&&!visited[temp->left]){
                visited[temp->left] = true;
                q.push(temp->left);
            }
            if(temp->right&&!visited[temp->right]){
                visited[temp->right]=true;
                q.push(temp->right);
            }
            if(parent[temp]&&!visited[parent[temp]]){
                visited[parent[temp]] = true;
                q.push(parent[temp]);
            }
        }
    }
    return time;
}

int main (){
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->left->right->left = new TreeNode(6);
    root->right = new TreeNode(3);
    root->right->left = new TreeNode(7);
    root->right->right = new TreeNode(8);
    root->right->right->left = new TreeNode(9);
    root->right->right->right = new TreeNode(10);

    cout<<minTimeToBurn(root,root->left);
}