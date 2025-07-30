#include<iostream>
using namespace std;

int merge(int A[],int s,int mid,int l){
    int b=mid+1-s,c=l-mid,inv=0;
    int B[b],C[c];

    for(int i=0;i<b;i++){
        B[i]=A[s+i];
    }

    for(int i=0;i<c;i++){
        C[i]=A[mid+1+i];
    }
    
    int i=0,j=0,k=0;
    while(i<b && j<c){
        if(B[i]<C[j]){
            A[k++]=B[i++];
        }
        else{
            A[k++]=C[j++];
            inv+=b-i;
        }
    }
    while(i<b){
        A[k++]=B[i++];
    }
    while(j<c){
        A[k++]=C[j++];
    }
    return inv;
}

int countinversions(int A[],int s,int l){
    int inv=0;
    if(s<l){
        int mid=(s+l)/2;
        inv+=countinversions(A,s,mid);
        inv+=countinversions(A,mid+1,l);
        inv+=merge(A,s,mid,l);
    }
    return inv;
}

int main(){
    int n;
    cin>>n;
    int A[n];
    for(int &e:A){
        cin>>e;
    }

    cout<<countinversions(A,0,n-1);
}