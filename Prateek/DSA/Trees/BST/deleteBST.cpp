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

TreeNode* RM(TreeNode* root){
    while(root->left)root = root->left;
    return root;
}

TreeNode* helper(TreeNode* root){
    if(!root->left)return root->right;
    else if (!root->right)return root->left;
    TreeNode* rightmost = RM(root->left);
    TreeNode* right = root->right;
    rightmost->right = right;
    return root->left;
}
 
TreeNode* deleteNode(TreeNode* root, int key){
    TreeNode* ans = root;
    if(!root)return root;
    if(root->data == key)return helper(root);
    while(root){
        if(root->data > key){
            if(root->left && root->left->data == key) root->left = helper(root->left);
            else root = root->left;
        }
        else{
            if(root->right && root->right->data == key)root->right = helper(root->right);
            else root = root->right;
        }
    }
    return ans;
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