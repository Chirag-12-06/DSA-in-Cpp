#include<iostream>
using namespace std;
// TODO:CD JLC
int main(){
    // int n;
    // cin>>n;
    
    int A[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
 //PRINTING A MATRIX WITH SPIRAL ORDER   
    // int A[n][n],rs=0,re=n-1,cs=0,ce=n-1,no=1;
    
    // while(no<=n*n){
    //     for(int i=cs;i<=ce;i++){
    //         A[rs][i]=no;
    //         no++;
    //     }
    //     rs++;

    //     for(int i=rs;i<=re;i++){
    //         A[i][ce]=no;
    //         no++;
    //     }
    //     ce--;

    //     for(int i=ce;i>=cs;i--){
    //         A[re][i]=no;
    //         no++;
    //     }
    //     re--;

    //     for(int i=re;i>=rs;i--){
    //         A[i][cs]=no;
    //         no++;
    //     }
    //     cs++;
    // }

    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n;j++){
    //         cout<<A[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

//SUM OF NOS BETWEEN GIVEN COORDIANTES IN A 2D ARRAY
    // int S[3][4];
    // for(int i=0;i<3;i++){
    //     S[i][-1]=0;
    //     for(int j=0;j<4;j++){
    //         S[i][j]=A[i][j]+S[i][j-1];
    //     }
    // }

    // int r1,r2,c1,c2,sum=0;
    // cin>>r1>>c1>>r2>>c2;

    // for(int i=r1;i<=r2;i++){
    //     if(c1!=0){
    //         sum+=S[i][c2]-S[i][c1-1];
    //     }
    //     else{
    //         sum+=S[i][c2];
    //     }
    // }
    // cout<<sum;

//ALTERNATE METHOD
    int S[3][4];
    for(int i=0;i<3;i++){
        S[i][-1]=0;
        for(int j=0;j<4;j++){
            S[i][j]=A[i][j]+S[i][j-1];
        }
    }

    for(int i=0;i<4;i++){    
        for(int j=1;j<3;j++){
            S[j][i]+=S[j-1][i];
        }
    }

    int r1=1,r2=1,c1=2,c2=2,find;
    //cin>>r1>>c1>>r2>>c2>>find;

    if(r1!=0 && c1!=0){
        find=S[r2][c2]-S[r1-1][c2]-S[r2][c1-1]+S[r1-1][c1-1];
    }
    else if(r1!=0){
        find=S[r2][c2]-S[r1-1][c2];
    }
    else{
        find=S[r2][c2]-S[r2][c1-1];
    }

    // double f=8.9;
    // double *p=&f;

    // cout<<p<<" "<<p+1<<" "<<p+2<<endl;
    // cout<<sizeof(f);
}