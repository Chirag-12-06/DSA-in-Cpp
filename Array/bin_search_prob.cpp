#include<iostream>
using namespace std;


//FIND FIRST OCCURANCE
// int binsearch(int A[],int n,int target){
//     int low=0,high=n-1,ans=-1;
//     while(low<=high){
//         int mid=low+(high-low)/2;
//         if(A[mid]==target){
//             ans=mid+1;
//             high=mid-1;
//         }
//         else if(A[mid]>target){
//             high=mid-1;
//         }
//         else{
//             low=mid+1;
//         }
//     }
//     return ans;
// }
// int main(){
//     int A[]={2,5,5,5,6,6,8,9,9,9};
//     int n=sizeof(A)/sizeof(A[0]);
//     cout<<binsearch(A,n,9);
// }

//FIND SQUARE ROOT
// int sqroot(int n){
//     int low=1,high=n,ans=-1;
//     while(low<=high){
//         int mid=low+(high-low)/2;
//         if(mid*mid<=n){
//             ans=mid;
//             low=mid+1;
//         }
//         else if(mid*mid>n){
//             high=mid-1;
//         }
//     }
//     return ans;
// }
// int main(){
//     int n; cin>>n;
//     cout<<sqroot(n);
// }

//FIRST AND LAST OCCCURANCE
// int firstoccur(int A[],int n,int target){
//     int low=0,high=n-1,ans=-1;
//     while(low<=high){
//         int mid=low+(high-low)/2;
//         if(A[mid]>=target){
//             ans=mid+1;
//             high=mid-1;
//         }
//         else{
//             low=mid+1;
//         }
//     }
//     return ans;
// }
// int lastoccur(int A[],int n,int target){
//     int low=0,high=n-1,ans=-1;
//     while(low<=high){
//         int mid=low+(high-low)/2;
//         if(A[mid]<=target){
//             ans=mid+1;
//             low=mid+1;;
//         }
//         else{
//             high=mid-1;
//         }
//     }
//     return ans;
// }
// int main(){
//     int A[]={-2,1,1,2,3,4,4,4,5};
//     int n=sizeof(A)/sizeof(A[0]);
//     int t; cin>>t;
//     cout<<"["<<firstoccur(A,n,t)<<","<<lastoccur(A,n,t)<<"]";
// }

//INDEX OF MIN ELEMNENT IN A ROTATED ARRAY
// int minindex(int A[],int n){
//     if(n==1){
//         return 1;
//     }
//     int low=0,high=n-1;
//     if(A[low]<A[high]){
//         return low+1;
//     }
//     while(low<high){
//         int mid= low+(high-low)/2;
//         if(A[mid]>A[mid+1]){
//             return mid+2;
//         }
//         if(A[mid]<A[mid-1]){
//             return mid+1;
//         }
//         if(A[mid]<A[low]){
//             high=mid-1;
//         }
//         else{
//             low=mid+1;
//         }
//     }
// }
// int main(){
//     int n; cin>>n;
//     int A[n];
//     for(int &e:A){
//         cin>>e;
//     }
//     cout<<minindex(A,n);
// }

//FIND INDEX IN A ROTATED ARRAY
int index(int A[],int n,int target){
    int low=0,high=n-1,ans=-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(A[mid]==target){
            return mid+1;
        }
        if(A[mid]>=A[low]){
            if(target>=A[low] && target<A[mid]){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        else{
            if(target>A[mid] && target<=A[high]){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
    }
    return ans;
}
int main(){
    // int n; cin>>n;
    // int A[n];
    // for(int &e:A){
    //     cin>>e;
    // }
    // int t; cin>>t;
    int A[]={4,5,6,7,0,1,2};
    //cout<<index(A,5,1);
    //cout<<index(A,5,2);
    //cout<<index(A,5,3);
    cout<<index(A,7,0);
    //cout<<index(A,5,5);
    //cout<<index(A,5,9);
    return 0;
}

//FINDING PEAK ELEMENT IN A MOUNTAINAIN ARRAY
// int findpeak(int A[],int n){
//     int low=0,high=n-1;
//     while(low<=high){
//         int mid=(low+high)/2;
//         if(A[mid]>A[mid+1] && A[mid]>A[mid-1]){
//             return A[mid];
//         }
//         if(A[mid]>A[mid+1]){
//             high=mid-1;
//         }
//         else{
//             low=mid+1;
//         }
//     }
// }
// int main(){
//     int A[]={0,1,2,3,4,2,1,0};
//     int B[]={1,3,4,2,1};
//     int C[]={0,1,2,3,0};
//     int D[]={3,4,2,1,0};
//     int n=sizeof(A)/sizeof(A[0]);
//     int p=sizeof(B)/sizeof(B[0]);
//     int o=sizeof(C)/sizeof(C[0]);
//     int l=sizeof(D)/sizeof(D[0]);
//     cout<<findpeak(A,n)<<" ";
//     cout<<findpeak(B,p)<<" ";
//     cout<<findpeak(C,o)<<" ";
//     cout<<findpeak(D,l)<<" ";
// }

//FINDING ELEMENT IN A 2D ARRAY
// bool findin(int A[][4],int n,int target){
//     int low=0,high=n-1;
//     while(low<=high){
//         int mid=low+(high-low)/2;
//         int r=mid/4,c=mid%4;
//         if(A[r][c]==target){
//             return true;
//         }
//         else if (A[r][c]<target){
//             low=mid+1;
//         }
//         else{
//             high=mid-1;
//         }       
//     }
//     return false;
// }
// int main(){
//     int A[][4]={1,2,3,4,5,6,7,8,9,10,11,12};
//     int r=sizeof(A);
//     cout<<findin(A,r,23)<<" ";
// }

//FINDING MAXIMUM DISTANCE BETWEEN STUDENTS
// bool canplace(int A[],int n,int s,int mid){
//     int students=1,lastplaced=A[0];
//     for(int i=1;i<n;i++){
//         if(A[i]-lastplaced>=mid){
//             students++;
//             lastplaced=A[i];
//             if(students==s){
//                 return true;
//             }
//         }
//     }
//     return false;
// }
// int race(int A[],int n,int s){
//     int low=1,high=A[n-1]-A[0],ans=-1;
//     while(low<=high){
//         int mid=low+(high-low)/2;
//         if(canplace(A,n,s,mid)){
//             ans=mid;
//             low=mid+1;
//         }
//         else{
//             high=mid-1;
//         }
//     }
//     return ans;
// }
// int main(){
//     int n; cin>>n;
//     int A[n];
//     for(int &ele:A){
//         cin>>n;
//     }
//     int s; cin>>s;
//     cout<<race(A,n,s);
// }