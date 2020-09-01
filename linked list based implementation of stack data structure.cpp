# datastructues
#include<iostream>
using namespace std;
struct Node{
    int data;
    struct Node* next;
};

 struct Node* top;
 void push(int x)
 {
     Node* temp=new Node();
     temp->data=x;
     temp->next=top;
     top=temp;
     
 }
 
 void pop()
 {
     Node* temp1;
     if(top==NULL) return;
     temp1=top;
     top=top->next;
     //temp1->next=NULL;
     delete temp1;
     
 }
 
 void print()
 {
     Node* temp3=top;
     while(temp3!=NULL)
     {
         cout<<temp3->data;
         temp3=temp3->next;
     }
     cout<<endl;
 }
 
 int main()
 {
     top=NULL;
     push(3);print();
     push(2);print();
     push(9);print();
     push(10);print();
     pop();print();
     push(1);print();
 }
 
 
 
 
 
 
