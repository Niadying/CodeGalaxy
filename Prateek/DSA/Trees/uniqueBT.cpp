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
 

bool uniqueBT(string s1, string s2){
    
    // IF WE ARE GIVEN 2 TRAVERSAL TECHNIQUE THEY MUST BE WITH INORDER, 
    // THAT'S THE ONLY WAY TO GET A UNIQUE BT WITH PRE AND POST WE CAN GET MULTIPLE BT WITH SAME TRAVERSAL....

    if(s1==s2)return false;
    if(s1=="inorder"||s2=="inorder")return true;
    return false;
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
}