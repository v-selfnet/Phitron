#include<bits/stdc++.h>
using namespace std;

int main(){
    int num;
    cin>>num;
    int a[3]={0};
    int i = 0;
    while(num>0){
        a[i] = num%10;
        num/=10;
        i++;
    }
    for(int i=0, j=2; i<j; i++, j--){
        if(a[i] == a[j])    cout<<"Yes";
        else                cout<<"No";
    }
}
