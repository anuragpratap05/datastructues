# datastructues
#include<iostream>
#include<queue>
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

int minvalue(node* root)
{
    //cout<<"minvaluw wala root"<<root<<endl;
    if(root==NULL){
        return -1;
    }
    else if(root->left==NULL){
    return root->data;
    }
    return minvalue(root->left);
}

int findheight(node* root)
{
    if (root==NULL)

    {
        return -1;
    }
    return max(findheight(root->left),findheight(root->right))+1;
}

void levelorder(node* root)
{
    if(root==NULL)
    {
        return;
    }
    queue<node* > Q;
    Q.push(root);
    while(!Q.empty())
    {
        node* current=Q.front();
        cout<<current->data<<" ";
        if(current->left!=NULL) Q.push(current->left);
        if(current->right!=NULL) Q.push(current->right);
        Q.pop();
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
 int t=minvalue(a);
 cout<<t<<endl;
 cout<<findheight(a)<<endl;
 levelorder(a);
 
}
