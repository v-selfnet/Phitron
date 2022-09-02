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
}

void insertNodeBetween(Node *head, int key, int val){
    Node *tmp = head;
    int count = 0;
    if(tmp != NULL){
        while(tmp->val != key){
            tmp = tmp->Next;
            count++;
        }
        Node *insNode = new Node(val);
        insNode->Next = tmp->Next;
        tmp->Next = insNode;
    }
    else    
        cout<<"Can not Insert Node in Empty Linked List.";
}
    
void deleteHead(Node *&head){
    Node *tmp;
    tmp = head;
    if(tmp != NULL){
        head = tmp->Next;
        delete tmp;
    }
    else    
        cout<<"Linked List Empty.";
}
    
void makeCircle(Node *head){
    Node *tmp = head;
    while(tmp->Next != NULL){
        tmp = tmp->Next;
    }
    tmp->Next = head;
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
    
void printCircle(Node *head){
    Node *tmp = head;
    do{
        cout<<tmp->val;
        tmp = tmp->Next;
        if(tmp != NULL){
            cout<<" -> ";
        }
    }while(tmp != head);
    cout<<"["<<tmp->val<<"]"<<" [Head]";
}
   
void printCircleAddress(Node *head){
    cout<<endl;
    cout<<"Value"<<"\t"<<"Base Address"<<"\t\t"<<"Next Address"<<endl;
    Node *tmp = head;
    do{
        cout<<tmp->val<<"\t"<<long(tmp)<<"\t\t"<<long(tmp->Next)<<endl;
        tmp = tmp->Next;
    }while(tmp != head);
    cout<<"["<<tmp->val<<"]"<<"\t"<<long(tmp)<<"\t\t"<<long(tmp->Next)<<" <Head>"<<endl;
}

int main(){
    Node *head = NULL;

    createNode(head, 14);
    createNode(head, 25);
    createNode(head, 33);
    createNode(head, 47);
    cout<<endl<<"Linked List: "<<endl;
    display(head);

    insertNodeBetween(head, 33, 40);
    cout<<endl<<"Linked List After Insertion: "<<endl;
    display(head);

    deleteHead(head);
    cout<<endl<<"Linked List After Deletion Head: "<<endl;
    display(head);

    makeCircle(head);
    cout<<endl<<"Linked List After Make Circle: "<<endl;
    printCircle(head);
    cout<<endl;
    printCircleAddress(head);
}