#include<iostream>
using namespace std;


//COUNT SORTING
int maxele(int A[],int n){
    int maxelem=0;
    for(int i=0;i<n;i++){
        maxelem=max(A[i],maxelem);
    }
    return maxelem; 
}
void countsort(int A[],int n){
    int no=maxele(A,n);
    int freq[no+1]={0};
    for(int i=0;i<n;i++){   //Adding frequency of elements in the Array
        freq[A[i]]++;
    }
    for(int i=1;i<=no;i++){     //Cummulative Frequency
        freq[i]+=freq[i-1];
    }
    int B[n];
    for(int i=n-1;i>=0;i--){    //Making new Array 
        B[--freq[A[i]]]=A[i];
    } 
    for(int i=0;i<n;i++){       //Copy Array
        A[i]=B[i];
    }    
}
int main(){
    int n;
    cin>>n;
    int A[n];
    for(int &e:A){
        cin>>e;
    }
    countsort(A,n);
    for(int w:A){
        cout<<w<<" ";
    }
}

//RADIX SORTING
// int maxele(int A[],int n){
//     int maxelem=0;
//     for(int i=0;i<n;i++){
//         maxelem=max(A[i],maxelem);
//     }
//     return maxelem; 
// }

// void countsort(int A[],int n,int pos){
//     int freq[10]={0};

//     for(int i=0;i<n;i++){
//         freq[(A[i]/pos)%10]++;
//     }
    
//     for(int i=1;i<10;i++){
//         freq[i]+=freq[i-1];
//     }

//     int B[n];
//     for(int i=n-1;i>=0;i--){
//         B[--freq[(A[i]/pos)%10]]=A[i];
//     }

//     for(int i=0;i<n;i++){
//         A[i]=B[i];
//     }    
// }
// void radixsort(int A[],int n){
//     int no=maxele(A,n);
//     for(int pos=1;no/pos>0;pos*=10){
//         countsort(A,n,pos);
//     }
// }

// int main(){
//     int n;
//     cin>>n;
//     int A[n];
//     for(int &e:A){
//         cin>>e;
//     }

//     radixsort(A,n);

//     for(int w:A){
//         cout<<w<<" ";
//     }
// }