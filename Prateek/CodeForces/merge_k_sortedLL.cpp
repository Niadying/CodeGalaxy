#include<bits/stdc++.h> // LL
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    public:
    Node(int data1, Node* next1){
        data = data1;
        next = next1;
    }

    Node(int data1){
        data = data1;
        next = nullptr;
    }
};


Node* answer(vector<Node*>lists){
    
    // OPTIMAL USING PRIORIY QUEUE
    priority_queue<pair<int, Node*>, vector<pair<int, Node*>>, greater<pair<int, Node*>>> pq;
    for(int i = 0;i<lists.size(); i++){
        pq.push({lists[i]->data,lists[i]});
    }

    Node* dummyNode = new Node(-1);
    Node* head = dummyNode;
    while(!pq.empty()){
        Node* temp = pq.top().second;
        pq.pop();
        if(temp->next)
        pq.push({temp->next->data,temp->next});
        dummyNode->next = temp;
        dummyNode = dummyNode->next;
    }
    return head->next;
}

Node* ConvertARRtoLL(vector<int>&arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for(int i = 1; i<arr.size(); i++){
        Node* temp = new Node(arr[i]);
        mover->next=temp;
        mover = temp;
    }
    return head;
}

void print(Node* head){
    Node* temp = head;
    while(temp){
        cout<<temp->data<<" "; temp = temp->next;
    }
    cout<<endl;
}


int main (){
    vector<int>nums={3,2,1};
    vector<int>numss={9,8,7,6};
    vector<int>numsss={5,4,3,2};

    Node* head1 = ConvertARRtoLL(nums);
    Node* head2 = ConvertARRtoLL(numss);
    Node* head3 = ConvertARRtoLL(numsss);
    vector<Node*>listss = {head1,head2,head3};
    Node* head = answer(listss);
    print(head);
}