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
 
bool traverse(TreeNode* r1, TreeNode* r2){
    if(!r1||!r2) return r1==r2;
    if(r1->data!=r2->data)return false;
    return traverse(r1->left,r2->right)&&traverse(r1->right,r2->left);
}

bool isSymmetric(TreeNode* root) {
    if(!root)return true;
    return traverse(root->left, root->right);
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
    if(isSymmetric(root)){
        cout<<"Symmetric"<<endl;
    }
    else cout<<"Not symmetric.."<<endl;
}