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
 
void zigZag(TreeNode* root){
    vector<vector<int>>ans;
    if(!root) return ;
    queue<TreeNode*>q;
    q.push(root);
    bool leftToRight = true;
    while(!q.empty()){
        int size = q.size();
        vector<int>level(size);
        for(int i = 0; i<size; i++){
            TreeNode* node = q.front();
            q.pop();
            if(node->left)q.push(node->left);
            if(node->right)q.push(node->right);
            int index = leftToRight? i:size-i-1;
            level[index]=node->data;
        }
        ans.push_back(level);
        leftToRight = !leftToRight;
    }
    for(int i = 0; i<ans.size(); i++){
        for(int j = 0; j<ans[i].size(); j++){
            cout<<ans[i][j]<<" ";
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
    zigZag(root);
}