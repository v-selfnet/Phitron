#include<bits/stdc++.h>
using namespace std;

int main(){
    int weak[4];
    for(int i=0; i<4; i++){
        cin>>weak[i];
    }
    int count = 0;
    for(int i=0; i<4; i++){
        if(weak[i]>=10){
            count++;
        }
    }
    cout<<count;
    return 0;
}