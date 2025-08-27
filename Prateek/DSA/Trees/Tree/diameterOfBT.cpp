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

int maxi = INT_MIN;

int findHeight(TreeNode* root){
    if(root==NULL)return 0;
    int left = findHeight(root->left);
    int right = findHeight(root->right);
    maxi = max(left+right,maxi);
    return 1+max(left,right);
}

void findDiameter(TreeNode* root){
    int dia = findHeight(root);
    cout<<"Diameter : "<<maxi<<endl;
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
    findDiameter(root);
}