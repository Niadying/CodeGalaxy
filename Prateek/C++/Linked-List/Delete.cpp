#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int data1){
        data = data1;
        next = nullptr; 
    }
    node(int data1, node*next1){
        data = data1;
        next = next1;
    }
};

node* ARRtoLL(vector<int>arr){
    node* head = new node(arr[0]);
    node* mover = head;
    for(int i = 1; i<arr.size(); i++){
        node* temp = new node (arr[i]);
        mover->next=temp;
        mover = temp;
    }
    return head;
}

node* removeHead(node* head){

    if(head == NULL) return head;
    node* temp = head;
    head=head->next;
    free(temp);
    return head;

}

node* removelast(node*head){

    if(head==NULL || head->next == NULL) return NULL;

    node* temp = head;
    while(temp->next->next != NULL){
        temp=temp->next;
    }

    free(temp->next);
    temp->next=NULL;
    return head;

}

node* removekth(node* head,int k){
    if(head == NULL) return head;
    if(k == 1){
        node* temp = head;
        head = head->next;
        free(temp);
        return head;
    }
    int cnt = 0;
    node* pre = NULL;
    node*temp = head;
    while(temp){
        cnt++;
        if(cnt==k){
            pre->next = pre->next->next;
            free(temp);
            break;
        }
        pre = temp;
        temp = temp->next;
    }
    return head;
}

node* removevalue(node* head, int n ){
    if(head == NULL) return head;
    if(head->data == n){
        node*temp = head;
        head = head->next;
        free(temp);
        return head;
    }
    node* pre = NULL;
    node* temp = head;
    while(temp){
        if(temp->data == n){
            pre->next=pre->next->next;
            free(temp);
            break;
        }
        pre = temp;
        temp = temp->next;
    }
    return head;
}

void print (node* head){
    node*temp = head;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main (){
    vector<int>arr={1,2,3,4,5,6,7,8,9,10};
    node* head = ARRtoLL(arr);
    print(removekth(head,7));
    print(removevalue(head,9));

}