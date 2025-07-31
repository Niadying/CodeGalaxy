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


void nodesAtDistK(TreeNode* root,TreeNode* find, int k){
    if(!root)return;
    vector<int>ans;
    map<TreeNode*, TreeNode*>parent;
    queue<TreeNode*>q;
    parent[root]=NULL;
    q.push(root);
    while(!q.empty()){
        int n = q.size();
        for(int i = 0; i<n; i++){
            TreeNode* node = q.front();q.pop();
            if(node->left){
                q.push(node->left);
                parent[node->left] = node;
            }
            if(node->right){
                q.push(node->right);
                parent[node->right] = node;
            }
        }
    }

    set<TreeNode*>visited;
    q.push(find);
    int distance = 0;
    visited.insert(find);
    while(!q.empty()){
        int n = q.size();
        if(distance==k)break;
        for(int i = 0; i<n; i++){
            TreeNode* node = q.front();
            q.pop();
            if(node->left){
                if(visited.find(node->left)==visited.end()){
                    visited.insert(node->left);
                    q.push(node->left);
                }
            }
            if(node->right){
                if(visited.find(node->right)==visited.end()){
                    visited.insert(node->right);
                    q.push(node->right);
                }
            }
            if(parent[node]){
                if(visited.find(parent[node])==visited.end()){
                    visited.insert(parent[node]);
                    q.push(parent[node]);
                }
            }
        }
        distance++;
    }

    while(!q.empty()){
        cout<<q.front()->data<<" ";
        q.pop();
    }
    cout<<endl;
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
}