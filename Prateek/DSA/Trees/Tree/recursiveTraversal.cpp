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

void preorder(TreeNode* root){
    if(root==NULL) return;
    cout<<root->data<<"  ";
    preorder(root->left);
    preorder(root->right);
}

void inorder(TreeNode* root){
    if(root==NULL) return ;
    inorder(root->left);
    cout<<root->data<<"  ";
    inorder(root->right);
}

void postorder(TreeNode* root){
    if(root==NULL) return;
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<"  ";
}

void levelorder(TreeNode* root){
    queue<TreeNode*>q;
    vector<vector<int>>ans;
    if(root==NULL) return;
    q.push(root);
    while (!q.empty()){
        int size = q.size();
        vector<int>level;
        for(int i = 0; i<size; i++){
            TreeNode* TreeNode = q.front();
            q.pop();
            if(TreeNode->left) q.push(TreeNode->left);
            if(TreeNode->right) q.push(TreeNode->right);
            level.push_back(TreeNode->data);    
        }
        ans.push_back(level);
    }
    for(int i = 0; i<ans.size(); i++){
        for(int j = 0 ;j<ans[i].size(); j++){
            cout<<ans[i][j]<<"  ";
        }
        cout<<endl;
    }
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
    // cout<<"Preorder: ";
    // preorder(root);
    // cout<<"\n";
    // cout<<"Inorder: ";
    // inorder(root);
    // cout<<"\n";
    // cout<<"Postorder: ";
    // postorder(root);
    // cout<<"\n";
    cout<<"Levelorder: "<<endl;
    levelorder(root);
}