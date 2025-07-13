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
 
int lHeight(TreeNode* root){
    if(!root)return 0;
    int left = lHeight(root->left);
    return 1+left;
}

int rHeight(TreeNode* root){
    if(!root)return 0;
    int right = rHeight(root->right);
    return 1+right;
}

int cntNodes(TreeNode* root,int &ans){
    if(!root)return 0;
    int left = lHeight(root);
    int right = rHeight(root);
    if(left!=right){
        left = cntNodes(root->left,ans);
        right = cntNodes(root->right,ans);
    }
    else if (left==right){
        ans+= (pow(2,left))-1;
    }
    else ans+= left+right;
}

int main (){
    TreeNode* root = new TreeNode(1);

    root->left = new TreeNode(2);
    root->right = new TreeNode(3);

    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(7);

    root->left->left->left = new TreeNode(8);
    root->left->left->right = new TreeNode(9);
    root->left->right->left = new TreeNode(10);
    root->left->right->right = new TreeNode(11);

    int ans = 0;
    cntNodes(root,ans);
    cout<<ans<<endl;
}