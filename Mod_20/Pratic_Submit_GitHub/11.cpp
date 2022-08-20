/*
Question # 11:
    Write a function named insert_node() that inserts 
    a value at the end of a singly linked list. 
    If there are no nodes, it will insert a head.
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

void displayAddress(Node *head){
    cout<<endl;
    cout<<"Value"<<"\t"<<"Base Address"<<"\t\t"<<"Next Address"<<endl;
    Node *tmp = head;
    while(tmp != NULL){
        cout<<tmp->val<<"\t"<<long(tmp)<<"\t\t"<<long(tmp->Next)<<endl;
        tmp = tmp->Next;
    }
}

int main(){
    Node *head = NULL;

    srand((unsigned) time(0));

    int size;
    cout<<"Linked List is Empty!!!"<<endl
    <<"How many Node want to Insert?: ";
    cin>>size;
    for(int i=0; i<size; i++){
        int randNum = rand()%100+1;
        insertNodeAtTail(head, randNum);
    }
    cout<<endl<<"Linked List: "<<endl;
    display(head);
    displayAddress(head);
}