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
 
TreeNode* search(TreeNode* root, int val){
    while(root){
        if(root->data == val) return root;
        if(root->data > val) root = root->left;
        else root = root->right;
    }
    return NULL;
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

    cout<<search(root,3)<<endl;
}