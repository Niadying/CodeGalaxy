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
 
bool rootToNode(TreeNode* root, int x, vector<int>&nums){
    if(!root) return false;
    nums.push_back(root->data);
    if(root->data==x) return true;
    bool left = rootToNode(root->left,x,nums);
    bool right = rootToNode(root->right,x,nums);
    if(!left&&!right){
        nums.pop_back();
        return false;
    }
    return true;
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
    vector<int>nums;
    rootToNode(root,9,nums); 
    for(auto i:nums)cout<<i<<" ";
    cout<<endl;
}