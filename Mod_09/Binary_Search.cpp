#include<bits/stdc++.h>
using namespace std;

// not working

int binarySearch(int arr[], int x, int lb, int ub){
    if(lb <= ub){
        int mid = (lb + ub)/2;
        if(x == arr[mid])       
            return mid;
        else if(x > arr[mid])
            binarySearch(arr, x, mid+1, ub); //goto right
        else                    
            binarySearch(arr, x, lb, mid-1); //goto left
    }
    else 
        return -1;
}

int main(){
    int size;
    cin>>size;
    int arr[size];

    for(int i=0; i<size; i++){
        cin>>arr[i];
    }

    int checkValue;
    cout<<"Enter the value want to search: ";
    cin>>checkValue;

    int index;
    index = binarySearch(arr, checkValue, 0, size-1);
    if(index != -1){
        cout<<"Index No.: "<<index<<endl<<"Position: "<<index+1;
    }
    else{
        cout<<"Not Found !!!"<<endl;
    }
    return 0;
}