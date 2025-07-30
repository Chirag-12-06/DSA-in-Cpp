#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int A[n+1];
    A[n]={-1};
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    // int pd=A[1]-A[0],cl=2,ansl=2;
    // for(int i=2;i<n;i++){
    //     if(pd==A[i]-A[i-1]){
    //         cl++;
    //     }
    //     else{
    //         pd=A[i]-A[i-1];
    //         cl=2;
    //     }
    //     ansl=max(ansl,cl);
    // }
    // cout<<ansl;


    int days=0,maxd=-1;
    for(int i=0;i<n;i++){
        if(A[i]>maxd && A[i]>A[i+1]){
            days++;
        }
        maxd=max(maxd,A[i]);
    }
    cout<<days;
    return 0;
}