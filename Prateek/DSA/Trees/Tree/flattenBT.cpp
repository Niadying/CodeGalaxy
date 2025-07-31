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


 




// MY APPROACH TC -> O(2N)

void traverse(TreeNode* root, TreeNode* &dummyNode){
    if(!root) return;
    dummyNode->right = root;
    TreeNode* right = root->right;
    TreeNode* left = root->left;
    dummyNode = dummyNode->right;
    traverse(left, dummyNode);
    traverse(right, dummyNode);
}

void doNull(TreeNode* root){
    if(!root)return;
    root->left = NULL;
    doNull(root->right);
}

void flatten(TreeNode* root) {
    TreeNode* dummy = new TreeNode(-101);
    TreeNode* ans = dummy;
    TreeNode* temp = ans;
    traverse(root, dummy);
    dummy = dummy->right;
    doNull(root);
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
}