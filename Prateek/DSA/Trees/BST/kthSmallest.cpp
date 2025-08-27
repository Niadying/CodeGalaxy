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
 
void traverse(TreeNode* root, int k,int &cnt, int &ans){
    if(!root)return;
    traverse(root->left,k,cnt,ans);
    cnt++;
    if(cnt==k){
        ans = root->data;
        return;
    }
    traverse(root->right,k,cnt,ans);
}

int kthSmallest(TreeNode* root, int k) {
    int ans = 0,cnt = 0;
    traverse(root,k,cnt,ans);
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