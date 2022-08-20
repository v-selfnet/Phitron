#include<bits/stdc++.h>
using namespace std;

/*
Find Address [F] = Base Address [B] * Data Type [D] + Index [I]
Base address = first element of an array address. ex. 100
Daya type = data type integer 4 byte
Index  = array index start from [0] to [size-1] 

Formula: F = B + D * I [100+4*3] = 107
 
          0, 1, 2, 3, 4, 5    [index]
arr[6] = {4, 5, 7, 9, 8, 6}   [elements] [size = 6]
Find out the address of arr[3] that means array element {9} integer type.
Example:
    B   +   D   *   I   =   F
    100 +   4   *   3   =   107 is the third element address of an array

*/
int main(){
    // Single Integer
    int num = 20;
    int *p = &num;
    cout<<"address"<<"\t\taddress"<<"\t\t\tvalue"<<endl;
    printf("%p\t%lld\t\t%d\n", p, p, *p);
    p++;
    printf("%p\t%lld\t\t%d\n", p, p, *p);
    
    // Array integer
    // [*pa] denote a single address. that is called base address
    // [pa] show each elements addresses.
    int arr[6] = {7, 5, 12, 31, 8, 9};
    cout<<endl<<"Address"<<"\t\t\tIndex"<<"\tElements"<<endl;
    for(int i=0; i<6; i++){
        int *pa = &arr[i];
        cout<<long(pa)<<"\t\t"<<i<<"\t"<<arr[i]<<endl;
    }
    cout<<endl;
    int size = 6;
    int *ppa = &arr[size];
    cout<<long(ppa)<<"\t\t\t"<<arr[0]<<endl;
    ppa++;
    cout<<long(ppa)<<"\t\t\t"<<arr[1]<<endl;
    ppa++;
    cout<<long(ppa)<<"\t\t\t"<<arr[2]<<endl;
    cout<<long(ppa)<<"\t\t\t"<<arr[3]<<endl;
    cout<<long(ppa)<<"\t\t\t"<<arr[4]<<endl;
    cout<<long(ppa)<<"\t\t\t"<<arr[5]<<endl;

    // cout<<endl;
    // int *pNext = &arr[size];
        
    // cout<<long(pNext)<<"\t\t\t"<<arr[0]<<endl;
        
    //     int *addr_1 = pNext+(4*1);
    // cout<<long(addr_1)<<"\t\t\t"<<arr[1]<<endl;
        
    //     int *addr_2 = pNext+4*2;
    // cout<<long(addr_2)<<"\t\t\t"<<arr[2]<<endl;
    
    // cout<<long(ppa)<<"\t\t\t"<<arr[3]<<endl;
    // cout<<long(ppa)<<"\t\t\t"<<arr[4]<<endl;
    // cout<<long(ppa)<<"\t\t\t"<<arr[5]<<endl;
}