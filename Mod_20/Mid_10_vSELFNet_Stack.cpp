#include<bits/stdc++.h>
#include "vSELFNet_Stack.h"

using namespace std;

int main(){
    Stack <int> st;
    // Stack <float> st;

    cout<<"Push: ";    
    for(int i=1; i<=8; i++){
        st.push(i);
    }
    st.display();

    cout<<"Pop: ";
    cout<<st.pop()<<" ";
    cout<<st.pop()<<" ";
    cout<<st.pop()<<" ";
    
    // while(!st.empty()){
    //     cout<<st.pop()<<" "; 
    // }
   
    cout<<endl<<"Size: "<<st.size()<<endl;
    
    cout<<"Top: "<<st.top();
    
    // segmentation fault when top is empty
    cout<<endl<<"Mid: "<<st.mid();
}