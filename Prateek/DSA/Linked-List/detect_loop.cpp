#include<bits/stdc++.h>
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

bool detect_Loop(node* head){

    // OPTIMAL -> USE TORTOISE AND HARE ALGO
    node* slow = head;
    node* fast = head;
    while(fast&&fast->next){
        slow = slow->next;
        fast = fast->next;
        if(slow == fast) return true;
    }
    return false;

    
    // BRUTE -> STORE ELEMENTS IN MAP AND CONTINUE TRAVERSING AND WHEN 1ST NODE REPEATS THAT IS THE NODE FROM WHICH THE LOOP STARTS(CYCLE STARTS).
    node* temp = head;
    map<node* , int>mpp;
    while(temp){
        if(mpp.find(temp)!=mpp.end()) return true;
        mpp[temp] = temp->data;
        temp = temp->next;
    }
    return false;

}

int main (){

}