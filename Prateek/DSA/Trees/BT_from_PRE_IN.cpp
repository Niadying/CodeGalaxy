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
 

TreeNode* buildTree( vector<int> &preorder, int prestart, int preend, vector<int>&inorder, int instart, int inend, map<int,int> &index){
    if(instart>inend) return NULL;
    if(prestart>preend) return NULL;

    TreeNode* root = new TreeNode(preorder[prestart]);

    int inRoot = index[preorder[prestart]];
    int numsleft = inRoot-instart;
    root->left = buildTree(preorder,prestart+1,prestart+numsleft,inorder,instart,inRoot-1,index);
    root->right = buildTree(preorder,prestart+numsleft+1,preend,inorder,inRoot+1,inend,index);
    return root;
}

TreeNode* constructBT(vector<int> &inorder, vector<int> &preorder){
    map<int,int> index;
    for(int i = 0 ;i<inorder.size(); i++){
        index[inorder[i]]=i;
    }
    TreeNode* root = buildTree(preorder,0,preorder.size()-1,inorder,0,inorder.size()-1,index);
    return root;
}

void traverse(TreeNode* root){
    if(!root) return;
    traverse(root->left);
    cout<<root->data<<" ";
    traverse(root->right);
}

int main (){
    vector<int>preorder={3,9,20,15,7};
    vector<int>inorder={9,3,15,20,7};
    TreeNode* root = constructBT(inorder,preorder);
    traverse(root);
}