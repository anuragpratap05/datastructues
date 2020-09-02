# datastructues
#include<iostream>
#include<stack>
#include<string>
using namespace std;
void reverse(char *C,int n)
{
    stack<char> S;
    for(int i=0;i<n;i++)
    {
        S.push(C[i]);
    }
     
    for(int i=0;i<n;i++)
    {
        C[i]=S.top();
        cout<<C[i];
        S.pop();
    }
}

int main()
{
  char C[51]={'h','e','l','l','o'};
  reverse(C,5);
  

    
}
