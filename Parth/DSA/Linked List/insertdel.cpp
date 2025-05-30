#include<iostream>
#include <vector>
using namespace std;

class node{
    public:
    int data;
    node* next;

    public:
    node(int data1,node* next1){
        data = data1;
        next = next1;
    }

    public:
    node(int data1){
        data = data1;
        next = nullptr;
    }
};

node *cnvrtarr2ll(vector<int> &arr){
    node* head = new node (arr[0]);
    node* mover= head;
    for (int i =1;i<arr.size();i++){
        node* temp = new node(arr[i]);
        mover -> next = temp;
        mover =temp;
    }
    return head;
}


void print(node*head){
    while(head !=NULL){
        cout<< head -> data<<" ";
        head= head-> next;

    }
    cout<<endl;
}

node * removehead(node*head){

    if (head==nullptr) return head;
    node *temp = head;
    head=head->next;
    delete temp;
     return head;


}

node * deletetail( node* head){
    if(head == nullptr || head->next ==nullptr) return NULL;
    node * temp =head;

    while(temp->next->next != nullptr){
        temp = temp->next;
    }
    free (temp-> next);
    temp-> next=nullptr;
    return head;
     
}


node* removek(node * head, int k){
    if ( head == NULL) return head;

    if(k==1) {
        node* temp =head;
        head = head-> next;
        delete temp;
        return head;
    }

    int cnt =0;
    node* temp =head;
    node* prev =nullptr;

    while(temp!=nullptr){
            cnt++;
        
        if(cnt==k){
            prev->next= prev->next->next;
            delete temp;
            break;

        }
        prev = temp;
        temp = temp->next;
    }
    return head;
}

node* inserthead(node* head, int val){
    node* temp= new node(val,head);
    return temp;
}






int main (){
    vector<int > arr;
    arr.push_back(2);
    arr.push_back(5);
    arr.push_back(8);
    arr.push_back(7);
      node* head =cnvrtarr2ll(arr);

    // head = removehead(head);
    head = inserthead(head,100);

    print(head);




    // head =removehead(head);
    // print(head) ;

}
