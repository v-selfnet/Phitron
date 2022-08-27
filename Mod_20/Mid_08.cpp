/*
Question # 8:
   Given a linked list of size K and two integers M and N. 
   Traverse the linked list such that you retain M nodes then 
   delete the next N nodes, continue the same till the end of 
   the linked list.
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

void insertAtTail(Node *&head, int val){
    Node *newNode = new Node(val);
    if(head==NULL){
        head = newNode;
        return;
    }
    Node *temp = head;
    while(temp->Next != NULL){
        temp = temp->Next;
    }
    temp->Next = newNode;
}

void display(Node *head){
    cout<<endl;
    while(head != NULL){
        cout<<head->val;
        if(head->Next != NULL)
            cout<<" -> ";
        head = head->Next;
    }
    cout<<endl;
}

void deletionNodes(Node *head, int pos, int x){
    Node *tmp = head;
    
    tmp = tmp->Next;
    int i = 1;
    while(i < pos-1){
        tmp = tmp->Next;
        i++;
    }
    for(int del=0; del<x; del++){
        Node *delNode = tmp->Next;
        tmp->Next = delNode->Next;
        delete delNode;
    }
   
}
        
int main(){
    // The length of Node will 1+, when Node !NULL
    // Have to handel this error.
    // Node *head = NULL;
    Node *head = new Node(0);

    // srand((unsigned) time(0));
    int size, pos, del;
    cin>>size>>pos>>del;
    int arr[size];
    for(int i=1; i<size+1; i++){
        // cin>>arr[i];
        int randNum = rand()%10+1;
        insertAtTail(head, randNum);
    }
    display(head); cout<<endl;

    while(1){
        if(pos>0 && del<size){
            deletionNodes(head, pos, del);
            break;
        }
        else{
            if(pos<1){
                cout<<"Head Should Not Delete"<<endl;
                cout<<"Enter Position & Delete Item: ";
                cin>>pos>>del;
            }
            else{
                cout<<"Delete Item is Out of Range"<<endl;
                cout<<"Enter Position & Delete Item: ";
                cin>>pos>>del;
            }
        }
    }
    display(head);
}