#include<bits/stdc++.h>
using namespace std;

void printArray(int arr[], int size){
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
        cin>>arr[i];            // {3 3 1 7 7 4 4 5}
    }
    cout<<"Array before sort: ";
    printArray(arr, size);

    // Step # 1 : Finding maxium value.
    int max = INT_MIN;
    for(int i=0; i<size; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    cout<<"Max: "<<max<<endl;

    // Step # 2: Initialization of [count] array
    int count[max];
    cout<<"Count array initializiation: ";
    for(int i=0; i<=max; i++){
        count[i] = 0;
    }
    printArray(count, max);

    // Step # 3: Frequency calculation. [from [arr] to [count]]
    cout<<endl<<"Frequency Calculation: ";
    for(int i=0; i<size; i++){
        // count[arr[i]]++;
        int val = arr[i];
        count[val]++;
    }
    printArray(count, max+1);

    // Step # 4: Cumulative/Prefix Sum. [from count array with max value]
    cout<<endl<<"Cumulative sum: ";
    for(int i=1; i<=max; i++){
        count[i] += count[i-1];
    }
    printArray(count, max+1);

    // Step # 5: Final array - backward traversal from base array.
    cout<<endl<<"Idx"<<"\t"<<"Value"<<"\t"<<"SortPos"<<endl;
    int final[size];
    for(int i=size-1; i>=0; i--){
        count[arr[i]]--;
        int k = count[arr[i]];
        final[k] = arr[i];
        cout<<i<<"\t"<<final[k]<<"\t"<<k<<endl;
    }
    cout<<endl<<"Array after sort: ";
    printArray(final, size);


}
/*
loop # 7
arr[7] 5
prifix[5]6-1 = 5
sorted[5] 5

loop # 6
arr[6] 4
prifix[4] 5-1 = 4
sorted[4] 4

loop # 5
arr[5] 4
prifix[4-1]3   
sorted[3] 4  
    
loop # 4
arr[4] 7
prifix[7]8-1=7
sorted[7]7

loop # 3
arr[3] 7
prifix[7-1]6 
sorted[6]

loop # 2
arr[2] 1
prifix[1-1]0
sorted[0] 1

loop # 1
arr[1] 3
prifix[3-1]2
sorted[2] 3

    index	0 1 2 3 4 5 6 7	
    arr	    3 3 1 7 7 4 4|5|		arr[0] 3
	prefix	0 1 1 3 5|6|6 8		    prifix[3]3-1 = 2      
	sorted	1 3 3 4 4|5|7 7		    sorted[2] 5   

                       <---
    index	0 1 2 3 4 5 6 7
    arr	    3 3 1 7 7 4 4 5
    sort              5
    sort            4
    sort          4 
    sort                   7
    sort                 7
    sort    1
    sort        3
    sort      3


    for(int i=size-1; i>=0; i--){
        count[arr[i]]--;            6
        int k = count[arr[i]];      6
        final[k] = arr[i];          
    
*/