#include<iostream>
using namespace std;

void wave(int A[],int n){
    for(int i=1;i<n;i+=2){
        if(A[i]>A[i-1]){
            swap(A[i],A[i-1]);
        }
        if(A[i]>A[i+1] && i<n-1){
            swap(A[i],A[i+1]);
        }
    }
}

int main(){
    int n;
    cin>>n;
    int A[n];
    for(int &e:A){
        cin>>e;
    }

    wave(A,n);

    for(int e:A){
        cout<<e<<" ";
    }
}