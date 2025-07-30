#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>
using namespace std;
 
//COPY ONE STACK INTO ANOTHER (Recursion)
// void f(stack<int> &st,stack<int> &result){
//     if(st.empty()){
//         return;
//     }
//     int curr=st.top();
//     st.pop();
//     f(st,result);
//     result.push(curr);
// }
// int main(){
//     stack<int> s,res;
//     s.push(1);
//     s.push(2);
//     s.push(3);
//     f(s,res);
//     while(!res.empty()){
//         cout<<res.top()<<endl;
//         res.pop();
//     }
// }

//Insert at Bottom
// void insert_at_bottom(stack<int> &s,int e){
//     if(s.empty()){
//         s.push(e);
//         return;
//     }
//     int curr=s.top();
//     s.pop();
//     insert_at_bottom(s,e);
//     s.push(curr);
// } 
// int main(){
//     stack<int> s;
//     s.push(1);
//     s.push(2);
//     s.push(3);
//     insert_at_bottom(s,4);
//     while(!s.empty()){
//         cout<<s.top()<<endl;
//         s.pop();
//     }
// }

//Insert at Any Index
// void insert_at_any_index(stack<int> &s,int e,int index){
//     if((s.size()==index)){
//         s.push(e);
//         return;
//     }
//     int curr=s.top();
//     s.pop();
//     insert_at_any_index(s,e,index);
//     s.push(curr);
// }
// int main(){
//     stack<int> s;
//     s.push(1);
//     s.push(3);
//     s.push(4);
//     insert_at_any_index(s,2,3);
//     while(!s.empty()){
//         cout<<s.top()<<endl;
//         s.pop();
//     }
// }

//Reverse a stack
// void insert_at_bottom(stack<int> &s,int e){
//     if(s.empty()){
//         s.push(e);
//         return;
//     }
//     int curr=s.top();
//     s.pop();
//     insert_at_bottom(s,e);
//     s.push(curr);
// }
// void reverses(stack<int> &s){
//     if(s.empty()){
//         return;
//     }
//     int curr=s.top();
//     s.pop();
//     reverses(s);
//     insert_at_bottom(s,curr);
// }
// int main(){
//     stack<int> s;
//     s.push(1);
//     s.push(2);
//     s.push(3);
//     s.push(4);
//     reverses(s);
//     while(!s.empty()){
//         cout<<s.top()<<endl;
//         s.pop();
//     }
// }

//Balanced Parentheses.
// bool ispair(char s,char e){
//     if(s=='[' && e==']'){
//         return true;
//     }
//     if(s=='{' && e=='}'){
//         return true;
//     }
//     if(s=='(' && e==')'){
//         return true;
//     }
//     return false;
// }
// bool isbalanced(string s){
//     stack<char> S;
//     for(int i=0;i<s.length();i++){
//         if(s[i]=='[' || s[i]=='{' || s[i]=='('){
//             S.push(s[i]);
//         }
//         else{
//             if(S.empty() || !ispair(S.top(),s[i])){
//                 return false;
//             }
//             else{
//                 S.pop();
//             }
//         }
//     }
//     return S.empty();
// }
// int main(){
//     string s="[{}]{}";
//     cout<<isbalanced(s);
// }

//Next Greater Element
// vector<int> greater_ele(vector<int> &A){
//     int n=sizeof(A);
//     vector<int> res(n,-1);
//     stack<int> s;
//     s.push(0);
//     for(int i=1;i<n;i++){
//         while(!s.empty() && A[i]>A[s.top()]){
//             res[s.top()]=A[i];
//             s.pop();
//         }
//         s.push(i);
//     }
//     return res;
// }
// int main(){
//     vector<int> A;
//     A.push_back(2);
//     A.push_back(3);
//     A.push_back(9);
//     A.push_back(1);
//     A.push_back(5);
//     A.push_back(7);
//     A.push_back(8);
//     A.push_back(3);
//     A.push_back(9);
//     vector<int> out=greater_ele(A);
//     for(int i=0;i<sizeof(A);i++){
//         cout<<out[i]<<" ";
//     }
// }

//Stock Span
vector<int> pre_greater_ele(vector<int> &A){
    int n=sizeof(A);
    vector<int> result(n,-1);
    reverse(A.begin(),A.end());
    stack<int> s;
    s.push(0);
    for(int i=1;i<n;i++){
        while(!s.empty() && A[i]>A[s.top()]){
            result[s.top()]=n-i-1;
            s.pop();    
        }
        s.push(i);
    }
    reverse(A.begin(),A.end());
    reverse(result.begin(),result.end());
    return result;
}
int main(){
    vector<int> A;
    A.push_back(2);
    A.push_back(3);
    A.push_back(9);
    A.push_back(1);
    A.push_back(5);
    A.push_back(7);
    A.push_back(8);
    A.push_back(3);
    A.push_back(9);
    A.push_back(7);
    A.push_back(6);
    A.push_back(4);
    vector<int> out=pre_greater_ele(A);
    for(int i=0;i<sizeof(A);i++){
        cout<<i-out[i]<<" ";
    }
}