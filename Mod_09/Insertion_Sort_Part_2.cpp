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
    cout<<endl;
    cout<<"Before Sort: ";
    Print(arr, size);
    
    // Insertion Sort Implementation
    // Try to optimize... you can do it.
    
    // arr[6]= {5, 1, 3, 8, 2, 2}
    for(int i=1; i<size; i++){
        int key = arr[i]; // 1, 2, 3, 4, 5               
        cout<<endl;
        int j = i-1; // 0, 1, 2, 3, 4
        cout<<"i: "<<i<<"\t"<<"key: "<<key<<"\t"<<"j: "<<j<<endl;
        while(arr[j]>key && j>=0){
            arr[j+1] = arr[j];        
            Print(arr,size);
            j--;
        }
        arr[j+1] = key;    
        Print(arr, size);
    }
    cout<<endl;
    cout<<"After Sort: ";
    Print(arr, size);    
    
    return 0;
}