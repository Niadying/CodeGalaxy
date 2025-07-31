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
 
TreeNode* insert(TreeNode* root, int val){
    TreeNode* curr = root;
    while(true){
        if(root->data > val){
            if(root->left) root = root->left;
            else break;
        }
        else{
            if(root->right) root = root->right;
            else break;
        }
    }
    if(root->data > val) root->left = new TreeNode(val);
    else root->right = new TreeNode(val);
    return curr;
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