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
 
void iterative_preorder(TreeNode* root){
    if(!root) return ;
    stack<TreeNode*>st;
    st.push(root);
    while(!st.empty()){
        cout<<st.top()->data<<" ";
        TreeNode* node = st.top();
        st.pop();
        if(node->right) st.push(node->right);
        if(node->left) st.push(node->left);
    }
    cout<<endl;
}


void iterative_inorder(TreeNode* root){
    if(root==NULL) return ; 
    TreeNode* node = root;
    stack<TreeNode*>st;
    while(true){
        if(node){
            st.push(node);
            node = node->left;
        }
        else{
            if(st.empty()) break;
            node = st.top();
            st.pop();
            cout<<node->data<<" ";
            node = node->right;
        }
    }
    cout<<endl;
}

void iterative_postorder(TreeNode* root){

    // USING 1 STACK
    if(!root) return;
    TreeNode* curr = root;
    stack<TreeNode*> st;
    while(curr!=NULL || !st.empty()){
        if(curr){
            st.push(curr);
            curr = curr->left;
        }
        else{
            TreeNode* temp = st.top()->right;
            if(temp==NULL){
                temp = st.top();st.pop();
                cout<<temp->data<<" ";
                while(!st.empty()&&st.top()->right==temp){
                    temp = st.top();st.pop();
                    cout<<temp->data<<" ";
                }
            }
            else curr = temp;
        }
    }
    cout<<endl;

    // USING 2 STACKS

    // if(!root) return;
    // stack<TreeNode*> st1;
    // stack<TreeNode*> st2;
    // st1.push(root);
    // while(!st1.empty()){
    //     TreeNode* node = st1.top();
    //     st1.pop();
    //     st2.push(node);
    //     if(node->left) st1.push(node->left);
    //     if(node->right) st1.push(node->right);

    // }
    // while(!st2.empty()){
    //     cout<<st2.top()->data<<" ";
    //     st2.pop();
    // }
    // cout<<endl;
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
    cout<<"Preorder: ";
    iterative_preorder(root);
    cout<<"Inorder: ";
    iterative_inorder(root);
    cout<<"Postorder: ";
    iterative_postorder(root);

}