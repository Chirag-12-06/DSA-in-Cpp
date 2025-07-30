#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    int A[n];
    for(int &e:A){
        cin>>e;
    }

// PARTITION POSSIBLE WITH EQUAL SUM
    // int psum=0,tsum=0;
    // for(int i=0;i<n;i++){
    //     tsum+=A[i];
    // }

    // for(int i=0;i<n;i++){
    //     psum+=A[i];
    //     if(psum==tsum-psum){
    //         cout<<i+1;
    //         break;
    //     }
    // }


// ANSWERING Q QUERIES FOR SUB ARRAY SUMS
    int S[n];
    S[-1]=0;
    for(int i=0;i<n;i++){
        S[i]=S[i-1]+A[i];
    }
    int s,e;
    cin>>s>>e;
    cout<<S[e-1]-S[s-2]+A[s-1];
}