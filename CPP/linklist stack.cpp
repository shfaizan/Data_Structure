#include<iostream>
using namespace std;
struct node
{
    int data;
    node *next;
};
class stk
{
    node *top;
public:
    stk()
    {
        top=NULL;
    }
    void push(int);
    void pop();
    void disp();
};
void stk::push(int x)
{
    node *temp=new node;
    temp->data=x;
    temp->next=NULL;
    if(top==NULL)
        top=temp;
    else
    {
        temp->next=top;
        top=temp;
    }
}
void stk::pop()
{
    if(top==NULL)
        cout<<"Underflow";
    else
    {
        cout<<endl<<top->data<<" has been deleted";
        top=top->next;
    }
}
void stk::disp()
{
    node *temp=top;
    if(top==NULL)
        cout<<"Undeflow";
    else
    {
        cout<<endl;
        while(temp!=NULL)
        {
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<"NULL";
    }
}
int main()
{
    stk obj;
    obj.push(10);
    obj.push(20);
    obj.push(30);
    obj.push(40);
    obj.disp();
    obj.pop();
    obj.disp();
    return 0;
}
