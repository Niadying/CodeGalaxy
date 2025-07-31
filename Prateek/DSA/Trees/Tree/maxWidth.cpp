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
 
int maxWidth(TreeNode* root){
    if(!root)return 0;
    int width = 1;
    queue<pair<TreeNode*, int>>q;
    q.push({root,0});
    while(!q.empty()){
        int n = q.size();
        int minIndex = q.front().second;
        int first,last;
        first=last=0;
        for(ll i = 0; i<n; i++){
            int index = q.front().second-minIndex;
            TreeNode* node = q.front().first;
            q.pop();
            if(i==0)first = index;
            if(i==n-1)last = index;
            if(node->left) q.push({node->left,(index<<1)+1});
            if(node->right) q.push({node->right,(index<<1)+2});    
        }   
        width = max(width,last-first+1);
    }
    return width;
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
    cout<<maxWidth(root)<<endl;
}