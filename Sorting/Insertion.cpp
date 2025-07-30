#include<iostream>
using namespace std;

void insertsort(int A[],int n){     //Array before the element is sorted n element is placed before the elements smaller than it
    for(int i=1;i<n;i++){
        int curr=A[i];
        int j=i-1;
        while(j>=0 && A[j]>curr){
            A[j+1]=A[j];
            j--;
        }
        A[j+1]=curr;
    }
}

int main(){
    int n;
    cin>>n;
    int A[n];
    for(int &e:A){
        cin>>e;
    }

    insertsort(A,n);

    for(int e:A){
        cout<<e<<" ";
    }
}