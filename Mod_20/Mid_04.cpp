/*
Question # 4:
    WAP that will take (m x n) positive integer inputs into a matrix of 
    dimension m x n. Now replace all the duplicate integers by -1 in that matrix. 
    Finally display it.
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int m, n;
    cin>>m>>n;
    int arr[m][n];
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];            
        }
    }
    
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            int x = arr[i][j];
            int y = arr[j][i];
            if(arr[x] == arr[y]){
                cout<<arr[x][y]<<" ";
            }
        }
        cout<<endl;
    }
    
   

   /*
    int count[max+1] = {0};
    for(int i=0; i<size; i++){
        int val = arr[i];
        count[val]++;
    }
    */
   
}
