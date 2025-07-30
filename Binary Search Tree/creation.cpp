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

//Traversal
void LevelOrderTraversalP(Node* root){
    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        Node* temp=q.front();
        q.pop();

        if(!temp){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout<<temp->data<<" ";
            if(temp->left){
                q.push(temp->left);
            }      
            if(temp->right){
                q.push(temp->right);
            }
        }
    }
}

void Inorder(Node* root){
    if(root==NULL){
        return;
    }
    Inorder(root->left);
    cout<<root->data<<" ";
    Inorder(root->right);
}

void Preorder(Node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    Preorder(root->left);
    Preorder(root->right);
    
}

void Postorder(Node* root){
    if(root==NULL){
        return;
    }
    Postorder(root->left);
    Postorder(root->right);
    cout<<root->data<<" ";    
}

int main(){
    Node* root=NULL;
    cout<<"Enter the value for BSTree: ";
    // 10 4 7 2 9 -1
    takeinput(root);
    LevelOrderTraversalP(root);
    Inorder(root);
    Preorder(root);
    Postorder(root);
}

