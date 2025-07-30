#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

//  Q1) Implement the Binary search algorithm regarded as a fast search algorithm with run-time complexity of Ο(log n) in comparison to the Linear Search. 
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

//  Q2) Bubble Sort is the simplest sorting algorithm that works by repeatedly swapping the adjacent elements if they are in wrong order. Code the Bubble sort with the following elements: {64,34,25,12,22,11,90}
// int bubblessort(int A[],int n){
//     for(int i=1;i<n;i++){
//         for(int j=0;j<n-i;j++){
//             if(A[j]>A[j+1]){
//                 swap(A[j],A[j+1]);
//             }
//         }
//     }
// }
// int main(){
//     int A[]={64,34,25,12,22,11,90};
//     int n=sizeof(A)/sizeof(A[0]); 
//     bubblessort(A,n);
//     for(int ele:A){
//         cout<<ele<<" ";
//     }
// }

//  Q3) Design the Logic to Find a Missing Number in a Sorted Array. Given an array of n-1 distinct integers in the range of 1 to n, find the missing number in it in a Sorted Array 
// (a) Linear time  
// int main(){
//     int n; cin>>n;
//     int A[n];
//     for(int &e:A){
//         cin>>e;
//     }  
//     int sum=0;
//     for(int i=0;i<n;i++){
//         sum+=A[i];        
//     }
//     cout<<"The missing no. is: "<<((n+1)*(n+2)/2)-sum;
// } 
// (b) Using binary search
// int missing(int A[],int n){
//     int miss=-1,l=0,h=n-1;
//     while(l<=h){
//         int mid=(l+h)/2;
//         if(mid+1!=A[mid]){
//             miss=mid+1;
//             h=mid-1;
//         }
//         else{
//             l=mid+1;
//         }
//     }
//     return miss; 
// }
// int main(){
//     int n; cin>>n;
//     int A[n];
//     for(int &e:A){
//         cin>>e;
//     }
//     cout<<missing(A,n);
// }

//  Q4) String Related Program
// (a) Write a program to concatenate one string to another string.
// int main(){
//     string s1,s2,s3;
//     cin>>s1>>s2;
//     s3=s1+s2;
//     cout<<s3;
// }
// (b) Write a program to reverse a string.
// int main(){
//     string s1="rdxfcghvj",sr;
//     for(int i=0;i<s1.length();i++){
//         sr[s1.length()-1-i]=s1[i];
//     }
//     cout<<sr;
//}
// (c) Write a program to delete all the vowels from the string.
// int main(){
//     string s1="abaaasda",s2=""; //cin>>s1;
//     for(int i=0;i<s1.length();i++){
//         if(s1[i]!='a'|| s1[i]!='e'||s1[i]!='i'||s1[i]!='u'||s1[i]!='o' ){
//             s2+=s1[i];
//         }
//     }
//     cout<<s2;
// }
// (d) Write a program to sort the strings in alphabetical order.
// int main(){
//     string s1; cin>>s1;
//     int A[26]={0};
//     for(int i=0;i<s1.length();i++){
//         A[s1[i]-'a']++;
//     }
//     int k=0;
//     for(int i=0;i<26;i++){
//         while(A[i]--){
//             s1[k++]=i+'a';
//         }
//     }
//     cout<<s1;
// }
// (e) Write a program to convert a character from uppercase to lowercase.
// int main(){
//     char c;
//     cout<<"Enter any character: "; cin>>c;
//     c=c-'A'+'a';
//     cout<<"The lower of character is: "<<c;
// }

//  Q5) Space required to store any two-dimensional array is 𝑛𝑢𝑚𝑏𝑒𝑟 𝑜ƒ 𝑟𝑜𝑤𝑠 × 𝑛𝑢𝑚𝑏𝑒𝑟 𝑜ƒ c𝑜𝑙𝑢𝑚𝑛𝑠. Assuming array is used to store elements of the following matrices,implement an efficient way that reduces the space requirement.  
// (a) Diagonal Matrix.  
// (b) Tri-diagonal Matrix.  
// (c) Lower triangular Matrix.  
// (d) Upper triangular Matrix.  
// (e) Symmetric Matrix  


//  Q6) Write a program to implement the following operations on a Sparse Matrix,assuming the matrix is represented using a triplet.  
// (a) Transpose of a matrix.  
// (b) Addition of two matrices.  
// (c) Multiplication of two matrices.


//  Q7) Let A[1 …. n] be an array of n real numbers. A pair (A[i], A[j]) is said to be an inversion if these numbers are out of order, i.e., i < j but A[i]>A[j]. Write a program to count the number of inversions in an array. 
// int merges(int A[],int s,int mid,int l){
//     int b=mid-s+1,c=l-mid,count=0;
//     int B[b],C[c];
//     for(int i=0;i<b;i++){
//         B[i]=A[s+i];
//     }
//     for(int i=0;i<c;i++){
//         C[i]=A[mid+1+i];
//     }
//     int i=0,j=0,k=s;
//     while(i<b && j<c){
//         if(B[i]<C[j]){
//             A[k++]=B[i++];
//         }
//         else{
//             A[k++]=C[j++];
//             count++;
//         }
//     }
//     while(i<b){
//         A[k++]=B[i++];
//         count++;
//     }
//     while(j<c){
//         A[k++]=C[j++];
//     }
//     return count;
// }
// int mergesort(int A[],int s,int l){
//     int count=0;
//     if(s>=l){
//         return 0;
//     }
//     int mid=(s+l)/2;
//     count+=mergesort(A,s,mid);
//     count+=mergesort(A,mid+1,l);
//     count+=merges(A,s,mid,l);
//     return count;
// }
// int main(){
//     int A[]={1,2,3,4};
//     int n=sizeof(A)/sizeof(A[0]);
//     cout<<mergesort(A,0,n-1)<<endl;
//     for(int e:A){
//         cout<<e<<" "; 
//     } 
// }

//  Q8) Write a program to count the total number of distinct elements in an array of length n
// int main(){
//     int A[]={1,1,2,3,3,4,5,6,6,6,7};
//     int n=sizeof(A)/sizeof(A[0]),count=0;
//     for(int i=0;i<n-1;i++){
//         if(A[i]!=A[i+1]){
//             count++;
//         }
//     }
//     cout<<count+1;
// }