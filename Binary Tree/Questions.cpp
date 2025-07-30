#include<iostream>
#include<algorithm>
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

Node* buildTree(Node* root){
    int d;
    cout<<"Enter root value: "<<endl; cin>>d;
    root=new Node(d);

    if(d==-1){
        return NULL;
    }
    cout<<"The value to the left "<<d<<endl;
    root->left= buildTree(root->left);
    
    cout<<"The value to the right "<<d<<endl;
    root->right= buildTree(root->right);
    return root;
}

//Count No. Of Leaf Nodes
// void Postorder(Node* root,int &count){
//     if(root==NULL){
//         return;
//     }
//     Postorder(root->left,count);
//     if(!(root->left) && !(root->right)){
//         count++;
//     }
//     Postorder(root->right,count);   
// }
// int LeafNodes(Node* root){
//     int count=0;
//     Postorder(root,count);
//     return count;
// }
// int main(){
//     Node* root=NULL;
//     root=buildTree(root);
//     //1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 8 -1 -1
//     cout<<LeafNodes(root)<<endl;
// }

//Find Height Of Binary Tree
// int height(Node* root){
//     if(root==NULL){
//         return 0;
//     }
//     return max(height(root->left),height(root->right))+1;
// }
// int main(){
//     Node* root=NULL;
//     root=buildTree(root);
//     //1 3 7 9 -1 -1 -1 11 -1 -1 5 17 -1 -1 8 -1 -1
//     cout<<height(root)<<endl;
// }

//Find Diameter of Tree
// pair<int,int> Diameter(Node* root){
//     if(!root){
//         pair<int,int> p=make_pair(0,0);
//         return p;
//     }
//     pair<int,int>left=Diameter(root->left);
//     pair<int,int>right=Diameter(root->right);
//     int op1=left.first;
//     int op2=right.first;
//     int op3=left.second+right.second+1;
//     pair<int,int> ans;
//     ans.first=max(op1,max(op2,op3));
//     ans.second=max(left.second,right.second)+1;
//     return ans;
// }
// int Cal_Diameter(Node* root){
//     pair<int,int> a=Diameter(root);
//     return a.first;
// }
// int main(){
//     Node* root=NULL;
//     root=buildTree(root);
//     //1 3 7 9 -1 -1 -1 11 -1 -1 5 17 -1 -1 8 -1 -1
//     cout<<"Diameter: "<<Cal_Diameter(root)<<endl;
// }

//Check If tree is Balanced
// pair<int,bool> Balance(Node*root){
//     if(!root){
//         return make_pair(0,1);
//     }
//     pair<int,bool> left=Balance(root->left);
//     pair<int,bool> right=Balance(root->right);
//     pair<int,bool> ans;
//     ans.first=max(left.first,right.first)+1;
//     bool check=abs(left.first-right.first)<=1;
//     ans.second=left.second && right.second && check;
//     return ans;
// }
// bool is_Balanced(Node* root){
//     pair<int,bool> p=Balance(root);
//     return p.second;
// }
// int main(){
//     Node* root=NULL;
//     root=buildTree(root);
//     //1 3 7 9 -1 -1 -1 11 -1 -1 5 17 -1 -1 8 -1 -1
//     cout<<"Is Tree Balanced: ";
//     if(is_Balanced(root)){
//         cout<<"Yes"<<endl;
//     }
//     else{
//         cout<<"No"<<endl;
//     }
// }

//Check If trees are Identical
// bool Identical(Node* r1,Node* r2){
//     if(!r1 && !r2){
//         return true;
//     }   
//     if(!r1 && r2){
//         return false;
//     }
//     if(r1 && !r2){
//         return false;
//     }
//     bool left=Identical(r1->left,r2->left);
//     bool right=Identical(r1->right,r2->right);
//     bool val=r1->data==r2->data;
//     return left && right && val;
// }
// int main(){
//     Node* root1=NULL;
//     Node* root2=NULL;
//     root1=buildTree(root1);
//     root2=buildTree(root2);
//     //1 3 7 9 -1 -1 -1 11 -1 -1 5 17 -1 -1 8 -1 -1
//     if(Identical(root1,root2)){
//         cout<<"Yes"<<endl;
//     }
//     else{
//         cout<<"No"<<endl;
//     }
// }

//Check if Sum Tree
// pair<int,bool> check(Node* root){
//     if(!root){
//         return make_pair(0,true);
//     }
//     if(!root->left && !root->right){
//         return make_pair(root->data,true);
//     }
//     pair<int,bool> left=check(root->left);
//     pair<int,bool> right=check(root->right);
//     pair<int,bool> ans;
//     ans.first=left.first+right.first;
//     ans.second=left.second && right.second && root->data==left.first+right.first;
//     return ans;
// }
// bool Sum_Tree(Node* root){
//     pair<int,bool> p=check(root);
//     return p.second;
// }
// int main(){
//     Node* root=NULL;
//     root=buildTree(root);
//     //1 3 7 9 -1 -1 -1 11 -1 -1 5 17 -1 -1 8 -1 -1
//     // 3 1 -1 -1 2 -1 -1
//     if(Sum_Tree(root)){
//         cout<<"Yes"<<endl;
//     }
//     else{
//         cout<<"No"<<endl;
//     }
// }

