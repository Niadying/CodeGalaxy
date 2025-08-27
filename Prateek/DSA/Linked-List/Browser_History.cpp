#include<bits/stdc++.h> // LL
using namespace std;

class Node{
    public:
    string data;
    Node* next;
    Node* back;

    public:
    Node(string data1, Node* next1,Node* back1){
        data = data1;
        next = next1;
        back = back1;
    }

    Node(string data1){
        data = data1;
        next = nullptr;
        back = nullptr;
    }
};


class Browser{
    Node* currentPage;
    public:
    Browser(string homepage){
        currentPage = new Node(homepage);
    }

    void visit(string s){
        Node* newPage = new Node(s);
        currentPage->next = newPage;
        newPage->back = currentPage;
        currentPage = newPage;
    }

    string back(int n){
        while(n--){
            if(currentPage->back) currentPage = currentPage->back;
        }
        return currentPage->data;
    }

    string forward(int n){
        while(n--){
            if(currentPage->next) currentPage = currentPage->next;
        }
        return currentPage->data;
    }
};


int main (){
    Browser B("www.prateek.com");
    B.visit("www.amishaa.com");
    B.visit("www.prarthna.com");
    cout<<B.back(1)<<endl;
    cout<<B.back(1)<<endl;
    cout<<B.forward(1)<<endl;
    cout<<B.forward(1)<<endl;
    cout<<B.forward(1)<<endl;

}