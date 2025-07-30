#include<iostream>
#include<vector>
#include<limits>
#include<algorithm>
using namespace std;

class Node{
    public:
    int val;
    Node* next;
    Node* prev;

    Node(int data){
        val=data;
        next=prev=NULL;
    }
};

class Doubly_linked_list{
    public:
    Node* head;
    Node* tail;

    Doubly_linked_list(){
        head=NULL;
        tail=NULL;
    }

    void insert_at_head(int data){
        Node* nn=new Node(data);
        if(!head){
            head=nn;
            tail=nn;
            return;
        }
        nn->next=head;
        head->prev=nn;
        head=nn;
    }

    void display(){
        Node* temp=head;
        while(temp){
            cout<<temp->val<<"<->";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;
    }

    void insert_at_end(int data){
        Node* nn=new Node(data);
        if(!head){
            head=nn;
            tail=nn;
            return;
        }
        nn->next=NULL;
        tail->next=nn;
        nn->prev=tail;
        tail=nn;
    }

    void insert_at_any(int data,int k){
        Node* nn=new Node(data);
        if(!head){
            head=nn;
            tail=nn;
            return;
        }
        if(k==1){
            insert_at_head(data);
            return;
        }
        Node* temp=head;
        int count=2;
        while(count!=k){
            temp=temp->next;
            count++;
        }
        if(temp->next==NULL){
            insert_at_end(data);
            return;
        }
        nn->next=temp->next;
        temp->next->prev=nn;
        temp->next=nn;
        nn->prev=temp;
    }

    void display_rev(){
        Node* temp=tail;
        while(temp){
            cout<<temp->val<<"<->";
            temp=temp->prev;
        }
        cout<<"NULL"<<endl;
    }

    void delete_at_head(){
        if(!head){
            cout<<"EMPTY"<<endl;
            return;
        }
        head=head->next;
        if(!head){
            tail=NULL;
        }
        else{
            head->prev=NULL;
        }
    }

    void delete_at_end(){
        if(!head){
            cout<<"EMPTY"<<endl;
            return;
        }
        tail=tail->prev;
        if(!tail){
            head=NULL;
        }
        else{
            tail->next=NULL;
        }
    }

    void delete_at_any(int k){
        if(!head){
            cout<<"EMPTY"<<endl;
            return;
        }
        if(k==1){
            delete_at_head();
        }
        Node* temp=head;
        int count=1;
        while(!(count>=k)){
            temp=temp->next;
            count++;
        }
        if(temp->next==NULL){
            delete_at_end();
            return;
        }
        temp->next->prev=temp->prev;
        temp->prev->next=temp->next;
    }
};

// int main(){
//     Doubly_linked_list dll;
//     dll.insert_at_head(7);
//     dll.insert_at_head(3);
//     dll.insert_at_end(4);
//     dll.insert_at_end(0);
//     dll.insert_at_any(6,1);
//     dll.insert_at_any(2,2);
//     dll.display();
//     dll.delete_at_head();
//     dll.delete_at_any(3);
//     dll.reverse();
//     dll.display();
// }

//Reverse a Doubly Linked List
// void reverse(Node* &head,Node* &tail){
//     Node* current=head;
//     while(current){
//         Node* nextptr=current->next;
//         current->next=current->prev;
//         current->prev=nextptr;
//         current=nextptr;
//     }
//     swap(head,tail);
// }
// int main(){
//     Doubly_linked_list dll;
//     for(int i=1;i<6;i++){
//         dll.insert_at_end(i);
//     }
//     dll.display();
//     reverse(dll.head,dll.tail);
//     dll.display();
// }

//Find if its a palindrome or not
// bool ispalindrome(Node* head,Node* tail){
//     Node* temp1=head;
//     Node* temp2=tail;
//     while(temp1!=temp2 && temp2!=temp1->prev){
//         if(temp1->val!=temp2->val){
//             return false;
//         }
//         temp1=temp1->next;
//         temp2=temp2->prev;
//     }
//     return true;
// }
// int main(){
//     Doubly_linked_list dll;
//     dll.insert_at_end(1);
//     dll.insert_at_end(2);
//     dll.insert_at_end(3);
//     dll.insert_at_end(6);
//     dll.insert_at_end(2);
//     dll.insert_at_end(1);
//     cout<<ispalindrome(dll.head,dll.tail)<<endl;
// }

//Delete the nodes whose neighbors have the same value. Traverse the list from right to left.
// void del(Node* &head,Node* &tail){
//     Node* current=tail->prev;
//     Node* previousn=current->prev;
//     Node* nextn=tail;
//     while(previousn){
//         if(previousn->val==nextn->val){
//             previousn->next=current->next;
//             nextn->prev=current->prev;
//         }
//         current=current->prev;
//         previousn=current->prev;
//         nextn=current->next;
//     }
// }
// int main(){
//     Doubly_linked_list dll;
//     dll.insert_at_end(6);
//     dll.insert_at_end(1);
//     dll.insert_at_end(1);
//     dll.insert_at_end(2);
//     dll.insert_at_end(1);
//     dll.display();
//     del(dll.head,dll.tail);
//     dll.display();
//     dll.display_rev();
// }

//Return an array of length 2 containing [minDistance,maxDistance]
// bool isCritical(Node* current){
//     if(current->prev->val>current->val && current->next->val>current->val){
//         return true;
//     }
//     if(current->prev->val<current->val && current->next->val<current->val){
//         return true;
//     }
//     return false;
// }
//  vector<int> min_max_dis(Node* head,Node* tail){
//     vector<int> ans(2,INT8_MAX);
//     int fcp=-1,lcp=-1;
//     Node* current=tail->prev;
//     if(!current){
//         ans[0]=ans[1]=-1;
//         return ans;
//     }
//     int pos=0;
//     while(current->prev!=NULL){
//         if(isCritical(current)){
//             if(fcp==-1){
//                 fcp=lcp=pos;
//             }
//             else{
//                 ans[0]=min(ans[0],pos-lcp);
//                 ans[1]=pos-fcp;
//                 lcp=pos;
//             }
//         }
//         pos++;
//         current=current->prev;
//     }
//     if(ans[0]==INT8_MAX){
//         ans[0]=ans[1]=-1;
//     }
//     return ans;
// }
// int main(){
//     Doubly_linked_list dll;
//     dll.insert_at_end(1);
//     dll.insert_at_end(7);
//     dll.insert_at_end(4);
//     dll.insert_at_end(3);
//     dll.insert_at_end(9);
//     dll.insert_at_end(5);
//     vector<int> dis=min_max_dis(dll.head,dll.tail);
//     cout<<dis[0]<<" "<<dis[1]<<endl;
// }

//Find if there exists a pair of distinct nodes such that the sum of their values is x
// vector<int> possible(Node* head,Node* tail,int sum){
//     vector<int> show(2,-1);
//     while(head!=tail){
//         if(head->val+tail->val==sum){
//             show[0]=head->val;
//             show[1]=tail->val;
//             return show;
//         }
//         if(head->val+tail->val<sum){
//             head=head->next;
//         }
//         else{
//             tail=tail->prev;
//         }
//     }
//     return show;
// }
// int main(){
//     Doubly_linked_list dll;
//     for(int i=1;i<6;i++){
//         dll.insert_at_end(i);
//     }
//     vector<int> ans=possible(dll.head,dll.tail,1);
//     dll.display();
//     cout<<ans[0]<<" "<<ans[1]<<endl;
// }



