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

    // OPTIMAL -> USE TORTOISE AND HARE WHEN SLOW == FAST START COUNTING TILL SLOW==FAST AGAIN MOVE IT ANY BY ONE STEP;

    node* slow = head;
    node* fast = head;

    while(fast&&fast->next){
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast){
            int cnt = 1;
            slow = slow->next;
            while(slow!=fast){
                slow = slow->next;
                cnt++;
            }
            return cnt;
        }
    }
    return 0;


    // BRUTE FORCE -> STORE POSTION IN MAP AND IF IT REPEATS JUST SUBSTRAVT FROM PREVIOUS VALUE

    // node* temp = head;
    // map<node* , int>mpp;
    // int length = 0;
    // while(temp){
    //     length++;
    //     if(mpp.find(temp)!=mpp.end()){
    //         length = length - mpp[temp];
    //         return length;
    //     }
    //     mpp[temp] = length;
    //     temp = temp->next;
    // }
    // return 0;
}
int main (){
    vector<int>nums={1,2,3,4,5,6,7,8,9,10};
    node* head = ConvertARRtoLL(nums);

}