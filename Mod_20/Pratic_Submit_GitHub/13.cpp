/*
Question # 14:
    Write a function named count_node() to count the number 
    of nodes in that singly linked list.
*/
#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int val;
        Node *Next;
        Node(int val){
            this->val = val;
            this->Next = NULL;
        }
};

void insertNodeAtTail(Node *&head, int val){
    Node *newNode = new Node(val);
    // Case # 1: when head == NULL
    if(head == NULL){
        head = newNode;
        return;
    }
    // Case # 1: when head != NULL
    Node *tmp = head;
    while(tmp->Next != NULL){
        tmp = tmp->Next;
    }
    // Insert newNode here
    tmp->Next = newNode;
}

void deletionAtSpecificPosition(Node *head, int pos){
    // have to handel deletion head, tail & NULL 
    Node *tmp = head;
    int i = 1;
    while(i < pos-1){
        tmp = tmp->Next;
        i++;
    }
    Node *delNode = NULL;
    delNode = tmp->Next;
    tmp->Next = delNode->Next;
    delete delNode;

    // same but cant delete any node from list
    // tmp->Next = tmp->Next->Next; 
}

void display(Node *head){
    Node *tmp = head;
    while(tmp != NULL){
        cout<<tmp->val;
        if(tmp->Next != NULL){
            cout<<" -> ";
        }
        tmp = tmp->Next;
    }
    cout<<endl;
}

void printAddress(Node *head){
    cout<<endl;
    cout<<"Value"<<"\t"<<"Base Address"<<"\t\t"<<"Next Address"<<endl;
    Node *tmp = head;
    while(tmp != NULL){
        cout<<tmp->val<<"\t"<<long(tmp)<<"\t\t"<<long(tmp->Next)<<endl;
        tmp = tmp->Next;
    }
    cout<<endl;
}

int main(){
    Node *head = NULL;

    for(int i=1; i<7; i++){
        insertNodeAtTail(head, i);
    }
    cout<<"Before: ";
    display(head);
    printAddress(head);
    int pos;
    cout<<"Enter the Desired Position: ";
    cin>>pos;
    deletionAtSpecificPosition(head, pos);
    cout<<endl<<"After Delete: ";
    display(head);
    printAddress(head);
    
}