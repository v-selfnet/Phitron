/*
Question # 7:
   Given a singly linked list of size N. The task is to reverse every k node 
   (where k is an input to the function) in the linked list. If the number of 
   nodes is not a multiple of k then left-out nodes, in the end, should be 
   considered as a group and must be reversed (See Sample 2 for clarification). 
   Your task is to complete the function reverseKNodes() which should reverse the 
   linked list in a group of size k and return the head of the modified linked list.
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
    //Case # 1: when head == NULL
    if(head==NULL){
        head = newNode;
        return;
    }
    Node *temp = head;
    //Case # 2: when head != NULL
    while(temp->Next != NULL){
        temp = temp->Next;
    }
    temp->Next = newNode;
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
    cout<<endl;
    while(head != NULL){
        cout<<head->val;
        if(head->Next != NULL)
            cout<<" -> ";
        head = head->Next;
    }
}

Node *reverseKNode(Node *head, int k){
    Node *tmp = head;
    
    Node *prev = NULL;
    Node *current = tmp;
    Node *next = tmp->Next;
    
    // int x = countLength(tmp);
    for(int i=0; i<k; i++){
        current->Next = prev;
        prev = current;
        current = next;
        if(current==NULL) break;
        next = next->Next;
    }
    return prev;
            

}

int main(){
    Node *head = NULL;

    int size;
    cin>>size;
    int arr[size];
    for(int i=0; i<size; i++){
        cin>>arr[i];
        insertAtTail(head, arr[i]);
    }


    head = reverseKNode(head, 3);

    display(head);
}