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

int countLength(Node *head){
    int count = 0;
    Node *tmp = head;
    while(tmp != NULL){
        count++;
        tmp = tmp->Next;
    }
    return count;
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

int main(){
    Node *head = NULL;

    srand((unsigned) time(0));
    int size = rand()%20+1;
    for(int i=0; i<size; i++){
        int randNum = rand()%1000+1;
        insertNodeAtTail(head, randNum);
    }
    cout<<endl<<"Linked List is: "<<endl;
    display(head);
    cout<<endl<<"Linked List Length is: "<<countLength(head);
}