#include<iostream>
using namespace std;

class Node{
    public:
    int val;
    Node* next;
    Node(int c){
        val=c;
        next=NULL;
    }
};
class Circularll{
    int count=0;
    Node* head=NULL;

    public:
    void insert_at_head(int c){
        Node* nn=new Node(c);
        if(head==NULL){
            head=nn;
            count++;
            nn->next=head;
        }
        else{
            Node* temp=head;
            while(temp->next!=head){
                temp=temp->next;
            }
            nn->next=head;
            temp->next=nn;
            head=nn;
            count++;
        }
    }

    void search(int c){
        if(!head){
            cout<<"No element"<<endl;
            return;
        }
        Node* temp=head;
        while(temp->next!=head && temp->val!=c){
            temp=temp->next;
        }
        if(temp->val==c){
            cout<<"Found"<<endl;
        }
        else{
            cout<<"Not Found"<<endl;
        }
    }

    void display(){
        if(!head){
            cout<<"No element"<<endl;
            return;
        }
        Node* temp=head;
        while(temp->next!=head){
            cout<<temp->val<<"->";
            temp=temp->next;
        }
        cout<<temp->val<<endl;
    }

    void insert_at_end(int c){
        Node* nn=new Node(c);
        if(head==NULL){
            head=nn;
            nn->next=head;
            count++;
        }
        else{
            Node* temp=head;
            while(temp->next!=head){
                temp=temp->next;
            }
            nn->next=head;
            temp->next=nn;
            count++;
        }
    }

    void insert_after(int c,int key){
        Node* nn=new Node(c);
        if(head==NULL){
            head=nn;
            nn->next=head;
            count++;
        }
        else{
            Node* temp=head;
            while(temp->next!=head && temp->val!=key){
                temp=temp->next;
            }
            nn->next=temp->next;
            temp->next=nn;
            count++;
        }
    }

    void delete_at_end(){
        if(head==NULL){
            cout<<"No element"<<endl;
        }
        Node*temp=head;
        while(temp->next->next!=head){
            temp=temp->next;
        }
        temp->next=head;
        count--;
    }

    void delete_at_head(){
        if(head==NULL){
            cout<<"No element"<<endl;
        }
        Node*temp=head;
        while(temp->next!=head){
            temp=temp->next;
        }
        temp->next=head->next;
        head=head->next;
        count--;
    }

    void del(int c){
        if(head==NULL){
            cout<<"No element"<<endl;
        }
        if(head->val==c){
            delete_at_head();
            return;
        }
        Node*temp=head;
        while(temp->next!=head && temp->next->val!=c){
            temp=temp->next;
        }
        temp->next=temp->next->next;
        count--;
    }

    void delete_before(int c){
        if(head==NULL){
            cout<<"No element"<<endl;
        }
        if(head->next->val==c){
            delete_at_head();
            return;
        }
        Node*temp=head;
        while(temp->next!=head && temp->next->next->val!=c){
            temp=temp->next;
        }
        temp->next=temp->next->next;
        count--;
    }

    int size(){
        return count;
    }
};

int main(){
    Circularll cl;
    cl.insert_at_head(4);
    cl.insert_at_head(2);
    cl.insert_after(3,2);
    cl.insert_at_end(5);
    cl.insert_at_head(3);
    cl.insert_after(6,1);
    //cl.search(2);
    cl.display();
    cout<<cl.size();
    // cl.delete_at_end();
    // cl.delete_at_head();
    // cl.display();
    // cl.del(2);
    // cl.display();
    // cl.delete_before(3);
    // cl.display();
}