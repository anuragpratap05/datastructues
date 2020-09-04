# datastructues
#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* left;
    Node* right;
};

Node* getnewnode(int x){
    Node* newnode=new Node();
    newnode->data=x;
    newnode->left=NULL;
    newnode->right=NULL;
    return newnode;
}

Node* insert(Node* root,int data)
{
    if(root==NULL){
        root=getnewnode(data);
    }
    else if(data<=root->data){
        root->left=insert(root->left,data);
    }
    else{
        root->right=insert(root->right,data);
    }
    return root;
}

void search(Node* root,int data)
{
    if(root==NULL)
    {
        cout<<"not found";
        //break;
    }
    else if(root->data==data)
    {
        cout<<"found";
    }
    else if(data<=root->data)
    {
        return search(root->left,data);
    }
    else
    {
        return search(root->right,data);
    }
}

void oddNode(Node* root) 
{ 
    if (root != NULL) { 
        oddNode(root->left); 
  
        // if node is odd then print it 
        //if (root->key % 2 != 0) 
        printf("%d ", root->data); 
  
        oddNode(root->right); 
    } 
} 


int main()
{
    Node* a=NULL;
    a=insert(a,15);
    a=insert(a,10);
    a=insert(a,8);
    a=insert(a,20);
    a=insert(a,25);
    a=insert(a,12);
    int number;
    cin>>number;
    search(a,number);
    oddNode(a);
    
}
