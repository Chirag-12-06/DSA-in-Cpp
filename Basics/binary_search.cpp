#include<iostream>
#include<algorithm>
using namespace std;


//NORMAL BINARY SEARCH
// int binsearch(int A[],int n,int target){
//     int low=0,high=n-1;
//     while(low<=high){
//         int mid=(low+high)/2;
//         if(A[mid]==target){
//             return mid+1;
//         }
//         if(A[mid]<target){
//             low=mid+1;
//         }
//         else{
//             high=mid-1;
//         }
//     }
//     return -1;
// }


//RECURSIVE BINARY SEARCH
int binsearch(int A[],int low,int high,int target){
    if(low>high){
        return -1;
    }
    int mid =low+(high-low)/2;
    if(A[mid]==target){
        return mid+1;
    }
    else if(A[mid]<target){
        binsearch(A,mid+1,high,target);
    }
    else{
        binsearch(A,low,mid-1,target);
    }
}

int main(){
    int A[]={1,2,4,8,21,34,54};
    int n=sizeof(A)/sizeof(A[0]);

    cout<<binsearch(A,0,n-1,54);
}