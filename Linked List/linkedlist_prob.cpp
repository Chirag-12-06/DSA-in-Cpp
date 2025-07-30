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

class LinkedList{
    public:
    Node* head;

    LinkedList(){
        head=NULL;
    }
    void insert_at_head(int x){
    Node* new_node=new Node(x);
    new_node->next=head;
    head=new_node;
    }

    void display(){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->value<<"->";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;
    }

    void delete_at_head(){
        head=head->next;
    }

    void delete_at_pos(int pos){
        if(pos==0){
            delete_at_head();
        }
        else{
            Node* temp=head;
            int count=0;
            while(count!=pos-1){
                temp=temp->next;
                count++;
            }
            temp->next=temp->next->next;
        }
    }

    void insert_at_tail(int x){
        Node* new_node=new Node(x);
        if(head==NULL){
            head=new_node;
            return;
        }
        Node* temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=new_node;
    }
};

//REMOVE ALL ALTERNATING ELEMENTS STARTING FROM SECOND ELEMENT
// int main(){
//     int n; cin>>n;
//     LinkedList q1;
//     for(int i=n;i>0;i--){
//        q1.insert_at_head(i);
//     }
//     q1.display();
//     cout<<endl;
//     int m=1;
//     while(m<=n/2){
//         q1.delete_at_pos(m);
//         m++;
//     }
//     q1.display();
// }

//REMOVES ALL DUPLICATES IN A SORTED LINKED LIST
// void delete_duplicates(Node* head){
//     Node* curr=head;
//     while(curr){
//         while(curr->next && curr->value==curr->next->value){
//             curr->next=curr->next->next;
//         }
//         curr=curr->next;
//     }
// }
// int main(){
//     LinkedList sl;
//     sl.insert_at_tail(1);
//     sl.insert_at_tail(2);
//     sl.insert_at_tail(2);
//     sl.insert_at_tail(3);
//     sl.insert_at_tail(3);
//     sl.insert_at_tail(3);
//     sl.display();
//     cout<<endl;
//     delete_duplicates(sl.head);
//     sl.display();
// }

//Print reversed List
// void print_rev(Node* head){
//     if(head==NULL){
//         return;
//     }
//     print_rev(head->next);
//     cout<<head->value<<" ";
//     }
// int main(){
//     LinkedList l;
//     for(int i=1;i<5;i++){
//         l.insert_at_tail(i);
//     }
//     print_rev(l.head);
// }

//Reverse a linked list(Normal)
// Node* rev(Node* &head){
//     Node* current=head;
//     Node* temp=NULL;
//     Node* prev=NULL;
//     while(current!=NULL){
//         temp=current->next;
//         current->next=prev;
//         prev=current;
//         current=temp;
//     }
//     return prev;
// }
// int main(){
//     LinkedList ll,l2;
//     for(int i=0;i<5;i++){
//         ll.insert_at_tail(i);
//     }
//     l2.head=rev(ll.head);
//     l2.display(); 
//     ll.display();
// }

//Reverse a Linked list(recussive)
// Node* rev_rec(Node* &head){
//     if(head==NULL || head->next==NULL){
//         return head;
//     }
//     Node* nn=rev_rec(head->next);
//     head->next->next=head;
//     head->next=NULL;
//     return nn;
// }
// int main(){
//     LinkedList ll;
//     for(int i=1;i<5;i++){
//         ll.insert_at_tail(i);
//     }
//     ll.head=rev_rec(ll.head);
//     ll.display();
// }

//Reverse k nodes at a time
// Node* rev_k(Node* &head, int k){
//     Node* prev=NULL;
//     Node* current=head;
//     int count=0;
//     while(current!=NULL && count<k){
//         Node* temp=current->next;
//         current->next=prev;
//         prev=current;
//         current=temp;
//         count++;
//     }
//     if(current!=NULL){
//         Node* nn=rev_k(current,k);
//         head->next=nn;
//     }    
//     return prev;
// }
// int main(){
//     LinkedList ll;
//     for(int i=1;i<7;i++){
//         ll.insert_at_tail(i);
//     }
//     ll.head=rev_k(ll.head,5);
//     ll.display();
// }

//Check if 2 Linked lists are equal
// bool check(Node* head1,Node* head2){
//     Node* temp1=head1;
//     Node* temp2=head2;
//     while(temp1!=NULL && temp2!=NULL){
//         if(temp1->value!=temp2->value){
//             return false;
//         }
//         temp1=temp1->next;
//         temp2=temp2->next;
//     }
//     return(temp1==NULL && temp2==NULL);
// }
// int main(){
//     LinkedList l1,l2;
//     for(int i=0;i<5;i++){
//         l1.insert_at_tail(i);
//         l2.insert_at_tail(i);
//     }
//     l2.insert_at_tail(0);
//     cout<<check(l1.head,l2.head)<<endl;
// }

