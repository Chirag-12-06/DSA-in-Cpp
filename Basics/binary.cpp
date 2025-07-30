#include<iostream>
using namespace std;

void sort(int B[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(B[i]>B[j]){
                int temp=B[i];
                B[i]=B[j];
                B[j]=temp;
            }
        }
    }
}
int bin(int C[], int n, int key){
    int s=0,e=n;

    while(s<=e){
        int mid=(s+e)/2;
        if(C[mid]==key){
            return mid;
        }
        if(C[mid]>key){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return -1;
}

int main(){
    int n,key;
    cin>>n;
    int A[n];

    for(int &ele:A){
        cin>>ele;
    }
    cin>>key;

    sort(A,n);

    int pos=bin(A,n,key);
    cout<<pos;
}