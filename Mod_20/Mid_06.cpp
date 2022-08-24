/*
Question # 6:
    Write down a program that will take n number of input from 
    the users and create a Linear Linked List of n size. 
    Replace all the even numbers in the list with -1 and display the List.
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

void replaceNum(Node *head){
    Node *tmp = head;
    while(tmp != NULL){
        if(tmp->val%2==0){
            tmp->val =-1;
        }
        tmp = tmp->Next;
    }
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

int main(){
    Node *head = NULL;

    int size;
    cin>>size;
    int arr[size];
    for(int i=0; i<size; i++){
        cin>>arr[i];
        insertAtTail(head, arr[i]);
    }
    replaceNum(head);

    display(head);
}