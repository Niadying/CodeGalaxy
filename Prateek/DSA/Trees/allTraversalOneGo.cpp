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

vector<vector<int>> traversal(TreeNode* root){
    vector<vector<int>>ans;
    vector<int>pre;
    vector<int>post;
    vector<int>in;
    if(!root) return ans;
    stack<pair<TreeNode*,int>>st;
    st.push({root,1});

    while(!st.empty()){
        TreeNode* node = st.top().first;
        int num = st.top().second;
        if(num==1){
            pre.push_back(node->data);
            st.top().second++;
            if(node->left) st.push({node->left,1});
        }    
        else if (num==2){
            in.push_back(node->data);
            st.top().second++;
            if(node->right) st.push({node->right,1});
        }
        else{
            post.push_back(node->data);
            st.pop();
        }
    }


    ans.push_back(pre);
    ans.push_back(in);
    ans.push_back(post);
    return ans;
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
    vector<vector<int>>ans = traversal(root);
    for(int i = 0 ;i<3; i++){
        if(i==0) cout<<"Preorder : ";
        if(i==1) cout<<"Inorder :";
        else cout<<"Postorder : ";
        for(int j = 0; j<ans[i].size(); j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}