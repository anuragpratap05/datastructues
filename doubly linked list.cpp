 //datastructues
#include<iostream>
using namespace std;
struct Node{
    int data;
    struct Node* next;
    struct Node* prev;
};
struct Node* head;
Node* getnewnode(int x)
{
    Node* temp1=new Node();
    temp1->data=x;
    temp1->next=NULL;
    temp1->prev=NULL;
    return temp1;
}
void insert_at_head(int x)
{
    Node* temp2=getnewnode(x);
    if(head==NULL)
    {
        head=temp2;
        return;
    }
    head->prev=temp2;
    temp2->next=head;
    head=temp2;
}

void reverseprint()
{
    Node* temp=head;
    if(temp==NULL) return;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->prev;
    }
}

void print()
{
    Node* temp4=head;
    while(temp4!=NULL)
    {
        cout<<temp4->data<<" ";
        temp4=temp4->next;
    }
}


int main()
{
    head=NULL;
    insert_at_head(2);
    insert_at_head(3);
    insert_at_head(4);
    insert_at_head(5);
    print();
    cout<<endl;
    reverseprint();
}
