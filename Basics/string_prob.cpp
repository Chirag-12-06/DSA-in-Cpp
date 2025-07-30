#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

//SORT STRING
// string sortcount(string s){
//     int A[26]={0};
//     for(int i=0;i<s.size();i++){
//         A[s[i]-'a']++;
//     }
//     int j=0;
//     for(int i=0;i<26;i++){
//         while(A[i]--){
//             s[j]=i+'a';
//             j++;
//         }
//     }
//     return s;
// }
// int main(){
//     // string s;
//     // cin>>s;
//     string s="fgdsafghadh";
//     cout<<sortcount(s);
// }

//CHECK IF 2 STRINGS ARE ANAGRAMS
// bool isanagram(string s1,string s2){
//     if(s1.length()!=s2.length()){
//         return false;
//     }
//     int A[26]={0};
//     for(int i=0;i<s1.length();i++){
//         A[s1[i]-'a']++;
//         A[s2[i]-'a']--;
//     }
//     for(int i=0;i<26;i++){
//         if(A[i]!=0){
//             return false;
//         }
//     }
//     return true;
// }
// int main(){
//     string s1,s2;
//     cin>>s1>>s2;
//     if(isanagram(s1,s2)){
//         cout<<"Yes";
//     }
//     else{
//         cout<<"No";
//     }
//}

//CHECK IF 2 STRINGS ARE ISOMORPHIC
// bool isisomorphic(string s1,string s2){
//     if(s1.length()!=s2.length()){
//         return false;
//     }
//     int A[128]={-1},B[128]={-1};
//     for(int i=0;i<s1.length();i++){
//         if(A[s1[i]-'\0']!=B[s2[i]-'\0']){
//             return false;
//         }
//         A[s1[i]-'\0']=B[s2[i]-'\0']=i+1;
//     }
//     return true;
// }
// int main(){
//     string s1,s2;
//     cin>>s1>>s2;
//     if(isisomorphic(s1,s2)){
//         cout<<"Yes";
//     }
//     else{
//         cout<<"No";
//     }
// }

//FIND LONGEST COMMON STRING IN ARRAY OF STRINGS
// string commonstringpre(string A[],int n){
//     sort(A->begin(),A->end());
//     int i=0,j=0;
//     string s1=A[0],s2=A[n-1],ans="";
//     while(i<s1.size() && j<s2.length()){
//         if(s1[i]==s2[j]){
//             ans+=s1[i];
//             i++;j++;
//         }
//         else{
//             break;
//         }
//     }
//     return ans;
// }
// int main(){
//     // int n; cin>>n;
//     // string A[n];
//     // for(string &s:A){
//     //     cin>>s;
//     // }
//     int n=2;
//     string A[]={"qwert","qwer"};
//     cout<<"LONGEST COMMON STRING = "<<commonstringpre(A,n);
// }

