#include<iostream>
using namespace std;

int  main(){
    int r=6,c=6,no=0;
    int A[6][6]={15,0,0,22,0,-15,0,11,3,0,0,0,0,0,0,-6,0,0,0,0,0,0,0,0,91,0,0,0,0,0,0,0,28,0,0};
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(A[i][j]!=0){
                no++;
            }
        }
    }

    int S[no+1][3],R[no+1][3],Add[2*(no+1)][3];
    S[0][0]=Add[0][0]=r;
    S[0][1]=Add[0][1]=c;
    S[0][2]=no;
    //CREATION OF COMPACT MATRIX (ROW MAJOR)
    int k=0;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(A[i][j]!=0){
                k++;
                S[k][0]=i;
                S[k][1]=j;
                S[k][2]=A[i][j];
            }
        }
    }

    //CREATION OF COMPACT MATRIX (COLUMN MAJOR)
    // int k=0;
    // for(int i=0;i<c;i++){
    //     for(int j=0;j<r;j++){
    //         if(A[j][i]!=0){
    //             k++;
    //             S[k][0]=j;
    //             S[k][1]=i;
    //             S[k][2]=A[j][i];
    //         }
    //     }
    // }

    //COPY COMPACT MATRIX
    for(int i=0;i<no+1;i++){
        for(int j=0;j<3;j++){
            R[i][j]=S[i][j];
        }
    }

    //TRANSPOSE OF COMPACT MATRIX
    for(int i=0;i<no;i++){
        swap(S[i][0],S[i][1]);
    }

    //CONVERTING ROW MAJOR ORDER
    for(int i=1;i<no+1;i++){
        for(int j=1;j<no+1-i;j++){
            if(S[j][0]>S[j+1][0]){
                swap(S[j][0],S[j+1][0]);
                swap(S[j][1],S[j+1][1]);
                swap(S[j][2],S[j+1][2]);
            }
        }
    }


    //ADDITION
    int i=1,j=1,finals=1;
    while(i<=no && j<=no){
        if((S[i][0]==R[j][0]) && (S[i][1]==R[j][1])){
            Add[finals][0]=S[i][0];
            Add[finals][1]=R[j][1];
            Add[finals][2]=S[i][2]+R[j][2];
            i++;
            j++;  
        }

        else if((S[i][0]==R[j][0]) && (S[i][1]<R[j][1]) || (S[i][0]<R[j][0])){
            Add[finals][0]=S[i][0];
            Add[finals][1]=S[i][1];
            Add[finals][2]=S[i][2];
            i++;  
        }

        else{
            Add[finals][0]=R[j][0];
            Add[finals][1]=R[j][1];
            Add[finals][2]=R[j][2];
            j++;
        }
        finals++;
    }

    while(i<=no){
        Add[finals][0]=S[i][0];
        Add[finals][1]=S[i][1];
        Add[finals][2]=S[i][2];
        i++;
        finals++;
    }

    while(j<=no){
        Add[finals][0]=R[j][0];
        Add[finals][1]=R[j][1];
        Add[finals][2]=R[j][2];
        j++;
        finals++;
    }
    Add[0][2]=finals;



    //PRINTING COMPACT MATRIX
    // for(int i=0;i<no+1;i++){
    //     for(int j=0;j<3;j++){
    //         cout<<R[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    cout<<endl;
    for(int l=0;l<finals;l++){
        for(int m=0;m<3;m++){
            cout<<Add[l][m]<<" ";
        }
        cout<<endl;
    }
}