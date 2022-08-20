/*
Question # 12:
    Write a function named insert_node_by_position() that inserts a 
    value at any position of the singly linked list. You can assume 
    that if there are 5 nodes in the list, the positions are 0, 1, 2, 3 and 4.
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

void insertNodeByPosition(Node *head, int pos, int val){
    int i = 0;
    Node *tmp = head;
    while(i<pos-1){
        tmp = tmp->Next;
        i++;
    }
    Node *newNode = new Node(val);
    newNode->Next = tmp->Next;
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
    int randNum = rand()%100+1;

    for(int i=randNum; i<randNum+5; i++){
        insertNodeAtTail(head, i);
    }
    // cout<<endl<<"~ ~ ~ ~ ~ ~ Before Insertion Node ~ ~ ~ ~ ~ ~ "<<endl;
    cout<<endl<<"Linked List is: ";
    display(head);
    // displayAddress(head);

    int pos, val;
    cout<<endl<<"Enter Position [1-5] & Value Between Space: ";
    cin>>pos>>val;
    while(pos<1 || pos>5){
        cout<<endl<<"Enter Position [1-5] & Value Between Space: ";
        cin>>pos>>val;
    }
    insertNodeByPosition(head, pos, val);
    // cout<<endl<<"~ ~ ~ ~ ~ ~ After Insertion Node ~ ~ ~ ~ ~ ~ "<<endl;
    cout<<endl<<"Linked List is: ";
    display(head);
    // displayAddress(head);
    
    
}