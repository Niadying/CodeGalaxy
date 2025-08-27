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
 
TreeNode* LCA(TreeNode* root, TreeNode* r1, TreeNode* r2){
    
    if(!root)return NULL;
    if(root==r1||root==r2)return root;
    TreeNode* left = LCA(root->left,r1,r2);
    TreeNode* right= LCA(root->right,r1,r2);
    if(!left) return right;
    if(!right) return left;
    return root;
    
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

    cout<<LCA(root,root->left,root->right)->data<<endl;
    
}