#include<iostream>
#include<stdlib.h>
using namespace std;

struct node
{
    int info;
    node *next;
}*head=NULL, *tail=NULL;

class Link{

public:
void insert_last(int value)
{
     struct node *temp;
    temp=new node;

    temp->info=value;
    temp->next=NULL;

    if(head==NULL)           //underflow
    {
        head=temp;
        tail=temp;
    }
    else
    {
        tail->next=temp;
        tail=temp;
    }
    temp=NULL;
}

void insert_first(int value)
{
    node *temp=new node;
    temp->info=value;
    temp->next=NULL;

    if(head==NULL)           //underflow
    {
        head=temp;
        tail=temp;
    }
    else
    {
        temp->next=head;
        head=temp;
    }
    temp=NULL;

}

void insert_after(int value, int x)
{
    node *temp=new node;
    node *trav=new node;
    temp->info=value;
    temp->next=NULL;

    if(head==NULL)           //underflow
    {
        head=temp;
        tail=temp;
    }
    else
    {
        for(trav=head;trav!=NULL;trav=trav->next)
        {
            if(trav->info==x)
            {
                break;
            }
        }
        temp->next=trav->next;
        trav->next=temp;
    }

}

void delete_first()
{
    if(head==NULL||tail==NULL)
    {
        cout<<"No elements to delete!!";
    }
    else
    {
        head = head->next;
    }
}

void delete_last()
{
    node *trav = new node;
    node *pre = new node;

    if(head==NULL||tail==NULL)
    {
        cout<<"No elements to delete!!";
    }
    else
    {
    trav=head;
    while(trav->next!=NULL)
    {
        pre=trav;
        trav=trav->next;
    }
        pre->next=NULL;
    }
}

void delete_after(int x)
{
    node *trav = new node;
    node *pre = new node;

    if(head==NULL||tail==NULL)
    {
        cout<<"No elements to delete!!";
    }
    else
    {
        trav=head;
        while(trav->info!=x)
        {
            pre=trav;
            trav=trav->next;
        }
        pre->next=trav->next;
        trav=NULL;
    }
}
void sorting()
{
    node *temp = new node;
    node *trav = new node;
}

void display()
{
    struct node *temp = new node;
    temp=head;
    while(temp!=NULL)
    {
        cout<<temp->info<<"-->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
};


int main()
{
    Link l;
 int x,n,p;
    while(x!=8)
    {
    cout<<"1. Insert first 2.Insert middle 3.Insert last 4.Display the queue 5.Delete from first 6.Delete from last 7.Delete a value 8.Exit"<<endl;
    cin>>x;

    switch(x)
    {
    case 1:
        cout<<"Enter a number: "<<endl;
        cin>>n;
        l.insert_first(n);
        break;
    case 2:
        cout<<"Enter a number: "<<"Insert the position: "<<endl;
        cin>>n>>p;
        l.insert_after(n,p);
        break;
    case 3:
        cout<<"Enter a number"<<endl;
        cin>>n;
        l.insert_last(n);
        break;
    case 4:
        cout<<"Displaying data..."<<endl;
        l.display();
        break;
    case 5:
        l.delete_first();
        break;
    case 6:
        l.delete_last();
        break;
    case 7:
        cout<<"Which element you want to delete: "<<endl;
        cin>>n;
        l.delete_after(n);
        break;
    case 8:
        exit(0);
    }
    }
   return 0;

}
