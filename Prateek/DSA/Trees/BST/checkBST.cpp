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
 
bool traverse(TreeNode* root,long long mini,long long maxi){
    if(!root)return true;
    if(root->data <= mini || root->data >= maxi)return false;
    return traverse(root->right,root->data,maxi)&&traverse(root->left,mini,root->data);
}

bool isValidBST(TreeNode* root) {
    return traverse(root,LLONG_MIN,LLONG_MAX);
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