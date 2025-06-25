#include<bits/stdc++.h>
using namespace std;

class node{
  public:
    int data;
    node* next;
    node* back;
    node(int d, node* n, node* b){
        data = d;
        next = n;
        back = b;
    }

    node(int d){
        data = d;
        next = nullptr;
        back = nullptr;
    }
};

node* arrtodll(vector<int>&nums){
    node* head = new node(nums[0]);
    node* mover = head;
    for(int i = 1; i<nums.size(); i++){
        node* temp = new node(nums[i]);
        temp->back = mover;
        mover->next = temp;
        mover = temp;
    }
    
     
    return head;
}

void print(node* head){
    node* amishaa = head;
    while(head){
        cout<<amishaa->data<<" ";
        amishaa = amishaa->next;
    }
}

node* deletelast(node* head){
    node* temp = head;
    if(head==NULL || head->next == NULL) return NULL;
    
    while(temp->next!=nullptr){
        temp = temp->next;
    }
    
    node* prev = temp->back;
    prev->next = nullptr;
    temp->back = nullptr;
    free(temp->next);
    return head;
}

node* delfirst(node* head){
    node* temp = head;
    head = head->next;
    head->back = nullptr;
    temp->next = nullptr;
    free(temp);
    return head;
}

node* delkth(node* head, int k){
    node* temp = head;
    int cnt = 0;
    while(temp){
        cnt++;
        if(k==cnt) break;
        temp = temp->next;
    }
    node* prev = temp->back;
    node* front = temp->next;

    if(prev==nullptr && front == nullptr){
        free(head);
        return NULL;
    }
    else if (prev==nullptr){
        return delfirst(head);
    }
    else if (front == nullptr){
        return deletelast(head);
    }
    else{
        prev->next = temp->next;
        front->back = temp->back;
        temp->next = nullptr;
        temp->back = nullptr;
        delete(temp);
    }

    return head;
}

node* insertbeforehead(node* head, int k){
    node* newhead = new node(k);
    newhead->next = head;
    head->back = newhead;
    return newhead;
}

node* insertbeforetail(node* head, int k){
    node* mover = head;
    node* temp = new node(k);
    while(mover->next!=nullptr) mover = mover->next;
    if(mover->back == nullptr && mover->next == nullptr){
        insertbeforehead(head, k);
        return head;
    }
    node* prev = mover->back;
    prev->next = temp;
    temp->back = prev;
    temp->next = mover;
    mover->back = temp;
    return head;
}

node* insertbeforekth(node* head, int k , int val){

    if(k==1) return insertbeforehead(head,val);
    int cnt = 0;
    node* mover = head;
    node* newnode = new node(val);
    while(mover){
        cnt++;
        if(cnt==k) break;
        mover = mover->next;
    }

    node* prev = mover->back;

    prev->next = newnode;
    newnode->back = prev;
    mover->back = newnode;
    newnode->next = mover;
    return head;
}

void insertbefornode(node* temp, int k ){
    node* prev = temp->back;
    node* newnode = new node(k);
    newnode->back = prev;
    newnode->next = temp;

    temp->back = newnode;
    prev->next = newnode;
}

node* reversedll(node* head){
    // int cnt = 0, cnt1 = 0;
    // node* mover = head;
    // while(mover->next!=nullptr){
    //     cnt++;
    //     mover= mover->next;
    // }
    // node* prev = mover;
    // mover = head;
    // while(cnt1<cnt){
    //     swap(mover->data, prev->data);
    //     mover = mover->next;
    //     prev = prev->back;
    //     cnt1+=2;
    // }
    // return head;

    // OPTIMIZE

    if(head==nullptr || head->next == nullptr) return head;
    node* last = NULL;
    node* current = head;
    while(current){
        last = current->back;
        current->back = current->next;
        current->next = last;
        current = current->back;
    }
    return last->back;
}

node* sumlist(node* head1, node* head2){
    
    node* temp1 = head1;
    node* temp2 = head2;
    node* DummyNode = new node(-1);
    node* current = DummyNode;
    int carry = 0;
    while(temp1!=NULL || temp2!=NULL){
        int sum = carry;
        if(temp1) sum+=temp1->data;
        if(temp2) sum+=temp2->data;
        node* newNode = new node(sum%10);
        carry = sum/10;
        DummyNode->next = newNode;
        DummyNode = DummyNode->next;
        if(temp1) temp1 = temp1->next;
        if(temp2) temp2 = temp2->next;
    }
    if(carry){
        node* newnode = new node(carry);
        DummyNode->next = newnode;
    }
    return current->next;
}


int main (){
    vector<int>nums={1,2,3,4,5,6,7,8,9,10,11};
    node* head = arrtodll(nums);
    // print(head);
    // print(delfirst(head));
    // print(deletelast(head));
    // print(delkth(head,5));
    // print(insertbeforehead(head, 10));
    // print(insertbeforetail(head, 10));
    // print(insertbeforekth(head, 6,10));
    // node* newhead = reversedll(head);
    // print(newhead);

    // vector<int>nums2={1,2,3,4,5};
    // vector<int>nums1={1,2,3,4,5};
    // node* head1 = arrtodll(nums2);
    // node* head2 = arrtodll(nums1);
    // node* ans = sumlist(head1, head2);
    // print(ans);

    return 0;
}