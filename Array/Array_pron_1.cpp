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

    // int m=1e6+2,ans=INT_MAX;
    // int B[m];
    // for(int k=0;k<n;k++){
    //     B[k]=-1;
    // }
    // for(int i=0;i<n;i++){
    //     if(B[A[i]]!=-1){
    //         ans=min(ans,B[A[i]]);
    //     }
    //     else{
    //         B[A[i]]=i;
    //     }
    // }
    // if(ans==INT_MAX){
    //     cout<<"-1";
    // }
    // else{
    //     cout<<ans+1;
    // }

    // int s,e,sum,csum=0,i=0,j=0;
    // cin>>sum;
    
    // while(j<n && csum+A[j]<=sum){
    //     csum+=A[j];
    //     j++;
    // }
    // if(csum==sum){
    //     cout<<i+1<<" "<<j;
    // }
    
    // while(j<n){
    //     csum+=A[j];
    //     while(csum>s){
    //         csum-=A[i];
    //         i++;
    //     }
    //     if(csum==sum){
    //         s=i+1;
    //         e=j+1;
    //         break;
    //     }
    //     j++;
    // }
    //  cout<<s<<" "<<e;

    int N=1e6+2;
    bool check[N];

    for(int i=0;i<N;i++){
        check[i]=false;
    }

    for(int j=0;j<n;j++){
        if(A[j]>=0){
            check[A[j]]=true;
        }
    }

    for(int k=0;k<N;k++){
        if(check[k]==false){
            cout<<k;
            break;
        }
    }
    return 0;
}