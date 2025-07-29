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
 
void inorder(TreeNode *root){
    vector<int>inorder;
    TreeNode *curr = root;
    while(curr){
        if(curr->left == NULL){
            inorder.push_back(curr->data);
            curr = curr->right;
        }
        else{
            TreeNode* prev = curr->left;
            while(prev->right && prev->right != curr){
                prev = prev->right;
            }
            if(prev->right == NULL){
                prev->right = curr;
                curr = curr->left;
            }
            else{
                prev->right = NULL;
                inorder.push_back(curr->data);
                curr = curr->right;
            }
        }
    }
    for(auto i:inorder)cout<<i<<" ";
    cout<<endl;
}


void preorder(TreeNode *root){
    vector<int>inorder;
    TreeNode *curr = root;
    while(curr){
        if(curr->left == NULL){
            inorder.push_back(curr->data);
            curr = curr->right;
        }
        else{
            TreeNode* prev = curr->left;
            while(prev->right && prev->right != curr){
                prev = prev->right;
            }
            if(prev->right == NULL){
                prev->right = curr;
                inorder.push_back(curr->data);
                curr = curr->left;
            }
            else{
                prev->right = NULL;
                curr = curr->right;
            }
        }
    }
    for(auto i:inorder)cout<<i<<" ";
    cout<<endl;
}

void tempinorder(TreeNode* root){
    if(!root)return;
    tempinorder(root->left);
    cout<<root->data<<" ";
    tempinorder(root->right);
}

void temppreorder(TreeNode* root){
    if(!root)return;
    cout<<root->data<<" ";
    temppreorder(root->left);
    temppreorder(root->right);
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
    inorder(root);
    tempinorder(root);
    cout<<endl;
    preorder(root);
    temppreorder(root);
}