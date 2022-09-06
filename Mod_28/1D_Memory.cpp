#include<bits/stdc++.h>
using namespace std;



int main(){
    int arr[6] = {7, 5, 12, 31, 8, 9};
    cout<<endl<<"Address"<<"\t\t\tIndex"<<"\tElements"<<endl;
    for(int i=0; i<6; i++){
        int *pa = &arr[i];
        cout<<long(pa)<<"\t\t"<<i<<"\t"<<arr[i]<<endl;
    }

    int base = 1;
    int *B = &arr[base];
    int findAddr = 4;
    for(int i=0; i<6; i++){
        
        if(i==findAddr){
            int *address = B + (i-base);
            cout<<endl<<"Find Address:"
            <<endl<<long(address)<<"\t\t"<<i<<"\t"<<arr[i]<<endl;
        }
    }
    cout<<endl<<"Base Address:"
    <<endl<<long(B)<<endl;
}

/*
B = a[0] Base Address. 
i, base = Index
w = 4 bytes [data type size]

a[i] = B + (i-base) * w

                [B]
              [100], 104, 108, 112, 116, 120      Address
                [0]    1    2    3    4    5      Index [i, base]
int arr[6] = {  [7],   5,  12,  31,   8,   9 }    Value

int find[4] = Addredd ??? where base address is a[0].

find[i] = B + (i-base) * w
find[3] = 100 + (3-0) * 4
        = 100 + 12
        = 112


*/