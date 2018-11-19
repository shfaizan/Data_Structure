#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
class circularLinkedlist
{
    node *tail;
    public:
        circularLinkedlist()
        {
            tail=NULL;
        }
        void addEnd(int val)
        {
            node *temp=new node;
            temp->data=val;
            temp->next=NULL;
            if(tail==NULL)
            {
                tail=temp;
                tail->next=tail;
            }
            else
            {
                temp->next=tail->next;
                tail->next=temp;
                tail=temp;
            }
        }
        void addFirst(int val)
        {
            node *temp;
            temp->data=val;
            temp->next=NULL;
            if(tail==NULL)
            {
                tail=temp;
                tail->next=tail;
            }
            else
            {

                temp->next=tail->next;
                tail->next=temp;
            }
        }
        void addAfter(int val,int pos)
        {
            node *temp,*q;
            q=tail->next;
            for(int i=0;i<=pos-1;i++)
            {
                q=q->next;
            }
            temp->data=val;
            temp->next=q->next;
            q->next=temp;
            if(q==tail)
            {
                tail=temp;
            }
        }
        void display()
        {
            node *temp=tail->next;
            while(temp!=tail)
            {
                cout<<temp->data<<"\t";
                temp = temp->next;
            }
            cout<<temp->data;
            cout<<endl;
        }
};
int main()
{
    circularLinkedlist l;
    int c,n;
    while(1)
    {
        cout<<"1->Enter At Beginning:\n2->Enter In The Middle:\n3->Enter At The End:\n4->Display:\n5->Exit:"<<endl;
        cin>>c;
        switch(c)
        {
            case 1: cout<<"Enter Element to Enter:";
                    cin>>c;
                    l.addEnd(c);
                    break;
            case 2: cout<<"Enter Element to Enter:";
                    cin>>c;
                    cout<<"Enter position";
                    cin>>n;
                    l.addAfter(c,n);
                    break;
            case 3: cout<<"Enter Element to Enter:";
                    cin>>c;
                    l.addEnd(c);
                    break;

            case 4: l.display();
                    break;
            case 5: exit(0);
                    break;
            default: cout<<"Invalid Input."<<endl;
                     break;
        }
    }
    return 0;
}
