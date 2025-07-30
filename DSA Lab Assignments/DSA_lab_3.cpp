#include<iostream>
#include<stack>
#include<algorithm>
#include<string>
using namespace std;


//  Q1. Develop a menu driven program demonstrating the following operations on a Stack using array: (i)  push(),   (ii)  pop(),   (iii)  isEmpty(),   (iv)  isFull(),   (v)  display(), and   (vi) peek().  
// class Stack{
//     int capacity;
//     int* A;
//     int top_idx;
//     public:
//     Stack(int c){
//         capacity=c;
//         A=new int[c];
//         top_idx=-1;
//     }
//     void push(int data){
//         if(isFull()){
//             cout<<"Overflow\n";
//             return;
//         }
//         top_idx++;
//         A[top_idx]=data;
//         return;
//     }
//     void pop(){
//         if(isEmpty()){
//             cout<<"Underflow\n";
//         }
//         cout<<A[top_idx]<<"\n";
//         top_idx--;
//     }
//     void peek(){
//         if(isEmpty()){
//             cout<<"Underflow\n";
//         }
//         cout<<A[top_idx]<<"\n";
//     }
//     bool isEmpty(){
//         return top_idx==-1;
//     }
//     int size(){
//         return top_idx+1;
//     }
//     bool isFull(){
//         return top_idx==capacity-1;
//     }
//     void display(){
//         while(!isEmpty()){
//             pop();
//         }
//     }
// };
// int main(){
//     Stack s(2); 
//     s.push(3);
//     s.push(9);
//     cout<<s.isEmpty();
//     cout<<s.size();
//     cout<<s.isFull();
//     s.display();
// }

//  Q2. Given a string,  reverse it using STACK. For example  “DataStructure” should be output as “erutcurtSataD.
// int main(){
//     string s="DataStructure",ans="";
//     stack<char> rev;
//     for(int i=0;i<s.length();i++){
//         rev.push(s[i]);
//     }
//     for(int i=0;i<s.length();i++){
//         ans+=rev.top();
//         rev.pop();
//     }
//     cout<<ans;
// }

//  Q3. Write a program that checks if an expression has balanced parentheses.
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
//     return S.empty()? true:false;
// }
// int main(){
//     string s="[";
//     cout<<isbalanced(s);
// }

//  Q4. Write a program to convert an Infix expression into a Postfix expression.  
// int  precedence(char c){
//     if(c=='^'){
//         return 3;
//     }
//     if(c=='*' || c=='/'){
//         return 2;
//     }
//     if(c=='+' || c=='-'){
//         return 1;
//     }
//     else{
//         return -1;
//     }
// }
// void intopost(string s){
//     stack<char> S;
//     string ans="";
//     for(int i=0;i<s.length();i++){
//         char c=s[i];
//         if((c>='A' && c<='Z') || (c>='a' && c<='z') || (c>='0' && c<='9')){
//             ans+=c;
//         }
//         else if(c=='('){
//             S.push('(');
//         }
//         else if(c==')'){
//             while(S.top()!='('){
//                 ans+=S.top();
//                 S.pop();
//             }
//             S.pop();
//         }
//         else{
//             while(!S.empty() && precedence(s[i])<=precedence(S.top())){
//                 ans+=S.top();
//                 S.pop();
//             }
//             S.push(c);
//         }
//     }
//     while(!S.empty()){
//         ans+=S.top();
//         S.pop();
//     }
//     cout<<ans;
// }
// int main(){
//     string s="A+(B-C)/D^(E+F)*G/H";
//     intopost(s);
// }

//  Q5. Write a program for the evaluation of a Postfix expression.
// int calc(string s){
//     stack<int> S;
//     for(int i=0;i<s.length();i++){
//         char c=s[i];
//         if(c<='9' && c>='1'){
//             int j=i;
//             int n=c-'0';
//             S.push(n);
//         }
//         else{
//             if(!S.empty()){
//                 int b=S.top();
//                 S.pop();
//                 int a=S.top();
//                 S.pop();          
//                 switch(c){
//                     case '+':
//                     S.push(a+b);
//                     break;
//                     case '-':
//                     S.push(a-b);
//                     break;
//                     case '/':
//                     S.push(a/b);
//                     break;
//                     case '*':
//                     S.push(a*b);
//                     break;
//                     case '^':
//                     S.push(a^b);
//                     break;
//                 }
//             }
//         }
//     }
//     return S.top();
// }
// int main(){
//     string s="231*+9-";
//     cout<<calc(s);
// }

