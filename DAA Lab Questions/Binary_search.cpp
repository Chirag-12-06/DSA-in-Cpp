#include<iostream>
using namespace std;

//ARRAY WITH NO LENGTH OR LENGTH INFINITY SO NO (high)
int main(){
    int A[]={2,4,7,9,10,26,34,45,58,69,70,89,99};
    int key,l=0,r=1;
    cin>>key;
    while(key>A[r]){
        l=r+1;
        r*=2;
    }
    while(l<=r){
        int mid=(l+r)/2;
        if(A[mid]==key){
            cout<<mid+1;
            return 0;
        }
        if(key>A[mid]){
            l=mid+1;
        }
        else{
            r=mid-1;
        }
    }
    cout<<"-1";
}