//Find the node at which 2 linked lists intersect. If they don't, return null
// Node* inter(Node* head1,Node* head2){
//     Node* temp1=head1;
//     Node* temp2=head2;
//     int l1=0,l2=0;
//     while(temp1!=NULL){
//         temp1=temp1->next;
//         l1++;
//     }
//     while(temp2!=NULL){
//         temp2=temp2->next;
//         l2++;
//     }
//     temp1=head1;
//     temp2=head2;
//     if(l1>l2){
//         for(int i=0;i<l1-l2;i++){
//             temp1=temp1->next;
//         }
//     }
//     if(l2>l1){
//         for(int i=0;i<l2-l1;i++){
//             temp2=temp2->next;
//         }
//     }
//     while(temp1!=NULL && temp2!=NULL){
//         if(temp1==temp2){
//             return temp1;
//         }
//         temp1=temp1->next;
//         temp2=temp2->next;
//     }
//     return NULL;
// }
// int main(){
//     LinkedList l1,l2;
//     for(int i=1;i<4;i++){
//         l1.insert_at_tail(i);
//     }
//     l2.insert_at_head(4);
//     l2.insert_at_tail(7);
//     //l2.head->next->next=l1.head->next->next;
//     if(inter(l1.head,l2.head)){
//         Node* intersec=inter(l1.head,l2.head);
//         cout<<intersec->value<<endl;
//     }
//     else{
//         cout<<"-1"<<endl;
//     }
// }

//Remove the kth node from the end of the list and return its head
// void delete_from_end(Node* &head,int k){
//     Node* dupli=head;
//     Node* orig=head;
//     Node* orig_prev=NULL;
//     int i=k;  
//     while(--i){
//         dupli=dupli->next;
//     }
//     if(dupli->next==NULL){
//         head=head->next;
//         return;
//     }
//     while(dupli->next!=NULL){
//         dupli=dupli->next;
//         orig_prev=orig;
//         orig=orig->next;        
//     }
//     orig_prev->next=orig->next;
// } 
// int main(){
//     LinkedList ll;
//     for(int i=1;i<4;i++){
//         ll.insert_at_tail(i);
//     }
//     delete_from_end(ll.head,5);
//     ll.display();
// }

//Given 2 sorted linked lists, merge them into 1 singly linked list such that the resulting list is also sorted
// Node* merges(Node* &head1,Node* &head2){
//     Node* nn=new Node(-1);
//     Node* temp1=head1;
//     Node* temp2=head2;
//     Node* temp3=nn;
//     while(temp1 && temp2){
//         if(temp1->value<temp2->value){
//             temp3->next=temp1;
//             temp1=temp1->next;
//         }
//         else{
//             temp3->next=temp2;
//             temp2=temp2->next;
//         }
//         temp3=temp3->next;
//     }
//     if(temp1){
//         temp3->next=temp1;
//     }
//     if(temp2){
//         temp3->next=temp2;
//     }
//     return nn->next;
// }
// int main(){
//     LinkedList l1,l2,l3;
//     for(int i=1;i<7;i+=2){
//         l1.insert_at_tail(i);
//     }
//     for(int i=2;i<7;i+=2){
//         l2.insert_at_tail(i);
//     }
//     // l1.display();
//     // l2.display();
//     l3.head=merges(l1.head,l2.head);
//     l3.display();
// }

//Slow-fast pointer - Find the middle element of a given linked list
// int middle(Node* head){
//     Node* fast=head;
//     Node* slow=head;
//     while(fast!=NULL && fast->next!=NULL){
//         fast=fast->next->next;
//         slow=slow->next;
//     }
//     return slow->value;
// }
// int main(){
//     LinkedList ll;
//     for(int i=1;i<7;i++){
//         ll.insert_at_tail(i);
//     }
//     cout<<middle(ll.head)<<endl;
// }

//Determine if the linked list has a cycle in it
// bool cycle(Node* head){
//     if(!head){
//         return false;
//     }
//     Node* fast=head;
//     Node* slow=head;
//     while(fast!=NULL && fast->next!=NULL){
//         fast=fast->next->next;
//         slow=slow->next;
//         if(fast==slow){
//             return true;
//         }
//     }
//     return false;
// }
// int main(){
//     LinkedList ll;
//     for(int i=1;i<7;i++){
//         ll.insert_at_tail(i);
//     }
//     Node* temp=ll.head;
//     while(temp->next!=NULL){
//         temp=temp->next;
//     }
//     temp->next=ll.head->next->next->next;
//     cout<<cycle(ll.head)<<endl;
// }