//  Infix expression into a PREFIX expression.  
// int  precedence(char c){
//     if(c=='^'){
//         return 3;
//     }
//     if(c=='*' || c=='/'){
//         return 2;
//     }
//     if(c=='+' || c=='-'){
//         return 1;
//     }
//     else{
//         return -1;
//     }
// }
// void intopost(string s){
//     stack<char> S;
//     string ans="";
//     for(int i=0;i<s.length();i++){
//         char c=s[i];
//         if((c>='A' && c<='Z') || (c>='a' && c<='z') || (c>='0' && c<='9')){
//             ans+=c;
//         }
//         else if(c=='('){
//             S.push('(');
//         }
//         else if(c==')'){
//             while(S.top()!='('){
//                 ans+=S.top();
//                 S.pop();
//             }
//             S.pop();
//         }
//         else{
//             while(!S.empty() && precedence(s[i])<=precedence(S.top())){
//                 ans+=S.top();
//                 S.pop();
//             }
//             S.push(c);
//         }
//     }
//     while(!S.empty()){
//         ans+=S.top();
//         S.pop();
//     }
//     reverse(ans.begin(),ans.end());
//     cout<<ans;
// }
// int main(){
//     string s="(40+8)*(6-5)/((3-2)*(2+2))";
//     reverse(s.begin(),s.end());
//     for(int i=0;i<s.length();i++){
//         if(s[i]=='('){
//             s[i]=')';
//         }
//         else if(s[i]==')'){
//             s[i]='(';
//         }
//     }
//     intopost(s);
// }

//  Postfix to Infix Conversion
// void post_to_in(string s){
//     stack<string> S;
//     string ans="";
//     for(int i=0;i<s.length();i++){
//         char c=s[i];
//         if((c>='A' && c<='Z') || (c>='a' && c<='z') || (c>='0' && c<='9')){
//             ans=c;
//             S.push(ans);
//         }
//         else{
//             if(!S.empty()){
//                 string b=S.top();
//                 S.pop();
//                 string a=S.top();
//                 S.pop();          
//                 switch(c){
//                     case '+':
//                     S.push("( "+a+" + "+b+" )");
//                     break;
//                     case '-':
//                     S.push("( "+a+" - "+b+" )");
//                     break;
//                     case '/':
//                     S.push("( "+a+" / "+b+" )");
//                     break;
//                     case '*':
//                     S.push("( "+a+" * "+b+" )");
//                     break;
//                     case '^':
//                     S.push("( "+a+" ^ "+b+" )");
//                     break;
//                 }
//             }
//         }
//     }
//     cout<<S.top();
// }
//
// int main(){
//     string s="abc-+de-fg-h+/*";
//     post_to_in(s);
// }

//  Prefix to Infix Conversion
// void pre_to_in(string s){
//     stack<string> S;
//     string ans="";
//     for(int i=0;i<s.length();i++){
//         char c=s[i];
//         if((c>='A' && c<='Z') || (c>='a' && c<='z') || (c>='0' && c<='9')){
//             ans=c;
//             S.push(ans);
//         }
//         else{
//             if(!S.empty()){
//                 string b=S.top();
//                 S.pop();
//                 string a=S.top();
//                 S.pop();          
//                 switch(c){
//                     case '+':
//                     S.push("( "+b+" + "+a+" )");
//                     break;
//                     case '-':
//                     S.push("( "+b+" - "+a+" )");
//                     break;
//                     case '/':
//                     S.push("( "+b+" / "+a+" )");
//                     break;
//                     case '*':
//                     S.push("( "+b+" * "+a+" )");
//                     break;
//                     case '^':
//                     S.push("( "+b+" ^ "+a+" )");
//                     break;
//                 }
//             }
//         }
//     }
//     cout<<S.top();
// }
//
// int main(){
//     string s="*+a-bc/-de+-fgh";
//     reverse(s.begin(),s.end());
//     cout<<s;
//     pre_to_in(s);
// }

//Stacks using Linked lists
class Node{
    public:
    int val;
    Node* next;
    Node(int x){
        val=x;
        next=NULL;
    }
};

class Stack{
    int max,current;
    Node* head;
    public:
    Stack(int c){
    head=NULL;
    max=c;
    current=0;
    }

    bool isFull(){
        return current==max;
    }
    
    bool isEmpty(){
        return head==NULL;
    }

    void pop(){
        if(isEmpty()){
            cout<<"Underflow"<<endl;
        }
        else{
            head=head->next;
            current--;
        }
    }

    int top(){
        if(isEmpty()){
            cout<<"No Element";
        }
        else{
            cout<<head->val<<endl;
        }
    }

    void push(int x){
        if(isFull()){
            cout<<"Overflow"<<endl;
        }
        else{
            Node* nn=new Node(x);
            nn->next=head;
            head=nn;
            current++;
        }
    }

    void display(){
        while(head!=NULL){
            top();
            pop();
        }
    }

    int size(){
        return current;
    }
};

int main(){
    Stack s(2);
    //cout<<s.isEmpty()<<endl;
    s.push(1);
    s.push(4);
    s.push(6);
    s.display();
    s.push(7);
    s.push(7);
    s.push(8);
    // s.top();
    // s.pop();
    // s.top();
}
