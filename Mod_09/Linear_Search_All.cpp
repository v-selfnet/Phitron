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

    char ch;
    cout<<"Do you want to search [Y/N]: ";
    cin>>ch;
    while(toupper(ch) == 'Y'){
        int checkvalue;
        cout<<"Enter the search element: ";
        cin>>checkvalue;
        cout<<"Index\t\t"<<"Possition\t"<<"Element"<<endl;
        // Linear Search Start...
        int flag = 0;
        for(int i=0; i<size; i++){
            if(arr[i] == checkvalue){
                flag = 1;
                cout<<i<<"\t\t"<<i+1<<"\t\t"<<arr[i]<<endl;
            }
        }
        if(flag == 0) 
            cout<<endl<<"Not Found !!!"<<endl;
            cout<<"Do you want to continue [Y/N]: ";
            cin>>ch;
    }
    return 0;
}