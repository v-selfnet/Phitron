#include<bits/stdc++.h>
using namespace std;

int main(){
    int row=50, col=45;
    int arr[row][col];
    /*
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
          arr[i][j] = 2*(i+1)+(j+1);       // initialized
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    */
    int baseR=0, baseC=0;
    int B = 760;
    int rowF=6, colF=13;
    
    /*
    cout<<"Row Major Ordering"<<endl;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            int addressRowWise = B + (col*(i-baseR)+(j-baseC));
            cout<<addressRowWise<<" ";
        }
        cout<<endl;
    }
    */
    
    cout<<"Base Array: "<<"arr"<<"["<<row<<"]"<<"["<<col<<"]"<<endl;
    cout<<"Base Address: "<<"arr"<<"[0]"<<"[0]"<<" = "<<B<<endl;
    cout<<"Target Location: "<<"arr"<<"["<<rowF<<"]"<<"["<<colF<<"]"<<endl;

    cout<<endl;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            if(i==rowF && j==colF){
                int addressRowWise = B + (col*(i-baseR)+(j-baseC));
                cout<<"Find Address: "<<addressRowWise<<" <-- Row Major Ordering "<<endl;
            }
        }
    }
    /*
    cout<<endl<<"Column Major Ordering"<<endl;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            int addressColWise = B + (row*(j-baseR)+(i-baseC));
            cout<<addressColWise<<" ";
        }
        cout<<endl;
    }
    */
    cout<<endl;
    rowF=6, colF=13;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            if(i==rowF && j==colF){
                int addressColWise = B + (row*(j-baseR)+(i-baseC));
                cout<<"Find Address: "<<addressColWise<<" <-- Column Major Ordering"<<endl;
            }
        }
    }
}