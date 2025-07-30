#include<iostream>
using namespace std;

// int partition(int A[],int s,int e){
//     int temp=A[e],i=s-1,j=s;
//     while(j<e){
//         if(A[j]<temp){
//             i++;
//             swap(A[i],A[j]);
//         }
//         j++;
//     }
//     swap(A[e],A[i+1]);
//     return i+1;
// }
// int quicksort(int A[],int s,int e,int k){
//     int pi=partition(A,s,e);
//     if((k-1)==pi){
//         return A[pi];
//     }
//     if((k-1)>pi){
//         quicksort(A,pi+1,e,k);
//     }
//     else{
//         quicksort(A,s,pi-1,k);
//     }
// }
// int main(){
//     int A[]={3,5,2,1,7,8,6};
//     int n=sizeof(A)/sizeof(A[0]);
//     int k;
//     cin>>k;
//     int ele=quicksort(A,0,n,k);
//     cout<<ele;
// }

void sort(int A[],int a,int B[],int b,int C[]){
    int i=0,j=0,k=0;
    while(i<a && j<b){
        if(A[i]<B[j]){
            C[k++]=A[i++];
        }
        else{
            C[k++]=B[j++];
        }
    }
    while(i<a){
        C[k++]=A[i++];
    }
    while(j<b){
        C[k++]=B[j++];
    }
}

int main(){
    int num1[]={5,8,10}, num2[]={2,7,8};
    int n1=sizeof(num1)/sizeof(num1[0]), n2=sizeof(num2)/sizeof(num2[0]);
    int num3[n1+n2];

    sort(num1,n1,num2,n2,num3);

    for(int e:num3){
        cout<<e<<" ";
    }
}