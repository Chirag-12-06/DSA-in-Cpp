#include<iostream>
using namespace std;

void DNF(int A[],int low,int mid,int high){
    while(mid<=high){
        if(A[mid]==0){
            swap(A[low],A[mid]);
            low++;
            mid++;
        }
        else if(A[mid]==1){
            mid++;
        }
        else{
            swap(A[high],A[mid]);
            high--;
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

    DNF(A,0,0,2);

    for(int e:A){
        cout<<e<<" ";
    }
}