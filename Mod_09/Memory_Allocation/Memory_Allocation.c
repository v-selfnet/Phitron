// #include<bits/stdc++.h>
// using namespace std;
#include<stdio.h>

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

*/
int main(){
       
    int arr[6] = {7, 5, 12, 31, 8, 9};
    printf("Address\t\t\tIndex\tElements\n");
    
    for(int i=0; i<6; i++){
        int *pa = &arr[i];
        printf("%lld\t\t%d\t%d\n", pa, i, arr[i]);
    }
    printf("\n");
    int *B = &arr[1];       // base address [1] could be change. by default [0]
    int *find = 0;
    for(int i=0; i<6; i++){
        //find = B +(3*4); // use [4] size of data type sometime work, sometime no
        find = B +(3-1);
        //printf("%lld\t\t%d\t%d\n", find, i, arr[i]);
    }
    printf("\n");
    printf("Base Address: %lld\n", B);
    printf("Find Address: %lld", find);
}