//Determine if the linked list has a cycle in it.If there is a cycle remove it(Floyd's Theorem)
// bool cycle(Node* head){
//     if(!head){
//         return false;
//     }
//     Node* fast=head;
//     Node* slow=head;
//     while(fast!=NULL && fast->next!=NULL){
//         fast=fast->next->next;
//         slow=slow->next;
//         if(fast==slow){
//             return true;
//         }
//     }
//     return false;
// }
// void removecycle(Node* &head){
//     Node* fast=head;
//     Node* slow=head;
//     do{
//         slow=slow->next;
//         fast=fast->next->next;
//     } while (slow!=fast);
//     fast=head;
//     while(fast->next!=slow->next){
//         fast=fast->next;
//         slow=slow->next;
//     }
//     slow->next=NULL; 
// }
// int main(){
//     LinkedList ll;
//     for(int i=1;i<7;i++){
//         ll.insert_at_tail(i);
//     }
//     Node* temp=ll.head;
//     while(temp->next!=NULL){
//         temp=temp->next;
//     }
//     temp->next=ll.head->next->next->next;
//     if(cycle(ll.head)){
//         removecycle(ll.head);
//     }
//     cout<<cycle(ll.head)<<endl;
//     ll.display();
// }

//Determine if the linked list is a palindrome
// bool ispalindrome(Node* &head){
//     //Find middle element 
//     Node* fast=head;
//     Node* slow=head;
//     while(fast && fast->next){
//         fast=fast->next->next;
//         slow=slow->next;
//     }
//     //break the linked list into 2 parts
//     Node* current=slow->next;
//     Node* prev=slow;
//     slow->next=NULL;
//     //Reverse the 2nd linked list
//     while(current){
//         Node* temp=current->next;
//         current->next=prev;
//         prev=current;
//         current=temp;
//     }
//     //Check if 2 linked lists are equal
//     Node* head2=prev;
//     Node* head1=head;
//     while(head2){
//         if(head2->value!=head1->value){
//             return false;
//         }
//         head1=head1->next;
//         head2=head2->next;
//     }
//     return true;
// }
// int main(){
//     LinkedList ll;
//     ll.insert_at_tail(1);
//     ll.insert_at_tail(2);
//     ll.insert_at_tail(3);
//     ll.insert_at_tail(3);
//     ll.insert_at_tail(2);
//     ll.insert_at_tail(1);
//     cout<<ispalindrome(ll.head)<<endl;
// }

//Rearrange the nodes in a list, Rotate the list to right by k places
// Node* rotate(Node* &head,int k){
//     if(!head){
//         return NULL;
//     }
//     int count=0;
//     Node* temp=head;
//     while(temp){
//         temp=temp->next;
//         count++;
//     }
//     Node* dupli=head;
//     Node* orig=head;
//     for(int i=0;i<(k%count);i++){
//         dupli=dupli->next;
//     }
//     while(dupli->next){
//         dupli=dupli->next;
//         orig=orig->next;
//     }
//     dupli->next=head;
//     head=orig->next;
//     orig->next=NULL;
//     return head;
// }
// int main(){
//     LinkedList ll;
//     for(int i=1;i<7;i++){
//         ll.insert_at_tail(i);
//     }
//     ll.display();
//     ll.head=rotate(ll.head,7);
//     ll.display();
// }

//Group all the nodes with odd indices together followed by the nodes with even indices and return the reordered list
// Node* group(Node* &head){
//     if(!head){
//         return NULL;
//     }
//     Node* odd=head;
//     Node* even1=head->next;
//     Node* even=even1;
//     while(even && even->next){
//         odd->next=odd->next->next;
//         odd=odd->next;
//         even->next=even->next->next;
//         even=even->next;
//     }
//     odd->next=even1;
//     return head;
// }
// int main(){
//     LinkedList ll;
//     for(int i=1;i<8;i++){
//         ll.insert_at_tail(i);
//     }
//     ll.display();
//     ll.head=group(ll.head);
//     ll.display();
// }

//Reordering a linked list
// Node* reorder(Node* &head){
//     //Find the middle element
//     Node* fast=head;
//     Node* slow=head;
//     while(fast && fast->next){
//         fast=fast->next->next;
//         slow=slow->next;
//     }
//     //Reverse the second half
//     Node* current=slow->next;
//     Node* prev=slow;
//     slow->next=NULL;
//     while(current){
//         Node* temp=current->next;
//         current->next=prev;
//         prev=current;
//         current=temp;
//     }
//     //Merge the linked lists
//     Node* head1=head;
//     Node* head2=prev;
//     while(head2!=head1){
//         Node* temp1=head1->next;
//         head1->next=head2;
//         head1=head2; 
//         head2=temp1;
//     }
//     return head;
// }
// int main(){
//     LinkedList ll;
//     for(int i=1;i<7;i++){
//         ll.insert_at_tail(i);
//     }
//     ll.head=reorder(ll.head);
//     ll.display();
// }


