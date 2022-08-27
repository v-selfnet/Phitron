

#include<bits/stdc++.h>
using namespace std;

template<typename N> class Node{
    public:
        N val;
        Node *Prev;
        Node *Next;
        Node(N val){
            this->val = val;
            this->Prev = NULL;
            this->Next = NULL;
        }
};

template <typename S> class Stack{
    private:
        Node <S> *Head;
        Node <S> *Top;
        int count = 0;
    public:
        // Constructor
        Stack(){
            Head = NULL;
            Top = NULL;
        }
        
        // DISPLAY
        void display(){
            Node <S> *temp = Head;
            while(temp != NULL){
                cout<<temp->val;
                if(temp->Next != NULL){
                    cout<<" -> ";
                }
                temp = temp->Next;
            }
            cout<<endl;
        }

        // void dP(){
        //     Node <S> *temp = Top;
        //     while(temp != Head->Prev){ // null
        //         cout<<temp->val;
        //         if(temp->Prev != NULL){
        //             cout<<" -> ";
        //         }
        //         temp = temp->Prev;
        //     }
        //     cout<<endl;
        // }

        // PUSH
        void push(S val){
            Node <S> *newNode = new Node <S> (val);
            if(Head == NULL){
                Head = Top = newNode;
                count++;
                return;
            }
            Top->Next = newNode;
            newNode->Prev = Top;
            Top = newNode;
            count++;
        }
        
        // POP
        S pop(){
            Node <S> *delNode;
            delNode = Top;
            S delVal;
            // Case # 2: Where are no element in Stack
            if(Head == NULL){
                cout<<"Stack Underflow!!!"<<endl;
                return delVal;
            }
            // Case # 2: Where are only 1 element
            if(Top == Head){
                Head = Top = NULL;
            }
            // Case # 3: Where are more than 1 elements
            else{
                Top = delNode->Prev; // update top --
                Top->Next = NULL;
            }
            delVal = delNode->val;
            delete delNode;
            count--;
            return delVal;
        }
        
        // EMPTY
        bool empty(){
            if(Head == NULL)
                return true;
            else
                return false;
        }
        
        // SIZE
        int size(){
            return count;
        }
        
        // TOP    
        S top(){
            if(Top == NULL){
                cout<<"Stack Underflow"<<endl;
                return Top->val;
            }
            else{
                return Top->val;
            }
        }

        // MID
        S mid(){
            if(Top == NULL){
                cout<<"MID Stack Underflow"<<endl;
                return Top->val;
            }
            int pos = count/2;
            for(int i=1; i<=pos; i++){
                Top = Top->Prev;
            }
            return Top->val;
        }
};

