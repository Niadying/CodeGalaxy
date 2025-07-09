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
 
void verticalTraversal(TreeNode* root){
    map<int,map<int,multiset<int>>>mpp;
    queue<pair<TreeNode*,pair<int,int>>>q;
    if(!root)return;
    q.push({root,{0,0}});
    while(!q.empty()){
        int size = q.size();
        for(int i = 0; i<size; i++){
            TreeNode* node = q.front().first;
            int level = q.front().second.second;
            int vertical = q.front().second.first;
            mpp[vertical][level].insert(node->data);
            q.pop();
            if(node->left){
                q.push({node->left,{vertical-1,level+1}});
            }
            if(node->right) q.push({node->right,{vertical+1,level+1}});
        }
    }
    for(auto it:mpp){
        auto two = it.second;
        for(auto temp:two){
            for(auto i:temp.second){
                cout<<i<<" ";
            }
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
    verticalTraversal(root);
}