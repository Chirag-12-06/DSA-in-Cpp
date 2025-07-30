#include<iostream>
#include<vector>
using namespace std;

// int main(){
//     // int App,b;
//     // cout<<"Enter the first amount: ";cin>>App;
//     // cout<<"Enter the second amount: ";cin>>b;
//     // cout<<"The total sum is "<<App + b;
//     // int a,b;
//     // cout<<"Enter value for a: "; cin >>a;
//     // cout<<"Enter value for b: "; cin >>b;
//     // a = a + b;
//     // b = a - b;
//     // a = a - b;
//     // cout<<"The value of a is "<<a<<endl;
//     // cout<<"The value of b is "<<b;
//     // return 0;
//     // cout<<"ewibfwj";
//     // int n[123]={9};
//     // for(int e:n){
//     //     cout<<e;
//     // }
// }


// class stack{
// public:
// int *A;
// int size;
// stack(int size){
//     this->size=size;
//     A=new int[size];
// }
// void reverseString(){
//     stack<char> s;
//     stack<char> st;
//     for(int i=0;i<s.size;i++){
//         st.push(s[i]);
//         while(!st.empty()){
//             s[i]=st.top();
//             i++;
//             st.pop();
//             st
//         }
//     }
// }
// };

// int main(){
//     stack s[5]="hello";
//     return 0;
// }


// class node{
//     public:
//     int data;
//     node* next;
    
//     node(int v){
//         data=v;
//         next=NULL;
//     }
// };
// void inserttail(node* &head, int v){
//     node* n=new node(v);
//     if(head==NULL){
//         head=n;
//         return;
//     }
    
//     node* temp=head;
//     while(temp->next!=NULL){
//         temp=temp->next;
//     }
//     temp->next=n;
// }
// node* delnext(node* temp){
//     node*temp2=temp->next;
//     temp->next=temp2->next;
//     return temp2;
// }
// void display(node* &head){
//     node* temp=head;
//     while(temp!=NULL){
//         cout<<temp->data<<"->";
//         temp=temp->next;
//     }
// }

// void insertnode(node* &head,node* nextnode){
//     if(nextnode == NULL) return;
//     if(head==NULL){
//         head=nextnode;
//         return;
//     }
//     node* temp=head;
//     while(temp!=NULL){
//         temp=temp->next;
//     }
//     temp->next=nextnode;
//     nextnode->next = NULL;
// }

// // int main(){
//     node* head1=NULL;
//     node* head2=NULL; 
//     node* head3=NULL;
//     inserttail(head1,1);
//     inserttail(head1,3);
//     inserttail(head1,4);
//     inserttail(head1,5);
//     inserttail(head1,6);
//     inserttail(head1,7);
//     inserttail(head2,2);
//     inserttail(head2,4);
//     inserttail(head2,6);
//     inserttail(head2,8);
//     node*temp1=head1;
//     node*temp2=head2;
//     while(temp1!=NULL and temp2!=NULL){
//         if(temp1->data==temp2->data and temp1==head1 and temp2==head2){
//             insertnode(head3,temp1);
//             head1=head1->next;
//             temp1=head1;
//             insertnode(head3,temp2);
//             head2=head2->next;
//             temp2=head2;
//         }
//         else if(temp1->next->data==temp2->next->data){
//             insertnode(head3,delnext(temp1));
//             insertnode(head3,delnext(temp2));      
//         }
//         else{
//             if(temp1->next->data>temp2->next->data){
//                 temp2=temp2->next;
//             }
//             else{
//                 temp1=temp1->next;
//             }
//         }
//     }
//     display(head1);
//     cout<<"\n";
//     display(head2);
//     cout<<"\n";
//     //display(head3);
// }

