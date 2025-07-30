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

void LevelOrderTraversal(Node* root){
    queue<Node*> q;
    q.push(root);

    while(!q.empty()){
        Node* temp=q.front();
        cout<<temp->data<<" ";
        q.pop();

        if(temp->left){
            q.push(temp->left);
        }

        
        if(temp->right){
            q.push(temp->right);
        }
    }
}

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

void ReverseLevelOrderTraversalP(Node* root){
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
            if(temp->right){
                q.push(temp->right);
            }      
            if(temp->left){
                q.push(temp->left);
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

void BuildTreeLevel(Node* &root){
    int g;
    cout<<"Enter value for root: "<<endl; cin>>g;
    root= new Node(g);
    queue<Node*> q;
    q.push(root);

    while(!q.empty()){
        Node* temp=q.front();
        q.pop();

        int leftdata;
        cout<<"Enter the value for left of "<<temp->data<<endl; cin>>leftdata;
        if(leftdata!=-1){
            temp->left=new Node(leftdata);
            q.push(temp->left);
        }

        int rightdata;
        cout<<"Enter the value for right of "<<temp->data<<endl; cin>>rightdata;
        if(rightdata!=-1){
            temp->right=new Node(rightdata);
            q.push(temp->right);
        }
    }
}

int main(){
    Node* root=NULL; 
    //Build a Tree with Preorder
    root=buildTree(root);
    //1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1

    //Level Order Traversal without Pyramid
    cout<<"Level Order Traversal for the Binary Tree: ";
    LevelOrderTraversal(root);

    // Level Order Traversal with Pyramid
    // cout<<"Level Order Traversal for the Binary Tree: "<<endl;
    // LevelOrderTraversalP(root);

    //Reverse Level Order Traversal with Pyramid
    // cout<<"Reverse Level Order Traversal for the Binary Tree: "<<endl;
    // ReverseLevelOrderTraversalP(root);

    // Inorder Traversal of Binary Tree
    // Inorder(root);

    //Preorder Traversal of Binary Tree
    // Preorder(root);

    //Postorder Traversal of Binary Tree
    // Postorder(root);

    //Build a Tree with Level Order
    // BuildTreeLevel(root);
    //1 3 5 7 11 17 -1 -1 -1 -1 -1 -1 -1
    // LevelOrderTraversalP(root);
}