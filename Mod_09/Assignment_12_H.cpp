#include<bits/stdc++.h>
using namespace std;


int main(){
    /*
    string str = "HASFJGHOGAKZZFEGA";
    int firstA = str.find('A');
    //int first_A = str.find_first_of('A');

    int firstZ = str.rfind('Z');
    //int first_Z = str.find_last_of('Z');
    
    // cout<<"A: "<<firstA<<" "<<"Z: "<<firstZ;
    // cout<<endl;
    //cout<<first_A<<" "<<first_Z;
    // cout<<"len: "<<str.length();
    // cout<<(firstZ-firstA)+1;
    // cout<<endl;
    int count = 0;
    for(int i=firstA; i<=firstZ; i++){
        count++;
    }
    cout<<"Total Character: "<<count;
    */
   /*
   string str = "HASFJGHOGAKZZFEGA";
    int firstA = str.find('A');
    int firstZ = str.find_last_of('Z');
    cout<<firstA<<" "<<firstZ<<endl;
    int count = 1;
    // for(int i=firstA; i<=firstZ; i++){
    //     count++;
    // }
    while(firstA<firstZ){
        firstA++;
        count++;
    }
    cout<<count;
    */
    string str = "HASFJGHOGAKZZFEGA";
    int firstA = str.find('A');
    int firstZ = str.find_last_of('Z');
    
    int count = 1;
    while(firstA<firstZ){
        firstA++;
        count++;
    }
    cout<<count;
    return 0;
}