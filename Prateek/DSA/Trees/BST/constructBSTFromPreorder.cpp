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
 
TreeNode* construct(vector<int>&preorder,int &i, int ub){
    if(i==preorder.size()|| preorder[i]>ub)return NULL;
    TreeNode* root = new TreeNode(preorder[i++]);
    root->left = construct(preorder,i,root->data);
    root->right = construct(preorder,i,ub);
    return root;
}

TreeNode* constructBST(vector<int>&preorder){
    if(!preorder.size())return NULL;
    int i = 0;
    return construct(preorder,i,INT_MAX);
}


int main (){
    TreeNode* root = new TreeNode(6);
    root->left = new TreeNode(3);
    root->right = new TreeNode(9);
    
    root->left->left = new TreeNode(2);
    root->left->right = new TreeNode(5);
    root->left->left->left = new TreeNode(1);
    root->left->right->left = new TreeNode(4);
    
    root->right->left = new TreeNode(7);
    root->right->right = new TreeNode(10);
    root->right->left->right = new TreeNode(8);

}