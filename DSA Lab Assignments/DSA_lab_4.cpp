#include<iostream>
#include<queue>
using namespace std;

//  Q1.Develop a menu driven program demonstrating the following operations on simple Queues: enqueue(), dequeue(), isEmpty(), isFull(), display(), and peek().
//class queue{
//     int *A;
//     int front,rear,count,Size;
//     public:
//     queue(int n){
//         A= new int[n];
//         front=rear=-1;
//         count=0;
//         Size=n;
//     }
//  
//     int currsize(){
//         return count;
//     }
//
//     bool isEmpty(){
//         return count==0;
//     }
//
//     bool isFull(){
//         return count==Size;
//     }
//
//     void peek(){
//         if(isEmpty()){
//             cout<<"No element"<<endl;
//         }
//         else{
//             cout<<A[front]<<endl;
//         }
//     }
//
//     void display(){
//         while(!isEmpty()){
//             peek();
//             dequeue();
//         }
//     }
//
//     void dequeue(){
//         if(isEmpty()){
//             cout<<"Underflow"<<endl;
//         }
//         else{
//             if(front==rear){
//                 front=rear=-1;
//                 count=0;
//             }
//             else{
//                 front++;
//                 count--;
//             }
//         }
//     }
//
//     void enqueue(int x){
//         if(isFull()){
//             cout<<"Overflow"<<endl;
//         }
//         else{
//             if(rear==-1){
//                 front=0;
//             }
//             rear++;
//             A[rear]=x;
//             count++;
//         }
//     }
// };
//
// int main(){
//     queue q(3);
//     q.enqueue(1);
//     q.enqueue(9);
//     q.enqueue(6);
//     q.display();
// }
// class Node{
//     public:
//     int value;
//     Node* next;
//     Node(int c){
//         value=c;
//         next=NULL;
//     }
// };
//
// class queue{
//     int max,curr;
//     Node* front;
//     Node* rear;
//     public:
//     queue(int c){
//         front=rear=NULL;
//         max=c;
//         curr=0;
//     }
//     int size(){
//         return curr;
//     }
//
//     bool isEmpty(){
//         return rear==NULL;
//     }
//
//     bool isFull(){
//         return curr==max;
//     }
//
//     void peek(){
//         cout<<front->value<<endl;
//     }
//
//     void display(){
//         Node* temp=front;
//         while(temp!=NULL){
//             cout<<temp->value;
//             temp=temp->next;
//         }
//     }
//
//     void dequeue(){
//         if(isEmpty()){
//             cout<<"Underflow"<<endl;
//         }
//         else{
//             front=front->next;
//             curr--;
//         }
//     }
//
//     void enqueue(int c){
//         if(isFull()){
//             cout<<"Overflow"<<endl;
//         }
//         else{
//             Node* nn= new Node(c);
//             if(rear==NULL){
//                 rear=front=nn;
//                 curr++;
//                 return;
//             }
//             rear->next=nn;
//             curr++;
//         }
//     }
// };
// int main(){
//     queue q(3);
//     for(int i=0;i<4;i++){
//         q.enqueue(i);
//         cout<<q.size()<<endl;
//     }
// }

//  Q2. Develop a menu driven program demonstrating the following operations on Circular Queues: enqueue(), dequeue(), isEmpty(), isFull(), display(), and peek().
// class queue{
//     int *A;
//     int front,rear,count,Size;
//     public:
//     queue(int n){
//         A= new int[n];
//         front=rear=-1;
//         count=0;
//         Size=n;
//     }
 
//     int currsize(){
//         return count;
//     }

//     bool isEmpty(){
//         return count==0;
//     }

//     bool isFull(){
//         return count==Size;
//     }

//     void peek(){
//         if(isEmpty()){
//             cout<<"No element"<<endl;
//         }
//         else{
//             cout<<A[front]<<endl;
//         }
//     }

//     void display(){
//         while(!isEmpty()){
//             peek();
//             dequeue();
//         }
//     }

//     void dequeue(){
//         if(isEmpty()){
//             cout<<"Underflow"<<endl;
//         }
//         else{
//             if(front==rear){
//                 front=rear=-1;
//                 count=0;
//             }
//             else{
//                 (front++)%Size;
//                 count--;
//             }
//         }
//     }

//     void enqueue(int x){
//         if(isFull()){
//             cout<<"Overflow"<<endl;
//         }
//         else{
//             if(rear==-1){
//                 front=0;
//             }
//             (rear++)%Size;
//             A[rear]=x;
//             count++;
//         }
//     }
// };
//
// int main(){
//     queue q(3);
//     q.enqueue(1);
//     q.enqueue(9);
//     q.enqueue(6);
//     cout<<q.isFull()<<endl;
//     q.dequeue();
//     q.enqueue(7);
//     q.enqueue(8);
//     q.display();
// }

// class Node{
//     public:
//     int value;
//     Node* next;
//     Node(int c){
//         value=c;
//         next=NULL;
//     }
// };

// class queue{
//     int max,curr;
//     Node* front;
//     Node* rear;
//     public:
//     queue(int c){
//         front=rear=NULL;
//         max=c;
//         curr=0;
//     }
//     int size(){
//         return curr;
//     }

//     bool isEmpty(){
//         return front==NULL;
//     }

//     bool isFull(){
//         return curr==max;
//     }

//     void peek(){
//         cout<<front->value<<endl;
//     }

//     void display(){
//         Node* temp=front;
//         while(temp!=NULL){
//             cout<<temp->value;
//             temp=temp->next;
//         }
//     }

//     void dequeue(){
//         if(isEmpty()){
//             cout<<"Underflow"<<endl;
//         }
//         else{
//             front=front->next;
//             curr--;
//         }
//     }

//     void enqueue(int c){
//         if(isFull()){
//             cout<<"Overflow"<<endl;
//         }
//         else{
//             Node* nn= new Node(c);
//             if(rear==NULL){
//                 front=rear=nn;
//                 curr++;
//                 return;
//             }
//             rear->next=nn;
//             curr++;
//         }
//     }
// };

// int main(){
//     queue q(3);
//     for(int i=0;i<4;i++){
//         q.enqueue(i);
//         cout<<q.size()<<endl;
//     }
// }

//  Q3. Write a program interleave the first half of the queue with second half (Consider only even length strings).
// int main(){
//     queue<int> q1,q2,q3;
//     q1.push(4);
//     q1.push(7);
//     q1.push(11);
//     q1.push(20);
//     q1.push(5);
//     q1.push(9);
//     int n=q1.size();
//     for(int i=0;i<n/2;i++){
//         q2.push(q1.front());
//         q1.pop();
//     }
//     for(int i=0;i<n/2;i++){
//         q3.push(q2.front());
//         q2.pop();
//         q3.push(q1.front());
//         q1.pop(); 
//     }
//     while(!q3.empty()){
//         cout<<q3.front()<<endl;
//         q3.pop();
//     }
// }

//  Q4. Write a program to find first non-repeating character in a string using Queue (Assume the string contains only lowercase letters).
int main(){
    queue<char> q;
    string s="abcab",ans="";
    char A[26]={0};
    for(int i=0;i<s.length();i++){
        if(A[s[i]-'a']==0){
            q.push(s[i]);
            A[s[i]-'a']++;
            ans+=q.front();
        }
        else{
            q.pop();
            if(q.empty()){
                ans+="-1";
            }
            else{
                ans+=q.front();
            }
        }
    }
    cout<<ans;
}

