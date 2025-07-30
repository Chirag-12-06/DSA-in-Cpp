#include<iostream>
using namespace std;

class Node{
    public:
    int value;
    Node* next;

    Node(int x){
        value=x;
        next=NULL;
    }
};

// LINKED LIST BASIC
// int main(){
//     Node n1;
//     n1.v(1);
//     cout<<n1.value<<" "<<n1.next;
//     Node n(1);
//     cout<<n.value<<" "<<n.next;
//     Node* n= new Node(2);
//     cout<<n->value<<" "<<n->next;
//     cout<<n.value<<" "<<n.next;
// }

//INSERT NODE AT HEAD
// void insert_at_head(Node* &head,int value){
//     Node* newh= new Node(value);
//     newh->next=head;
//     head=newh;
// }
// void display(Node* head){
//     Node* temp=head;
//     while(temp!=NULL){
//         cout<<temp->value<<"->";
//         temp=temp->next;
//     }
//     cout<<"NULL"<<endl;
// }
// int main(){
//     Node* head=NULL;
//     insert_at_head(head,1);
//     display(head);
//     insert_at_head(head,2);
//     display(head);
// }

//INSERT NODE AT END
//void insert_at_head(Node* &head,int value){
//     Node* newh= new Node(value);
//     newh->next=head;
//     head=newh;
//}
// void display(Node* head){
//     Node* temp=head;
//     while(temp!=NULL){
//         cout<<temp->value<<"->";
//         temp=temp->next;
//     }
//     cout<<"NULL"<<endl;
// }
// void insert_at_end(Node* &head,int value){
//     Node* newh= new Node(value);
//     Node* temp=head;
//     while(temp->next!=NULL){
//         temp=temp->next;
//     }
//     temp->next=newh;
// }
// int main(){
//     Node* head=NULL;
//         int n; cin>>n;
//     for(int i=0;i<n;i++){
//         int val; cin>>val;
//         insert_at_head(head,val);
//     }
//     display(head);
//     int newval;
//     cout<<"Enter the value: "; cin>>newval;
//     insert_at_end(head,newval);
//     display(head);
// }

//INSERT AT AN ARBITRARY POSTITION
// void insert_at_head(Node* &head,int value){
//     Node* newh= new Node(value);
//     newh->next=head;
//     head=newh;
// }
// void display(Node* head){
//     Node* temp=head;
//     while(temp!=NULL){
//         cout<<temp->value<<"->";
//         temp=temp->next;
//     }
//     cout<<"NULL"<<endl;
// }
// void insert_at_pos(Node* &head,int value,int pos){
//     if(pos==0){
//         insert_at_head(head,value);
//     }
//     else{
//         Node* newh= new Node(value);
//         Node* temp=head;
//         int count=0;
//         while(count!=pos-1){
//             temp=temp->next;
//             count++;
//         }
//         newh->next=temp->next;
//         temp->next=newh;
//     }
// }
// int main(){
//     Node* head=NULL;
//         int n; cin>>n;
//     for(int i=0;i<n;i++){
//         int val; cin>>val;
//         insert_at_head(head,val);
//     }
//     display(head);
//     int newval,pos;
//     cout<<"Enter the value and position: "; cin>>newval>>pos;
//     insert_at_pos(head,newval,pos);
//     display(head);
// }

//UPDATE VALUE AT AN ARBITRARY POSTITION
// void insert_at_head(Node* &head,int value){
//     Node* newh= new Node(value);
//     newh->next=head;
//     head=newh;
// }
// void display(Node* head){
//     Node* temp=head;
//     while(temp!=NULL){
//         cout<<temp->value<<"->";
//         temp=temp->next;
//     }
//     cout<<"NULL"<<endl;
// }
// void update_at_pos(Node* &head,int value,int pos){
//     Node* temp=head;
//     int count=0;
//     while(count<pos){
//         temp=temp->next;
//         count++;
//     }
//     temp->value=value;
// }
// int main(){
//     Node* head=NULL;
//         int n; cin>>n;
//     for(int i=0;i<n;i++){
//         int val; cin>>val;
//         insert_at_head(head,val);
//     }
//     display(head);
//     int newval,pos;
//     cout<<"Enter the value and position: "; cin>>newval>>pos;
//     update_at_pos(head,newval,pos);
//     display(head);
// }

//DELETE NODE AT HEAD
// void insert_at_head(Node* &head,int value){
//     Node* newh= new Node(value);
//     newh->next=head;
//     head=newh;
// }
// void display(Node* head){
//     Node* temp=head;
//     while(temp!=NULL){
//         cout<<temp->value<<"->";
//         temp=temp->next;
//     }
//     cout<<"NULL"<<endl;
// }
// void delete_at_head(Node* &head){
//     head=head->next;        
// }
// int main(){
//     Node* head=NULL;
//         int n; cin>>n;
//     for(int i=0;i<n;i++){
//         int val; cin>>val;
//         insert_at_head(head,val);
//     }
//     display(head);
//     delete_at_head(head);
//     display(head);
// }

//DELETE NODE AT END
// void insert_at_head(Node* &head,int value){
//     Node* newh= new Node(value);
//     newh->next=head;
//     head=newh;
// }
// void display(Node* head){
//     Node* temp=head;
//     while(temp!=NULL){
//         cout<<temp->value<<"->";
//         temp=temp->next;
//     }
//     cout<<"NULL"<<endl;
// }
// void delete_at_pos(Node* &head){
//     Node* temp=head;
//     while(temp->next->next!=NULL){
//         temp=temp->next;
//     }
//     temp->next=NULL;
// }
// int main(){
//     Node* head=NULL;
//         int n; cin>>n;
//     for(int i=0;i<n;i++){
//         int val; cin>>val;
//         insert_at_head(head,val);
//     }
//     display(head);
//     delete_at_pos(head);
//     display(head);
// }

//DELETE NODE AT ARBITRARY POSTITION
// void insert_at_head(Node* &head,int value){
//     Node* newh= new Node(value);
//     newh->next=head;
//     head=newh;
// }
// void display(Node* head){
//     Node* temp=head;
//     while(temp!=NULL){
//         cout<<temp->value<<"->";
//         temp=temp->next;
//     }
//     cout<<"NULL"<<endl;
// }
// void delete_at_head(Node* &head){
//     head=head->next;        
// }
// void delete_at_pos(Node* &head,int pos){
//     if(pos==0){
//         delete_at_head(head);
//     }
//     else{
//         Node* temp=head;
//         int count=0;
//         while(count!=pos-1){
//             temp=temp->next;
//             count++;
//         }
//         temp->next=temp->next->next;
//     }
// }
// int main(){
//     Node* head=NULL;
//         int n; cin>>n;
//     for(int i=0;i<n;i++){
//         int val; cin>>val;
//         insert_at_head(head,val);
//     }
//     display(head);
//     cout<<"Enter the position u want to delete element: ";
//     int pos; cin>>pos;
//     delete_at_pos(head,pos);
//     display(head);
// }

