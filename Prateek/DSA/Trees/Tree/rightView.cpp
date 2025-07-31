#include<bits/stdc++.h>  // TREES
using namespace std;
using ll = long long;

class TreeNode{
    public:
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int data){
        this->val = data;
        left=right=NULL;
    }
};
int size = 0;
void topView(TreeNode* root, int &level){
    if(!root) return;
    if(size==level){cout<<root->val<<" ";size++;}
    topView(root->right,level++);
    topView(root->left,level++);
}

void rightView(TreeNode* root){
    queue<pair<TreeNode*,int>>q;
    vector<int>ans;
    map<int,int>mpp;
    if(!root)return;
    q.push({root,0});
    while(!q.empty()){
        int n = q.size();
        for(int i = 0; i<n; i++){
            TreeNode* node = q.front().first;
            int level = q.front().second;
            q.pop();
            if(mpp.find(level)==mpp.end()){
                mpp[level]=node->val;
            }
            if(node->right) q.push({node->right,level+1});
            if(node->left) q.push({node->left,level+1});

        }
    }
    for(auto i:mpp)cout<<i.second<<" ";
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
    topView(root,0);
}