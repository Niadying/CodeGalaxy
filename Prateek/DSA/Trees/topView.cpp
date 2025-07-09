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
 
void topView(TreeNode* root){
    queue<pair<TreeNode*,int>>q;
    map<int,int>mpp;
    vector<int>ans;
    if(!root)return;
    q.push({root,0});
    while(!q.empty()){
        int n = q.size();
        for(int i = 0; i<n ;i++){
            TreeNode* node = q.front().first;
            int vertical = q.front().second;
            q.pop();
            if(node->left) q.push({node->left,vertical-1});
            if(node->right) q.push({node->right,vertical+1});
            if(mpp.find(vertical)==mpp.end())
            mpp[vertical]=node->data;
        }
    }
    for(auto i:mpp){
        ans.push_back(i.second);
    }
    for(auto i:ans)cout<<i<<" ";
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
    topView(root);
}