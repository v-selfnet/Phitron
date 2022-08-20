#include<bits/stdc++.h>
using namespace std;

void PrintArray(int array[], int size){
    for(int i=0; i<size; i++){
        cout<<array[i]<<" ";
    }
}
int main(){
    int array[50];
    
    int size;
    cin>>size;

    for(int i=0; i<size; i++){
        cin>>array[i];
    }
    int pos;
    cout<<"Possition of the deletion: ";
    cin>>pos;
    if(pos<0 || pos>size){              
        cout<<"Invalid possition";
    }
    else{
        if(pos == size-1)   size--;
        else{
            for(int i=pos; i<size; i++){
                array[i-1] = array[i];
            }
            size--;
        }
        cout<<"Array after deletion: ";
        PrintArray(array, size);
    }
}