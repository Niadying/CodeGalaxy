#include<bits/stdc++.h> // LL
using namespace std;

class node{
    public:
    int data;
    node* next;

    public:
    node(int data1, node* next1){
        data = data1;
        next = next1;
    }

    node(int data1){
        data = data1;
        next = nullptr;
    }
};

node* ConvertARRtoLL(vector<int>&arr){
    node* head = new node(arr[0]);
    node* mover = head;
    for(int i = 1; i<arr.size(); i++){
        node* temp = new node(arr[i]);
        mover->next=temp;
        mover = temp;
    }
    return head;
}

void print(node* head){
    node* temp = head;
    while(temp){
        cout<<temp->data<<" "; temp = temp->next;
    }
    cout<<endl;
}

int calc_length(node* head){
    node* temp = head;
    map<node* , int>mpp;
    int length = 0;
    while(temp){
        length++;
        if(mpp.find(temp)!=mpp.end()){
            length = length - mpp[temp];
            return length;
        }
        mpp[temp] = length;
        temp = temp->next;
    }
    return 0;
}
int main (){
    vector<int>nums={1,2,3,4,5,6,7,8,9,10};
    node* head = ConvertARRtoLL(nums);

}