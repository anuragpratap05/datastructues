# datastructues
#include<iostream>
#include<stack>
using namespace std;
struct Node{
    int data;
    struct Node* next;
};

struct Node* head;

void insert(int x)
{
    Node* temp1=new Node();
    temp1->data=x;
    temp1->next=head;
    head=temp1;
    
}

void print()
{
    Node* temp3=head;
    while(temp3!=NULL)
    {
        cout<<temp3->data;
        temp3=temp3->next;
    }
    cout<<endl;
    
}

void reverse()
{
    if(head==NULL) return;
    stack<struct Node*> S;
    Node* temp4=head;
    while(temp4!=NULL)
    {
        S.push(temp4);
        temp4=temp4->next;
    }
    temp4=S.top();
    head=temp4;
    S.pop();
    while(!S.empty())
    {
        temp4->next=S.top();
        cout<<temp4->data;
        S.pop();
        temp4=temp4->next;
    }
    cout<<temp4->data;
    temp4->next=NULL;
}
int main()
{
    head=NULL;
    insert(1);
    insert(2);
    insert(3);
    insert(4);
    insert(5);
    print();
    reverse();
}
