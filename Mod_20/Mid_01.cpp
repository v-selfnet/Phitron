/*
Question # 1:
    WAP that will take n integers into an array. Now find out the number of 
    occurrences for each of the unique numbers. Each line of the output will 
    be a unique number that exists in the array and its frequency. You can 
    print them in any order.
*/

#include<bits/stdc++.h>
using namespace std;

void printArray(int arr[], int size){
    for(int i=0; i<size; i++){
        cout<<i<<" -> "<<arr[i]<<endl;
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
   int max = INT_MIN;
    for(int i=0; i<size; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    int count[max+1] = {0};
    for(int i=0; i<size; i++){
        int val = arr[i];
        count[val]++;
    }
    printArray(count, max+1);
}
