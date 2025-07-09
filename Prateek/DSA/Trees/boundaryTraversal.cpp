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
 
vector<int> ans;
bool isLeaf(TreeNode* root){
    if(!root->left&&!root->right)return true;
    return false;
}

void addLeftNodes(TreeNode* root){
    TreeNode* node = root->left;
    while(node){
        if(!isLeaf(node))
        ans.push_back(node->data);
        if(node->left) node = node->left;
        else node = node->right;
    }
}

void addleaf(TreeNode* root){
    if(isLeaf(root)) {
        ans.push_back(root->data);
        return;
    }
    if(root->left)addleaf(root->left);
    if(root->right)addleaf(root->right);
}

void addRightNodes(TreeNode* root){
    TreeNode* node = root->right;
    vector<int>temp;
    while(node){
        if(!isLeaf(node)) temp.push_back(node->data);
        if(node->right) node = node->right;
        else node = node->left; 
    }

    for(int i = temp.size()-1; i>=0; i--)
    ans.push_back(temp[i]);
}

void boundaryTraversal(TreeNode* root){
    if(!root) return;
    if(isLeaf(root)) {cout<<root->data;return;}
    ans.push_back(root->data);
    addLeftNodes(root);
    addleaf(root);
    addRightNodes(root);
    for(auto i:ans)cout<<i<<" ";
    cout<<endl;

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
    boundaryTraversal(root);
}