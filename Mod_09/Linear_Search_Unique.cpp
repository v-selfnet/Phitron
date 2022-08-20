#include<bits/stdc++.h>
using namespace std;

/*
    index               a[0]    a[1]    a[2]    a[3]    a[4] 
    Possition           10      20      30      40      50
                                                        |-----------> size-1 | n-1 | last element 

    Linear Search : Time Complexity : θ(n)
*/

int main(){
    int size;
    cin>>size;
    int arr[size];

    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    int search;
    cout<<"Enter the search element: ";
    cin>>search;
    cout<<"Index\t\t"<<"Possition\t"<<"Element"<<endl;
    // Linear Search Start...
    for(int i=0; i<size; i++){
        if(search == arr[i]){
            cout<<i<<"\t\t"<<i+1<<"\t\t"<<arr[i]<<endl;
            //break;    // [use break for unique element search]
                        // [without break for duplicate elements search]
        }
    }
}