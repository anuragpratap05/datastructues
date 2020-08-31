#include<iostream>
#include <bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    struct Node* next;
};

struct Node* head;
void insert(int data, int n)
{
    Node* temp1=new Node();
    temp1->data=data;
    temp1->next=NULL;
    if(n==1)
    {
        temp1->next=head;
        head=temp1;
        return;
    }
    Node* temp2=head;
    for(int i=0;i<n-2;i++)
    {
        temp2=temp2->next;
    }
    temp1->next=temp2->next;
    temp2->next=temp1;
}
void print()
{
    Node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
void del(int x)
{
    Node* temp3=head;
    if(x==1)
    {
     head=temp3->next;
     delete temp3;
     return;
    }
    for(int i=0;i<x-2;i++)
    {
        temp3=temp3->next;
    }
    Node* temp4=temp3->next;
    temp3->next=temp4->next;
    delete temp4;
}
int main()
{
    head=NULL;
    insert(2,1);
    insert(3,2);
    insert(4,1);
    insert(5,2);
    print();
    int x;
    cin>>x;
    del(x);
    cout<<endl;
    print();
}
