#include<iostream>
using namespace std;

int sort(int A[],int n){
    for(int i=1;i<n;i++){
        //bool flag=false;
        for(int j=0;j<n-i;j++){
            if(A[j]>A[j+1]){
                //flag=true;
                swap(A[j],A[j+1]);
            }
        }
        //if(!flag){
        //    break;
        //}
    }
}

int main(){
    int n;
    cin>>n;

    int A[n];
    for(int &ele:A){
        cin>>ele;
    }

    sort(A,n);
    for(int ele:A){
        cout<<ele<<" ";
    }
}