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
 

bool checkChildSum(TreeNode* root){
    if(!root)return true;
    if(!root->left&&!root->right)return true;
    bool left = checkChildSum(root->left);
    bool right = checkChildSum(root->right);
    if(!left||!right) return false;
    if(root->left&&root->right){
        if(root->left->data + root->right->data == root->data)return true;
        return false;
    }
    if(root->left){
        if(root->left->data == root->data) return true;
        return false;
    }
    if(root->right){
        if(root->right->data == root->data) return true;
        return false;
    }
}

void makeChildSum(TreeNode* root){
    if(!root)return;
    int child = 0;
    if(root->left) child+=root->left->data;
    if(root->right) child+=root->right->data;
    
    if(child>=root->data) root->data = child;
    else{
        if(root->left) root->left->data = child;
        if(root->right) root->right->data = child;
    }

    makeChildSum(root->left);
    makeChildSum(root->right);

    int total = 0;
    if(root->left)total+=root->left->data;
    if(root->right)total+=root->right->data;
    if(root->right||root->left) root->data = total;
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
    makeChildSum(root);
    if(checkChildSum(root)) cout<<"Satisfies the child-sum property...";
    else cout<<"Doesn't satisfies the child-sum property...";
}