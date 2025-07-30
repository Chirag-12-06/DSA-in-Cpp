#include<iostream>
using namespace std;

void selectsort(int A[],int n){
    for(int i=0;i<n-1;i++){
        int min=i;
        for(int j=i+1;j<n;j++){     //Find the min element n swap it with the current postion
            if(A[j]<A[min]){
                min=j;
            }
        }
        if(min!=i){
            swap(A[min],A[i]);
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
    selectsort(A,n);

    for(int e:A){
        cout<<e<<" ";
    }
}