#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[3];
    for(int i=0; i<3; i++){
        cin>>arr[i];
    }

    int count = 0;
 
    for (int i=1; i<3; i++) {
        int j=0;
        for (j=0; j<i; j++)
            if (arr[i] != arr[j])
                // break;
                count++;
 
        // if (i != j)
        //     count++;
    }
    cout<<count;
}
