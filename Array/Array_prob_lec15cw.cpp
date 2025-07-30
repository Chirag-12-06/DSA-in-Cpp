#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int A[n];
    for(int &ele:A){
        cin>>ele;
    }

    int s=0,e=n-1;
    while(s<=e){
        if(A[s]==1 && A[e]==0){
            swap(A[s],A[e]);
            s++;
            e--;
        }
        else if(A[s]==1){
            e--;
        }
        else{
            s++;
        }
    }

    for(int e:A){
        cout<<e<<" ";
    }
}