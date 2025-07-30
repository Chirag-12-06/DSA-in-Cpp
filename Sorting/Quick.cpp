#include<iostream>
using namespace std;

int partition(int A[],int s,int e){
    int temp=A[e];

    int i=s-1,j=s;
    while(j<e){
        if(A[j]<temp){
            i++;
            swap(A[i],A[j]);
        }
        j++;
    }
    swap(A[e],A[i+1]);
    return i+1;
}

void quicksort(int A[],int s,int e){
    if(s>=e){
        return;
    }
    int pi=partition(A,s,e);
    quicksort(A,s,pi-1);
    quicksort(A,pi+1,e);
}

int main(){
    int n;
    cin>>n;
    int A[n];
    for(int &r:A){
        cin>>r;
    }
    
    quicksort(A,0,n-1);

    for(int e:A){
        cout<<e<<" ";
    }
}