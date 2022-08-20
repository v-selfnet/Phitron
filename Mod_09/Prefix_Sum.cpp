#include<bits/stdc++.h>
using namespace std;

int main(){
    int size;
    cin>>size;
    int arr[size];
    cout<<"Array Value: "<<"\t";
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }

    /*
    int sum = 0;
    for(int i=0; i<size; i++){
        sum += arr[i];
        cout<<arr[i]<<"\t"<<sum<<endl; // this is prefix sum array
    }
    */
    
    // Implementation of Prefix Sum array.
    int prefix[size];
    prefix[0] = arr[0];

    //cout<<endl;
    cout<<"Prefix value: "<<"\t";
    for(int i=1; i<=size; i++){
        prefix[i] = arr[i] + prefix[i-1];
        cout<<prefix[i-1]<<" ";
    }
    cout<<endl<<endl;
    cout<<"~~~ S I M U L A T I O N ~~~"<<endl;
    cout<<"[Prefix]"<<"\t"<<"[Array]"<<"\t\t"<<"PrefixSum"<<endl;
    for(int i=1; i<size; i++){
        cout<<"["<<i-1<<"]"<<prefix[i-1]
        <<"\t+\t"<<"["<<i<<"]"<<arr[i]
        <<"\t-->\t"<<prefix[i]<<endl;
    }
}

/*
    index     0   1   2   3   4  
    arr[5] = {10, 20, 30, 40, 50}
    pre[5] = {10, 30, 60, 100, 150}

    prefix  =   arr      +   prefix
    [i]     =   [i]      +   [i-1] 
    ------      ---          ------
    [0]30   =   [1]20    +   [1-1][0]10
    
    [1]60   =   [2]30    +   [2-1][1]30

    [2]100  =   [3]40    +   [3-1][2]60

    [3]150  =   [4]50    +   [4-1][3]100

*/