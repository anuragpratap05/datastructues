# datastructues
#include<iostream>
using namespace std;
int top=-1;
int A[101];
void push(int x)
{
    if(top==100)
    {
        cout<<"stack overflow";
        return;
    }
    A[++top]=x;
}

void pop()
{
    if(top==-1)
    {
        cout<<"empty stack";
        return;
    }
    top--;
}
void print()
{
    for(int i=0;i<=top;i++)
    {
        cout<<A[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    push(2);print();
    push(5);print();
    push(10);print();
    pop();print();
    push(12);print();
}
