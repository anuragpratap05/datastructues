#include<iostream>
using namespace std;
struct Node{
    int data;
    struct Node* next;
};
Node* head;

void rev()
{
    Node *current, *agla, *prev;
    prev=NULL;
    current=head;
    while(current!=NULL)
    {
        agla=current->next;
        current->next=prev;
        prev=current;
        current=agla;
        
    }
    head=prev;
}
void print()
{
    Node* temp2=head;
    while(temp2!=NULL)
    {
        cout<<temp2->data<<" ";
        temp2=temp2->next;
    }
}

void insert(int data, int n)
{
    Node* temp=new Node();
    temp->data=data;
    temp->next=NULL;
    if(n==1)
    {
        temp->next=head;
        head=temp;
        return;
    }
    Node* temp1=head;
    for(int i=0;i<n-2;i++)
    {
       
        temp1=temp1->next;
    }
     temp->next=temp1->next;
     temp1->next=temp;
    
    
}

int main()
{
     head=NULL;
    insert(2,1);
    insert(3,2);
    insert(4,1);
    insert(5,2);
    print();
    rev();
    cout<<endl;
    print();
    
}
