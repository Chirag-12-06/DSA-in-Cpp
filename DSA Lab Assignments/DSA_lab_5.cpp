#include<iostream>
using namespace std;

class Node{
    public:
    int val;
    Node *next;
    Node(int x){
        val=x;
        next=NULL;
    }
};

class Linkedlist{
    public:
    Node* head=NULL;

    void insert_at_head(int value){
    Node* newh= new Node(value);
    newh->next=head;
    head=newh;
    }

    void display(){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->val<<"->";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;
    }

    void insert_at_end(int value){
        Node* newh= new Node(value);
        if(head==NULL){
            head=newh;
        }
        else{
            Node* temp=head;
            while(temp->next!=NULL){
                temp=temp->next;
            }
            temp->next=newh;
        }
    }

    void insert_at_pos(int value,int pos){
        if(pos==0){
            insert_at_head(value);
        }
        else{
            Node* newh= new Node(value);
            Node* temp=head;
            int count=0;
            while(count!=pos-1){
                temp=temp->next;
                count++;
            }
            newh->next=temp->next;
            temp->next=newh;
        }
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

    void delete_at_end(){
        Node* temp=head;
        while(temp->next->next!=NULL){
            temp=temp->next;
        }
        temp->next=NULL;
    }

    int countoccur(int key){
        int count=0;
        Node* temp=head;
        while(temp!=NULL){
            if(temp->val==key){
                count++;
            }
            temp=temp->next;
        }
        return count;
    }

    void deleteoccur(int x){
        Node* temp=head;
        if(temp->val==x){
            delete_at_head();
        }
        while(temp!=NULL && temp->next!=NULL){
            if(temp->next->val==x){
                temp->next=temp->next->next;
            }
            else{
                temp=temp->next;
            }
        }
    }

    int middle(){
        Node* fast=head;
        Node* slow=head;

        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow->val;
    }

    void reverse(){
        Node* curr=head;
        Node* temp=NULL;
        Node* prev=NULL;
        while(curr!=NULL){
            temp=curr->next;
            curr->next=prev;
            prev=curr;
            curr=temp;
        }
        head=prev;
    }

    void printrev(Node* head){
        if(head==NULL){
            return;
        }
        printrev(head->next);
        cout<<head->val<<"->";
    }


};

//  Q2. Write a program to count the number of occurrences of a given key in a singly linked list and then delete all the occurrences. For example, if given linked list is 1->2->1- >2->1->3->1 and given key is 1, then output should be 4. After deletion of all the occurrences of 1, the linked list is 2->2->3.
// int main(){
//     Linkedlist ll;
//     ll.insert_at_head(2);
//     ll.insert_at_head(1);
//     ll.insert_at_head(2);
//     ll.insert_at_head(1);
//     ll.insert_at_head(2);
//     cout<<ll.countoccur(2)<<endl;
//     ll.deleteoccur(2);
//     ll.display();
// }

//  Q3. Write a program to find the middle of a linked list. Input:1->2->3->4->5 Output-  3
// int main(){
//     Linkedlist ll;
//     for(int i=1;i<7;i++){
//         ll.insert_at_end(i);
//     }
//     ll.display();
//     cout<<ll.middle();
// }

//  Q4. Write a program to reverse a linked list.
// int main(){
//     Linkedlist ll;
//     for(int i=1;i<5;i++){
//         ll.insert_at_end(i);
//     }
//     // ll.display();
//     // ll.reverse();
//     // ll.display();
//     ll.printrev(ll.head);
// }

//  Merge 2 sorted linked lists

Node* merges(Node* head1,Node* head2){
    Node* temp1=head1;
    Node* temp2=head2;
    Node* nn=new Node(-1);
    Node* temp3=nn;
    while(temp1!=NULL && temp2!=NULL){
        if(temp1->val<temp2->val){
            temp3->next=temp1;
            temp1=temp1->next;
        }
        else{
            temp3->next=temp2;
            temp2=temp2->next;
        }
        temp3=temp3->next;
    }
    if(temp1!=NULL){
        temp3->next=temp1;
    }
    else if(temp2!=NULL){
        temp3->next=temp2;
    }
    return nn->next;
}

int main(){
    Linkedlist l1,l2,l3;
    l1.insert_at_head(1);
    l1.insert_at_end(3);
    l1.insert_at_end(5);
    l1.insert_at_end(6);
    l2.insert_at_head(2);
    l2.insert_at_end(4);
    l2.insert_at_end(7);
    l2.insert_at_end(8);
    l1.display();
    l2.display();

    l3.head=merges(l1.head,l2.head);
    l3.display();
}