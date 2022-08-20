#include<bits/stdc++.h>
using namespace std;

/*
Find Address [F] = Base Address [B] + Data Type [D] * Index [I]
Base address = first element of an array address. ex. 100
Daya type = data type integer 4 byte
Index  = array index start from [0] to [size-1] 

Formula: F = B + D * I [100+4*3] = 107
 
          0, 1, 2, 3, 4, 5    [index]
arr[6] = {4, 5, 7, 9, 8, 6}   [elements] [size = 6]
Find out the address of arr[3] that means array element {9} integer type.
Example:
    B   +   D   *   I   =   F
    100 +   4   *   3   =   112 is the third element address of an array

Advance Formula :
    location = B + (i-base) * 4 [ int-4]      // do not mension data type size in this compiler 
*/
int main(){
       
    int arr[6] = {7, 5, 12, 31, 8, 9};
    cout<<endl<<"Address"<<"\t\t\tIndex"<<"\tElements"<<endl;
    for(int i=0; i<6; i++){
        int *pa = &arr[i];
        cout<<long(pa)<<"\t\t"<<i<<"\t"<<arr[i]<<endl;
    }
    cout<<endl;
    int base = 0;
    int *B = &arr[base];
    int location = 4;
    for(int i=0; i<6; i++){
        /*
        if(i==location && (B>&arr[0])){
            // data type size [int 4 byte] calculate autometic
            int address = B + (i-base);   
            cout<<endl<<"Find Address:"<<endl<<long(address)<<"\t\t"<<i<<"\t"<<arr[i]<<endl;
        }
        else if(i==location && B==&arr[0]){
            address = B + i;
            cout<<endl<<"Find Address:"<<endl<<long(address)<<"\t\t"<<i<<"\t"<<arr[i]<<endl;
        }
        */
        if(i==location){
            int *address = B + (i-base);
            cout<<endl<<"Find Address:"<<endl<<long(address)<<"\t\t"<<i<<"\t"<<arr[i]<<endl;
        }
    }
    cout<<endl<<"Base Address:"<<endl<<long(B)<<endl;
}