#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int val;
    Node *Next;
    Node *Prev;
    Node(int val){
        this->val = val;
        this->Next = NULL;
        this->Prev = NULL;
    }
};

void createNode(Node *&head, int val){
    Node *newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        return;
    }
    Node *tmp = head;
    while(tmp->Next != NULL){
        tmp = tmp->Next;
    }
    tmp->Next = newNode;
    newNode->Prev = tmp;
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

void displayReverse(Node *head){
    Node *tmp = head;
    while(tmp->Next != NULL){
        tmp = tmp->Next;
    }
    while(tmp != NULL){
        cout<<tmp->val;
        if(tmp->Prev != NULL){
            cout<<" -> ";
        }
        tmp = tmp->Prev;
    }
    cout<<endl;
}


void displayAddress(Node *head){
    cout<<"Previous Address"<<"\t"<<"Value"<<"\t"<<"Base Address"<<"\t\t"<<"Next Address"<<endl;
    Node *tmp = head;
    while(tmp->Next != NULL){
        tmp = tmp->Next;
    }
    while(tmp != NULL){
        cout<<long(tmp->Prev)<<"\t\t"<<tmp->val<<"\t"<<long(tmp)<<"\t\t"<<long(tmp->Next)<<endl;
        tmp = tmp->Prev;
    }
}

int main(){
    Node *head = NULL;

    createNode(head, 14);
    createNode(head, 25);
    createNode(head, 33);
    createNode(head, 47);
    cout<<endl<<"Linked List: "<<endl;
    display(head);

    cout<<endl<<"Reversed Linked List: "<<endl;
    displayReverse(head);
    
    cout<<endl<<"Reversed Linked List with Addredd: "<<endl;
    displayAddress(head);

   
}