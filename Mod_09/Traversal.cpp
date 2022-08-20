#include<bits/stdc++.h>
using namespace std;
void PrintArray(int array[], int size){
    // This is called a traversal
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
    PrintArray(array, size);
}