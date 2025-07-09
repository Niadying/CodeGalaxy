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
 
pair<int,bool> traverse(TreeNode* root, bool &ans){
    if(root==NULL) return {0,true};
    pair<int,bool> l = traverse(root->left,ans);
    pair<int,bool> r = traverse(root->right,ans);
    if(ans==false)return {0,false};
    if(abs(l.first-r.first)>1){
        ans = false;
        return {0,false};
    }
    
}

bool isBalanced(TreeNode* root){
    bool ans = true;
    pair<int,bool>t = traverse(root,ans);
    return t.second;
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
    root->right->right->right->right = new TreeNode(10);
    root->right->right->right->right->right = new TreeNode(10);
    root->right->right->right->right->right->right = new TreeNode(10);
    root->right->right->right = new TreeNode(10);
    if(isBalanced)cout<<"Balanced";
    else cout<<"Not Balanced...";
}