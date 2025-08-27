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

TreeNode* buildTree(vector<int>&postorder, int postStart, int postEnd, vector<int>&inorder, int inStart, int inEnd, map<int,int>&mpp){

    if(postStart>postEnd || inStart>inEnd) return NULL;
    TreeNode* root = new TreeNode(postorder[postEnd]);

    int inRoot = mpp[root->data];
    int numsleft = inRoot - inStart;

    root->left = buildTree(postorder,postStart, postStart+numsleft-1, inorder, inStart,inRoot-1, mpp);
    root->right = buildTree(postorder,postStart+numsleft,postEnd-1,inorder, inRoot+1, inEnd,mpp);
    return root;

}

void traverse(TreeNode* root){

    if(!root) return;
    traverse(root->left);
    cout<<root->data<<" ";
    traverse(root->right);

}

TreeNode* constructBT(vector<int> &inorder, vector<int> &postorder){

    map<int,int>mpp;
    for(int i = 0; i<inorder.size(); i++) mpp[inorder[i]]=i;
    return buildTree(postorder, 0, postorder.size()-1, inorder, 0, inorder.size()-1, mpp);

}

int main (){
    
    vector<int>inorder={9,3,15,20,7};
    vector<int>postorder={9,15,7,20,3};
    traverse(constructBT(inorder,postorder));
    
}