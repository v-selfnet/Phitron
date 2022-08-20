#include<bits/stdc++.h>
using namespace std;

    /* 
    * Unsorted array. 
    * Time Complexity : [Theta]θ(1). Swap 1 time 
    * Value insert which possition in what value.
    * Can use this algoritham on shorted array
    */

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
    int value, pos;
    cout<<"Value of the insertion: ";
        cin>>value;
    Flag:
    cout<<"Possition of the insertion: ";
        cin>>pos;
    if(pos<0 || pos>size){
        cout<<"Invalid possition"<<endl;
        goto Flag;
    }
    else{
        array[size] = array[pos-1];
        array[pos-1] = value;

        cout<<"Array after insertion: ";
        PrintArray(array, size+1);      // +1 because insert 1 more value in actual size

        
    }
}