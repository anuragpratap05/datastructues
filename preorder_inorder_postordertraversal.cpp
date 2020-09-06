# datastructues
#include<iostream>
using namespace std;
struct node{
    char data;
    node* left;
    node* right;
    
};

node* getnewnode(char data)
{
    node* newnode=new node();
    newnode->data=data;
    newnode->left=newnode->right=NULL;
    return newnode;
}

node* insert(node* root,char data)
{
    if(root==NULL)
    {
        root=getnewnode( data);
        
    }
    else if(data<=root->data)
    {
        root->left=insert(root->left,data);
    }
    else{
        root->right=insert(root->right,data);
    }
    return root;
}

void preorder(node* root)
{
    if(root==NULL)
    {
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

void inorder(node* root)
{
    if(root==NULL)
    {
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

void postorder(node* root)
{
    if(root==NULL)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}

int main(){
    node* a=NULL;
    a=insert(a,'A');
    a=insert(a,'B');
    a=insert(a,'C');
    a=insert(a,'D');
    a=insert(a,'E');
    a=insert(a,'F');
    a=insert(a,'G');
    a=insert(a,'H');
    a=insert(a,'I');
    a=insert(a,'J');
    a=insert(a,'K');
    preorder(a);
    cout<<endl;
    inorder(a);
    cout<<endl;
    postorder(a);
   
    
}
