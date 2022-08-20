#include<bits/stdc++.h>
using namespace std;

int main(){
    int color[3];
    for(int i=0; i<3; i++){
        cin>>color[i];
    }
    int count = 0;
    for(int i=0; i<3; i++){
        for(int j=0; j<i+1; j++){
            if(color[i] != color[j]){
                cout<<"i "<<i<<"\t"<<"j "<<j<<endl;
                count++;
           }
        }
    }
    cout<<count;
    return 0;
}