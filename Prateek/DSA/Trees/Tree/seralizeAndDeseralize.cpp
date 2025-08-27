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
 
   
// Encodes a tree to a single string.
string serialize(TreeNode* root) {
    string ans = "";
    queue<TreeNode*>q;
    if(!root)return ans;
    q.push(root);
    while(!q.empty()){
        int size = q.size();
        for(int i = 0; i<size; i++){
            TreeNode* node = q.front();
            q.pop();
            if(node==NULL){
                ans.push_back('#');
                ans.push_back(',');
                continue;
            }
            if(node->left) {q.push(node->left);}
            if(!node->left){q.push(NULL);}
            if(node->right) q.push(node->right);
            if(!node->right) q.push(NULL);
            ans+= to_string(node->data);
            ans.push_back(',');
        }
    }
    return ans;
}

// Decodes your encoded data to tree.
TreeNode* deserialize(string data) {
    
    if(data.length()==0)return NULL;
    int cnt = 0;
    queue<TreeNode*>q;
    int i = 0;
    string temp = "";
    while(i<data.length()&&data[i]!=','){
        temp.push_back(data[i]);
        i++;
    }
    i++;
    TreeNode* root = new TreeNode(stoi(temp));
    q.push(root);
    while(!q.empty()){
        temp = "";
        while(i<data.length()&&data[i]!=','){
            temp.push_back(data[i]);
            i++;
        }
        i++;
        TreeNode* newnode;
        TreeNode* node = q.front();
        if(temp=="#") newnode = NULL;
        else newnode = new TreeNode(stoi(temp));
        if(cnt%2==0){
            node->left = newnode;
        }
        else {node->right = newnode;q.pop();}
        if(newnode)q.push(newnode);
        cnt++;
    }
    return root;
    
}

void preorder(TreeNode *root){
    if(!root)return;
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
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
    string ser = serialize(root);
    TreeNode *dese = deserialize(ser);
    preorder(root); cout<<endl;
    preorder(dese);
}   