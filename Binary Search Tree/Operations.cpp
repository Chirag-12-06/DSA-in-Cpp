#include<iostream>
#include<queue>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int d){
        data=d;
        left=NULL;
        right=NULL;
    }
};

Node* BSTree(Node* root,int d){
    if(!root){
        root=new Node(d);
        return root;
    }
    else{
        if(d>root->data){
            root->right=BSTree(root->right,d);
        }
        else{
            root->left=BSTree(root->left,d);
        }
    }
    return root;
}

void takeinput(Node* &root){
    int d; cin>>d;
    while(d!=-1){
        root=BSTree(root,d);
        cin>>d;
    }
}

//Insertion
// void Insert_tree(Node* &root,int d){
//     if(!root){
//         root=new Node(d);
//     }
//     else if(d>root->data){
//         Insert_tree(root->right,d);
//     }
//     else{
//         Insert_tree(root->left,d);
//     }
// }
// int main(){
//     Node* root=NULL;
//     takeinput(root);
//     // 10 4 7 2 9 -1
//     Inorder(root);
//     int a;
//     cout<<"Enter the no be added: "; cin>>a;
//     Insert_tree(root,a);
// }

//Searching
// bool Search(Node* root,int d){
//     if(!root){
//         return false;
//     }
//     else if(root->data==d){
//         return true;
//     }
//     else if(d>root->data){
//         Search(root->right,d);
//     }
//     else{
//         Search(root->left,d);
//     }
// }
// int main(){
//     Node* root=NULL;
//     takeinput(root);
//     //10 4 7 2 9 -1
//     Inorder(root);
//     cout<<endl;
//     int a;
//     cout<<"Enter the no to be searched: "; cin>>a;
//     if(Search(root,a)){
//         cout<<"Yes"<<endl;
//     }
//     else{
//         cout<<"No"<<endl;
//     }
// }

//Minimum value
// int Find_min(Node* root){
//     if(!root){
//         return -1;
//     }
//     if(!root->left){
//         return root->data;
//     }
//     Find_min(root->left);
// }
// int main(){
//     Node* root=NULL;
//     takeinput(root);
//     //10 4 7 2 9 -1
//     Inorder(root);
//     cout<<endl;
//     cout<<Find_min(root)<<endl;    
// }

//Maximum Value
// int Find_max(Node* root){
//     if(!root){
//         return -1;
//     }
//     if(!root->right){
//         return root->data;
//     }
//     Find_max(root->right);
// }
// int main(){
//     Node* root=NULL;
//     takeinput(root);
//     //10 4 7 2 9 -1
//     Inorder(root);
//     cout<<endl;
//     cout<<Find_max(root)<<endl;    
// }

//Predecessor
// int Predecessor(Node* root,int d){
//     Node* temp=root;
//     int pre=-1;
//     while (temp!=NULL){
//         if(temp->data<d){
//             pre=temp->data;
//             temp=temp->right;
//         }
//         else{
//             temp=temp->left;
//         }   
//     }
//     return pre;
// }
// int main(){
//     Node* root=NULL;
//     takeinput(root);
//     //10 4 7 2 9 -1
//     Inorder(root);
//     cout<<endl;
//     int a;
//     cout<<"Enter the element whose Predecessor is to be found: "; cin>>a;
//     cout<<Predecessor(root,a);   
// }

//Successor
// int Successor(Node* root,int d){
//     Node* temp=root;
//     int pre=-1;
//     while (temp!=NULL){
//         if(temp->data>d){
//             pre=temp->data;
//             temp=temp->left;
//         }
//         else{
//             temp=temp->right;
//         }   
//     }
//     return pre;
// }
// int main(){
//     Node* root=NULL;
//     takeinput(root);
//     //10 4 7 2 9 -1
//     Inorder(root);
//     cout<<endl;
//     int a;
//     cout<<"Enter the element whose Successor is to be found: "; cin>>a;
//     cout<<Successor(root,a);   
// }

//Deletion
// Node* Find_min(Node* root){
//     if(!root){
//         return NULL;
//     }
//     if(!root->left){
//         return root;
//     }
//     Find_min(root->left);
// }
// Node* Delete_tree(Node* root,int d){
//     if(!root){
//         return NULL;
//     }
//     if(root->data==d){
//         //0 child
//         if(!root->left && !root->right){
//             delete root;
//             return NULL;
//         }
//         //1 Child
//         if(!root->left && root->right){
//             Node* temp=root->right;
//             delete root;
//             return temp;
//         }
//         if(root->left && !root->right){
//             Node* temp=root->left;
//             delete root;
//             return temp;
//         }
//         //2 Child
//         if(root->left && root->right){
//             int min=Find_min(root->right)->data;
//             root->data=min;
//             root->right=Delete_tree(root->right,min);
//             return root;
//         }
//     }
//     else if (root->data>d){
//         root->left=Delete_tree(root->left,d);
//     }
//     else{
//         root->right=Delete_tree(root->right,d);
//     }  
// }
// int main(){
//     Node* root=NULL;
//     takeinput(root);
//     // 10 4 7 2 9 -1
//     Inorder(root);
//     cout<<endl;
//     int a;
//     cout<<"Enter the no be deleted: "; cin>>a;
//     root=Delete_tree(root,a);
//     Inorder(root);
// }

