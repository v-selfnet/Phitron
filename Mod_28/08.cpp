#include<bits/stdc++.h>
using namespace std;

/*
    Show the status of a STACK implemented by a linear linked list for the operations 
    given below. Here, x = Last digit of your birthday + 5, y=x+3, and z=y+x.

    Push(x+y), Push(y+z), Pop(), Push(y*z), Push(x*y), Pop(), Pop()

*/

// Linked List
class Node{
public:
    int val;
    Node *Next;
    Node(int val){
        this->val = val;
        this->Next = NULL;
    }
};
class Stack{
private:
    Node *Head;
    Node *Top;
public:
    Stack(){
        Head = NULL;
        Top = NULL;
    }
    // P U S H
    int push(int val){
        Node *newNode = new Node(val);
        if(Head == NULL){
            Head = Top = newNode;
            return val;
        }
        else{
            Top->Next = newNode;
            Top = newNode;
            return val;
        }
    }
    // P O P
    int pop(){
        Node *delNode;
        int delVal;
        Node *tmp = Head;
        
        if(tmp == NULL){
            cout<<"Stack Underflow";
            return -1;
        }   

        if(Head->Next == NULL){
            delNode = tmp;
            delVal = tmp->val;
            delete delNode;
            return delVal;
        }
        else{
            while(tmp->Next->Next != NULL){
                tmp = tmp->Next;
            }
            delNode = tmp->Next;
            delVal = tmp->Next->val;
            tmp->Next = NULL;
            delete delNode;
            return delVal;
        }
    }
    // P R I N T
    void print(){
        Node *tmp = Head;
        while(tmp != NULL){
            cout<<tmp->val<<" ";
            tmp = tmp->Next;
        }
        cout<<endl;
    }
};

int main(){
    Stack st;

    int x = 18+5;
    int y = 23+3;
    int z = x+y;

    st.push(x+y);
    st.push(y+z);

    cout<<st.pop()<<" ";
    st.push(y*x);
    st.push(x*y);
    cout<<st.pop()<<" ";
    // cout<<st.pop()<<" ";
}