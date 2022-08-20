#include<bits/stdc++.h>
using namespace std;

void printArray(int arr[], int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void Swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int size;
    cin>>size;
    int arr[size];

    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    cout<<"Array before sort: ";
    printArray(arr, size);
    
    for(int i=0; i<size-1; i++){
        int flag = 0;                               // optimized swap
        cout<<"Iteration: "<<i+1<<endl;
        for(int j=0; j<size-i-1; j++){              // optimized redundant iteration(j<size-i-1)
            cout<<arr[j]<<"--> "<<"["<<j+1<<"] ";
            if(arr[j]>arr[j+1]){
                Swap(&arr[j], &arr[j+1]);
                flag = 1;
            }
            printArray(arr, size);
        }
        if(flag==0) 
            break;
    }
    cout<<"Array after sort: ";
    printArray(arr, size);
}