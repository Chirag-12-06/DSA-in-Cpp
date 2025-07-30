#include<iostream>
#include<queue>
#include<list>
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

//Validate BST
// bool is_BST(Node* root,int min,int max){
//     if(!root){
//         return true;
//     }
//     if(root->data>min && root->data<max){
//         bool l=is_BST(root->left,min,root->data);
//         bool r=is_BST(root->right,root->data,max);
//         return l && r;
//     }
//     else{
//         return false;
//     }
// }
// int main(){
//     Node* root=NULL;
//     takeinput(root);
//     cout<<is_BST(root,INT16_MIN,INT16_MAX)<<endl;
// }

//Smallest Kth node
// int smallestk(Node* root,int &i,int k){
//     if(!root){
//         return -1;
//     }
//     //L
//     int left=smallestk(root->left,i,k);
//     if(left!=-1){
//         return left;
//     }
//     //N
//     i++;
//     if(i==k){
//         return root->data;
//     }
//     //R
//     int right=smallestk(root->right,i,k);
// }
// int main(){
//     Node* root=NULL;
//     cout<<"Enter the value for BSTree: ";
//     // 10 4 7 2 9 8 6 3 -1
//     takeinput(root);
//     int i=0;
//     cout<<smallestk(root,i,1);
// }

//Largest Kth node
//Find the smallest (n-k+1)th Node

//Successor and Predecessor
// pair<int,int> ans(Node* root,int key){
//     int pred=-1,succ=-1;
//     Node* temp=root;
//     while(temp->data!=key){
//         if(temp->data>key){
//             succ=temp->data;
//             temp=temp->left;
//         }
//         else{
//             pred=temp->data;
//             temp=temp->right;
//         }
//     }
//     Node* leftTree=temp->left;
//     while(leftTree){
//         pred=leftTree->data;
//         leftTree=leftTree->right;
//     }
//     Node* rightTree=temp->right;
//     while(rightTree){
//         succ=rightTree->data;
//         rightTree=rightTree->left;
//     }
//     pair<int,int> ans=make_pair(pred,succ);
//     return ans;   
// }
// int main(){
//     Node* root=NULL;
//     cout<<"Enter the value for BSTree: ";
//     // 10 4 7 2 9 8 6 3 -1
//     takeinput(root);
//     pair<int ,int> p=ans(root,4);
//     cout<<"Predecessor: "<<p.first<<endl;
//     cout<<"Successor: "<<p.second<<endl;
// }

//Lowest Common Ancestor
// int LCA(Node* root,int s,int b){
//     Node* temp=root;
//     if(s<temp->data && b>temp->data){
//         return temp->data;
//     }
//     else if(s<temp->data && b<=temp->data){
//         LCA(temp->left,s,b);
//     }
//     else{
//         LCA(temp->right,s,b);
//     }
// }
// int main(){
//     Node* root=NULL;
//     cout<<"Enter the value for BSTree: ";
//     // 10 4 7 2 9 8 6 3 -1
//     takeinput(root);
//    cout<<"Lowest Common Ancestor: "<<LCA(root,2,7);
// }

//Two Sum
// void Inorder(Node* root,vector<int> &v){
//     if(!root){
//         return;
//     }
//     Inorder(root->left,v);
//     v.push_back(root->data);
//     Inorder(root->right,v);
// }
// bool two_sum(Node* root,int target){
//     vector<int> v;
//     Inorder(root,v);
//     int i=0,j=v.size()-1;
//     while(i<j){
//         if(v[i]+v[j]==target){
//             return true;
//         }
//         if(v[i]+v[j]<target){
//             i++;
//         }
//         else{
//             j--;
//         }
//     }
//     return false; 
// }
// int main(){
//     Node* root=NULL;
//     cout<<"Enter the value for BSTree: ";
//     // 10 4 7 2 9 8 6 3 -1
//     takeinput(root);
//    cout<<two_sum(root,20);
// }

//Make a sorted Linked List using BST
// void Make_LL(Node* root,list<int> &ll){
//     if(!root){
//         return;
//     }
//     Make_LL(root->left,ll);
//     ll.push_back(root->data);
//     Make_LL(root->right,ll);
// }
// int main(){
//     Node* root=NULL;
//     list<int> ll;
//     cout<<"Enter the value for BSTree: ";
//     // 10 4 7 2 9 8 6 3 -1
//     takeinput(root);
//     Make_LL(root,ll);
//     for(auto i=ll.begin();i!=ll.end();i++){
//         cout<<*i<<" ";
//     }
// }

//Make a balanced BST from a BST
// void Inorder(Node* root,vector<int> &v){
//     if(!root){
//         return;
//     }
//     Inorder(root->left,v);
//     v.push_back(root->data);
//     Inorder(root->right,v);
// }
// Node* Balanced_BST(int s,int e,vector<int> &v){
//     if(s>e){
//         return NULL;
//     }
//     int mid=(s+e)/2;
//     Node* r1=new Node(v[mid]);
//     r1->left=Balanced_BST(0,mid-1,v);
//     r1->right=Balanced_BST(mid+1,e,v);
//     return r1;
// }
// Node* Balanced_Tree(Node* &root){
//     vector<int> v;
//     Inorder(root,v);
//     return Balanced_BST(0,v.size()-1,v);
// }
// int main(){
//     Node* root=NULL;
//     cout<<"Enter the value for BSTree: ";
//     // 10 4 7 2 9 8 6 3 -1
//     takeinput(root);
//     root=Balanced_Tree(root);
//     cout<<root->left->data;
// }


