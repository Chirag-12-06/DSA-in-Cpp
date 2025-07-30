 rev_rec(Node* &head){
    if(head==NULL || head->next==NULL){
        return head;
    }
    Node* nn=rev_rec(head->next);
    head->next->next=head;
    head->next=NULL;
    return nn;
}
int main(){
    LinkedList ll;
    for(int i=1;i<5;i++){
        ll.insert_at_tail(i);
    }
    ll.head=rev_rec(ll.head);
    ll.display();
}