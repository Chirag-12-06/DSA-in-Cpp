#include<iostream>
using namespace std;

void merge(int A[],int s,int mid,int l){
    int b=mid-s+1,c=l-mid;
    int B[b],C[c];

    for(int i=0;i<b;i++){
        B[i]=A[s+i];
    }
    for(int j=0;j<c;j++){
        C[j]=A[mid+1+j];
    }

    int i=0,j=0,k=s;
    while(i<b && j<c){
        if(B[i]<C[j]){
            A[k++]=B[i++];
        }
        else{
            A[k++]=C[j++];
        }
    }
    while(i<b){
        A[k++]=B[i++];
    }
    while(j<c){
        A[k++]=C[j++];
    }
}

void mergesort(int A[],int s,int l){
    if(s>=l){
        return;
    }
    int mid=(s+l)/2;
    mergesort(A,s,mid);
    mergesort(A,mid+1,l);
    merge(A,s,mid,l);
}

int main(){
    int n;
    cin>>n;
    int A[n];
    for(int &e:A){
        cin>>e;
    }

    mergesort(A,0,n-1);

    for(int e:A){
        cout<<e<<" ";
    }
}