#include<bits/stdc++.h>
using namespace std;

/*
    Row mejor ordering:
        arr[i][j] =  Base + w[n(i-base)+(j-base)] 
    
    Column major ordering:
        arr[i][j] =  Base + w[m(j-base)+(i-base)]

    Base = arr[0][0]
    w = data type size
    n = per row elements
    m = per column elements
    base = base index 
*/
int main(){
    int row=10, col=5;
    int arr[row][col];
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
          arr[i][j] = 10*(i+1)+(j+1);       // initialized
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<endl;
    int baseR=0, baseC=0;
    int *B = &arr[baseR][baseC];

    cout<<"Row Major Ordering"<<endl;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            int *addressRowWise = B + (col*(i-baseR)+(j-baseC));
            cout<<long(addressRowWise)<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    int rowF=0, colF=1;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            if(i==rowF && j==colF){
                int *addressRowWise = B + (col*(i-baseR)+(j-baseC));
                cout<<"Find Row: "<<long(addressRowWise)<<endl;;
            }
        }
    }

    cout<<endl<<"Column Major Ordering"<<endl;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            int *addressColWise = B + (row*(j-baseR)+(i-baseC));
            cout<<long(addressColWise)<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    rowF=1, colF=0;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            if(i==rowF && j==colF){
                int *addressColWise = B + (row*(j-baseR)+(i-baseC));
                cout<<"Find Column: "<<long(addressColWise)<<endl;
            }
        }
    }
    cout<<endl<<"Base Address:"
    <<endl<<long(B);
}