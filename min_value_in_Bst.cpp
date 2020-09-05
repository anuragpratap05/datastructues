# datastructues
#include<iostream>
using namespace std;
struct node{
    int data;
    node* left;
    node* right;
};

node* getnewnode(int x)
{
  node* newnode=new node();
  newnode->data=x;
  newnode->left=newnode->right=NULL;
  return newnode;
}

node* insert(node* root,int data)
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

void minvalue(node* root)
{
    //cout<<"minvaluw wala root"<<root<<endl;
    if(root==NULL){
        cout<<"empty tree";
    }
    else{
    while(root->left!=NULL)
    {
        root=root->left;
    }
    cout<<root->data;
    }
}


int main()
{
 node* a=NULL;
 a=insert(a,10);
 //cout<<a<<endl;
 a=insert(a,15);
 //cout<<a;
 a=insert(a,20);
 a=insert(a,8);
 a=insert(a,6);
 minvalue(a);
}
