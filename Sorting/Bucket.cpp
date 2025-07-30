#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void bucketsort(float A[],int n){
    vector<vector<float>> bucket(n,vector<float>());

    for(int i;i<n;i++){
        int index=A[i]*n;
        bucket[index].push_back(A[i]);
    }

    for(int i=0;i<n;i++){
        if(!bucket[i].empty()){
            sort(bucket[i].begin(),bucket[i].end());
        }
    }
    int count=0;
    for(int i;i<n;i++){
        for(int j=0;j<bucket[i].size();j++){
            A[count++]=bucket[i][j];
        }
    }
}

int main(){
    float A[]={.12,.13,.45,.89,.75,.63,.85,.35};
    int n=sizeof(A)/sizeof(A[0]);

    bucketsort(A,n);

    for(float e:A){
        cout<<e<<"  ";
    }
}