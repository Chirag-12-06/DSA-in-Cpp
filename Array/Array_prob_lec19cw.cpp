#include<iostream>
using namespace std;

int main(){
    int r,c;
    cin>>r>>c;
    int A[r][c];

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>A[i][j];
        }
    }

// BOOL ARRAY WITH MAX NO OF ONES
    // for(int i=0;i<c;i++){
    //     for(int j=0;j<r;j++){
    //         if(A[j][i]==1){
    //             cout<<"Row with max no of ones is "<<j+1;
    //             return 0;
    //         }
    //     }
    // }

// SEARCH IN SORTED 2D ARRAY
    // int find,rf=0,cf=c-1;
    // cin>>find;
    // while(rf>=0 && cf>=0 && rf<r && cf<c){
    //     if(find==A[rf][cf]){
    //         cout<<"Element found at "<<rf+1<<" "<<cf+1;
    //         return 0;
    //     }
    //     if(find>A[rf][cf]){
    //         rf++;
    //     }
    //     else{
    //         cf--;
    //     }
    // }
    // cout<<"Element not found";
    // return 0;    
}