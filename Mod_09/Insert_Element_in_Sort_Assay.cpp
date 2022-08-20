#include<bits/stdc++.h>
using namespace std;
    /* 
    * Time Complexity : θ(n). Swap n time
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
        for(int i=size-1; i>=pos; i--){
            array[i+1] = array[i];
            cout<<array[i]<<" ";
        }
        array[pos-1] = value;
        cout<<endl;
        cout<<"Array after insertion: ";
        PrintArray(array, size+1);      // +1 because insert 1 more value in actual size
    }
}

/*

array[5], pos=2

index-i     0           1           2           3           4          

array       1           2           3           4           5                        
                        i>=pos                              i=size-1        array[i+1] = array[i] 
memory      _           _           _           _           _               _


loop_1 -->  1           2           3           4           5               5

loop_2 -->  1           2           2           3           4               5
                
*/
