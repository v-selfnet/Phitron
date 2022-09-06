#include<bits/stdc++.h>
using namespace std;

/*
Assume a 2D array is declared as int arr[70][65]. The value of the base address of 
the array is arr[0][0] = 1230. Find out the location of arr[3][18]. (An Integer is 
a word addressable (4 bytes) datatype) 
*/

int main(){
    int row=70, col=65;
    int arr[row][col];
    
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            arr[i][j] = 10*(i+1)+(j+1);
            //cout<<arr[i][j]<<" ";
        }
        //cout<<endl;
    }

    int baseR=0, baseC=0;
    //int *B = &arr[baseR][baseC];
    int B = 1230;
    int w = sizeof(int);
    
    cout<<endl;
    int rowMajorOrder;
    for(int i=0; i<3; i++){
        for(int j=0; j<18; j++){
            rowMajorOrder = B + (col*(i-baseR)+(j-baseC))*w;
        }
    }
    cout<<"Row Major Ordering: "<<rowMajorOrder;
}