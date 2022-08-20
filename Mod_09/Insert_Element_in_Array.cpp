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

    /* 
    * Time Complexity : θ(n). Swap n time
    * Value insert which possition in what value.
    * Can use this algoritham on shorted array
    */

    int value, pos;
    // cout<<"Value of the insertion: ";
    //     cin>>value;
    // cout<<"Possition of the insertion: ";
    cout<<"Possition of the deletion: ";
        cin>>pos;
    if(pos<0 || pos>size){              // Deletion=size, insertion=size
        cout<<"Invalid possition";
    }
    else{
        //Sorted
        // for(int i=size-1; i>=pos; i--){
        //     array[i+1] = array[i];
        // }
        // array[pos] = value;

    /* 
    * Unsorted array. 
    * Time Complexity : [Theta]θ(1). Swap 1 time 
    * Value insert which possition in what value.
    * Can use this algoritham on shorted array
    */
        // [0, 1, 2, 3, 4, 5]
        // {5, 4, 3, 2, 1}              // size=5, pos=2, val=9
        // array[size] = array[pos-1];     // array[5] = array[2-1]
        // array[pos-1] = value;           // array[1] = value

        // cout<<"Array after insertion: ";
        // PrintArray(array, size+1);      // +1 because insert 1 more value in actual size

        // [0, 1, 2, 3, 4, 5]
        // {5, 4, 3, 2, 1}
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