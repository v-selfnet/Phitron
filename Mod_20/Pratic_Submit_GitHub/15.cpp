/*
Question # 15:
    Write a function named move_tail() which will move the tail to the 
    first position of the list.
    For example: If the list looks like this,
        List: 2 -> 4 -> 1 -> 10 -> 5
    After the operation the list will look like this,
        List: 5 -> 2 -> 4 -> 1 -> 10

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

void tailGoHead(Node *&head){
    /*
    Case # 1:
    have to handel segmentation fault 
    if List element is NULL or less than two
    */
    Node *tmp = head;
        while(tmp->Next->Next != NULL){
            tmp = tmp->Next;
        }
        Node *catchTail = tmp->Next;
        tmp->Next = NULL;
        
        catchTail->Next = head;
        head = catchTail;
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
    for(int i=1; i<10; i++){
        insertNodeAtTail(head, i);
    }
    cout<<"Before: ";
    display(head);
    printAddress(head);
    
    tailGoHead(head);
    
    cout<<endl<<"After : ";
    display(head);
    printAddress(head);
}