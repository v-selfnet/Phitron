#include<bits/stdc++.h>
using namespace std;
void Print(int arr[], int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


int main(){
    int size;
    cin>>size;
    int arr[size];

    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    cout<<"Before Sort: ";
    Print(arr, size);
    cout<<endl;
    // Bubble Sort Implementation
    for(int i=0; i<size; i++){
        cout<<"Iteration: "<<i+1<<endl;
        for(int j=0; j<size-1; j++){
            if(arr[j]>arr[j+1]){
                int tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
            }
            Print(arr, size);
        }
        cout<<endl;
    }
    cout<<"After Sort: ";
    Print(arr, size);

    
    return 0;
}