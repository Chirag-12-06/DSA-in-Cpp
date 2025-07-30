#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n;
    cin>>n;

    int A[n];
    for(int &ele:A){
        cin>>ele;
    }
    // int maxsum=INT_MIN;
    // for(int i=0;i<n;i++){
    //     for(int j=i;j<n;j++){
    //         int sum=0;
    //         for(int k=i;k<=j;k++){
    //             sum+=A[k];
    //             //cout<<A[k]<<" ";
    //         }
    //         maxsum=max(maxsum,sum);
    //         //cout<<endl;
    //     }
    // }
    // cout<<maxsum;

    // int cursum[n+1];
    // cursum[0]=0;
    // for(int i=1;i<=n;i++){
    //     cursum[i]=cursum[i-1]+A[i-1];
    // }
    
    // int maxsum=INT_MIN;
    // for(int i=1;i<=n;i++){
    //     int sum =0;
    //     for(int j=0;j<n;j++){
    //         sum=cursum[i]-cursum[j];
    //         maxsum= max(sum,maxsum);
    //     }
    // }

    //KADANE'S ALGORITHM
    // int cursum=0,maxsum=INT_MIN;
    // for(int i=0;i<n;i++){
    //     if(A[i]>=0){
    //         cursum+=A[i];
    //     }
    //     else{
    //         cursum=0;
    //     }
    //     maxsum=max(maxsum,cursum);
    // }
    // cout<<maxsum;



// Circular Subarray Sum
    // int kadane(int A[],int n){
    //     int cursum=0,maxsum=INT_MIN;
    //     for(int i=0;i<n;i++){
    //         cursum+=A[i];
    //         if(cursum<0){
    //             cursum=0;
    //         }
    //         maxsum=max(maxsum,cursum);
    //     }
    //     return maxsum;
    // }
    // int main(){
    // int n;
    // cin>>n;

    // int A[n];
    // for(int &ele:A){
    //     cin>>ele;
    // }
    // cout<<A[3];
    // int wrapsum=0,nonwrapsum=0,tsum=0;

    // nonwrapsum=kadane(A,n);

    // for(int i=0;i<n;i++){
    //     tsum+=A[i];
    //     A[i]=-A[i];
    // }
    // wrapsum=tsum+kadane(A,n);

    // cout<<max(wrapsum,nonwrapsum);



// 2 PAIR SUM
    int low=0,high=n-1,k;
    cin>>k;
    while(low<=high){
        if(A[low]+A[high]==k){
            cout<<low+1<<" "<<high+1;
            return 0;
        }
        if(A[low]+A[high]<k){
            low++;
        }
        if(A[low]+A[high]>k){
            high--;
        }    
    }
    cout<<"no pair";
    return 0;
}
